#include "BDC_UI_FunctionLibrary.h"
#include <Blueprint/WidgetBlueprintLibrary.h>
#include "InputMappingContext.h"
#include "Widgets/Layout/Anchors.h"
#include "CommonUITypes.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/OverlaySlot.h"
#include "Kismet/KismetMathLibrary.h"

void UBDC_UI_FunctionLibrary::GetKeyIcon(UObject* IconDataObject, FKey InputKey, UTexture2D*& KeyIcon)
{
	UCommonInputBaseControllerData* TargetLibrary = Cast<UCommonInputBaseControllerData>(IconDataObject);
	if (!TargetLibrary)
	{
		KeyIcon = nullptr;
		return;
	}
	for (auto CurrentMap : TargetLibrary->InputBrushDataMap) {
		if (CurrentMap.Key == InputKey) {
			KeyIcon = UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(CurrentMap.KeyBrush);
		}
	}
}

void UBDC_UI_FunctionLibrary::GetCommonKey(FDataTableRowHandle InputData, FText& KeyName, FKey& FoundKeyKeyboard, FKey& FoundKeyGamepad)
{
	const FString ContextString = TEXT("");
	if(const UDataTable* InputDataTable = InputData.DataTable.Get())
	{
		const FName RowName = InputData.RowName;
		if (const auto RowData = InputDataTable->template FindRow<FCommonInputActionDataBase>(RowName, ContextString))
		{
			KeyName = (RowData->GetInputTypeInfo(ECommonInputType::MouseAndKeyboard, "Generic").bActionRequiresHold || RowData->GetInputTypeInfo(ECommonInputType::Gamepad, "Generic").bActionRequiresHold) ? RowData->HoldDisplayName : RowData->DisplayName;
			FoundKeyKeyboard = RowData->GetInputTypeInfo(ECommonInputType::MouseAndKeyboard, "Generic").GetKey();
			FoundKeyGamepad = RowData->GetInputTypeInfo(ECommonInputType::Gamepad, "Generic").GetKey();
		}
	}
}

void UBDC_UI_FunctionLibrary::GetEnhancedKeys(UInputMappingContext* OfContext, UInputAction* OfAction, TArray<FKey>& FoundKeys, TArray<FText>& InputNames)
{
	TArray<FEnhancedActionKeyMapping> ContextMappings = OfContext->GetMappings();
	for (auto& CurrentMapping : ContextMappings) {
		if (CurrentMapping.Action == OfAction) {
			FoundKeys.Add(CurrentMapping.Key);
			InputNames.Add(FText::FromName(CurrentMapping.GetMappingName()));
		}
	}
}

void UBDC_UI_FunctionLibrary::GetKeyDataOfInput(const ECommonInputType InputType, const FDataTableRowHandle InputData, const FKey InputKey, bool& bHasHoldAction, float& HoldTarget, FKey& TargetedKey, EKeyHitReturn& Returns)
{
	const FString ContextString = TEXT("");
	const UDataTable* InputDataTable = InputData.DataTable.Get();
	const FName RowName = InputData.RowName;
	const auto RowData = InputDataTable->template FindRow<FCommonInputActionDataBase>(RowName, ContextString);
	TargetedKey = InputKey;
	if (!RowData)
	{
		bHasHoldAction = false;
		HoldTarget = 0.0f;
		Returns = EKeyHitReturn::KeyIsNotHit;
		return;
	}
	if (RowData->GetDefaultGamepadInputTypeInfo().GetKey() == InputKey)
	{
		bHasHoldAction = RowData->GetDefaultGamepadInputTypeInfo().bActionRequiresHold;
		HoldTarget = RowData->GetDefaultGamepadInputTypeInfo().HoldTime;
		Returns = EKeyHitReturn::KeyIsHit;
		return;
	}
	if (RowData->GetInputTypeInfo(InputType, "Generic").GetKey() == InputKey)
	{
		bHasHoldAction = RowData->GetInputTypeInfo(InputType, "Generic").bActionRequiresHold;
		HoldTarget = RowData->GetInputTypeInfo(InputType, "Generic").HoldTime;
		Returns = EKeyHitReturn::KeyIsHit;
		return;
	}
	bHasHoldAction = false;
	HoldTarget = 0.0f;
	Returns = EKeyHitReturn::KeyIsNotHit;
}

void UBDC_UI_FunctionLibrary::GetEnhancedKeyOfInput(UInputMappingContext* OfContext, UInputAction* OfAction, FKey InputKey, bool& bHasHoldAction, float& HoldTarget, FKey& TargetedKey, EKeyHitReturn& Returns)
{
	TargetedKey = InputKey;

	TArray<FEnhancedActionKeyMapping> ContextMappings = OfContext->GetMappings();
	for (auto CurrentMapping : ContextMappings) {
		if (CurrentMapping.Action == OfAction && CurrentMapping.Key == InputKey) {
			Returns = EKeyHitReturn::KeyIsHit;
			return;
		}
	}
	Returns = EKeyHitReturn::KeyIsNotHit;
	HoldTarget = 0.0f;
	bHasHoldAction = false;
	return;
}

void UBDC_UI_FunctionLibrary::SetupPanelSlot(UPanelSlot* Slot, FPanelSlotSetting Settings, UPanelSlot*& ReturnedSlot)
{
	ReturnedSlot = Slot;

	FAnchors SlotAnchor;
	float HMin = 0.0f, HMax = 0.0f, VMin = 0.0f, VMax = 0.0f;
	FMargin SlotMargin;
	SlotMargin.Left = Settings.OffsetLeft;
	SlotMargin.Top = Settings.OffsetTop_and_PositionY;
	SlotMargin.Right = Settings.OffsetRight_and_PositionX;
	SlotMargin.Bottom = Settings.OffsetBottom;
	EVerticalAlignment VAlign = EVerticalAlignment::VAlign_Fill;
	EHorizontalAlignment HAlign = EHorizontalAlignment::HAlign_Fill;
	switch (Settings.HorizontalAlignment)
	{
	case EAlignH::AlignHL:
		HMin = 0.0f;
		HMax = 0.0f;
		HAlign = EHorizontalAlignment::HAlign_Left;
		break;

	case EAlignH::AlignHC:
		HMin = 0.5f;
		HMax = 0.5f;
		HAlign = EHorizontalAlignment::HAlign_Center;
		break;

	case EAlignH::AlignHR:
		HMin = 1.0f;
		HMax = 1.0f;
		HAlign = EHorizontalAlignment::HAlign_Right;
		break;

	case EAlignH::AlignHS:
		HMin = 0.0f;
		HMax = 1.0f;
		HAlign = EHorizontalAlignment::HAlign_Fill;
		break;
	}

	switch (Settings.VerticalAlignment)
	{
	case EAlignV::AlignVT:
		VMin = 0.0f;
		VMax = 0.0f;
		VAlign = EVerticalAlignment::VAlign_Top;
		break;

	case EAlignV::AlignVC:
		VMin = 0.5f;
		VMax = 0.0f;
		VAlign = EVerticalAlignment::VAlign_Center;
		break;

	case EAlignV::AlignVB:
		VMin = 1.0f;
		VMax = 1.0f;
		VAlign = EVerticalAlignment::VAlign_Bottom; 
		break;

	case EAlignV::AlignVS:
		VMin = 0.0f;
		VMax = 1.0f;
		VAlign = EVerticalAlignment::VAlign_Fill;
		break;
	}
	SlotAnchor.Minimum = FVector2D(HMin, VMin);
	SlotAnchor.Maximum = FVector2D(HMax, VMax);

	if (UCanvasPanelSlot* Slot_Canvas = Cast<UCanvasPanelSlot>(Slot))
	{
		Slot_Canvas->SetAutoSize(true);
		Slot_Canvas->SetAnchors(SlotAnchor);
		Slot_Canvas->SetAlignment(Settings.UIPivot);
		Slot_Canvas->SetOffsets(SlotMargin);
		Slot_Canvas->SetPosition(FVector2D(Settings.OffsetRight_and_PositionX, Settings.OffsetTop_and_PositionY));
		return;
	}
	if (UOverlaySlot* Slot_Overlay = Cast<UOverlaySlot>(Slot))
	{
		Slot_Overlay->SetPadding(SlotMargin);
		Slot_Overlay->SetVerticalAlignment(VAlign);
		Slot_Overlay->SetHorizontalAlignment(HAlign);
		return;
	}
}

void UBDC_UI_FunctionLibrary::GetWidgetLookAt(FVector2D Source, FVector2D Target, float& Angle)
{
	FVector SourceLocation, TargetLocation;
	SourceLocation.X = Source.X;
	SourceLocation.Y = Source.Y;
	SourceLocation.Z = 0.0f;
	TargetLocation.X = Target.X;
	TargetLocation.Y = Target.Y;
	TargetLocation.Z = 0.0f;

	const FRotator Rotation = UKismetMathLibrary::FindLookAtRotation(SourceLocation, TargetLocation);

	Angle = Rotation.Yaw;
}

void UBDC_UI_FunctionLibrary::GetLinePointsBetween(FVector2D Source, FVector2D Target, FVector2D SourceOffset, FVector2D TargetOffset, FSourceTargetOffset LineOffset, bool bStraightLine, FName TagOfLine, FLineSystem& Points)
{
	FLineSystem Returns;
	if (bStraightLine) {
		Returns.LinePoints.Add(Source + SourceOffset + FVector2D(LineOffset.Source_X, LineOffset.Source_Y));
		Returns.LinePoints.Add(Target + TargetOffset + FVector2D(LineOffset.Target_X, LineOffset.Target_Y));
		Returns.LineTag = TagOfLine;
	}

	Points = Returns;
}

void UBDC_UI_FunctionLibrary::GetVisibleOfBool(bool bInput, bool bInverse, bool bFullVisible, ESlateVisibility& Visibility)
{
	if (bInput && bInverse)
	{
		Visibility = ESlateVisibility::Collapsed;
		return;
	}
	if (bInput && bFullVisible)
	{
		Visibility = ESlateVisibility::Visible;
		return;
	}
	if (bInverse && bFullVisible)
	{
		Visibility = (bInput)? ESlateVisibility::Collapsed: ESlateVisibility::Visible;
		return;
	}
	if (bInverse)
	{
		Visibility = (bInput) ? ESlateVisibility::Collapsed : ESlateVisibility::SelfHitTestInvisible;
		return;
	}
	if (bInput)
	{
		Visibility = (bInput) ? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Collapsed;
		return;
	}
	Visibility = ESlateVisibility::Collapsed;
}
