// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "EnhancedActionKeyMapping.h"
#include "Engine/DataTable.h"
#include "CommonUI/Public/CommonUITypes.h"
#include "CommonInputBaseTypes.h"
#include "BDC_UI_Interface.h"
#include "Components/Widget.h"
#include "Components/PanelSlot.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/OverlaySlot.h"
#include "Kismet/KismetMathLibrary.h"
#include "BDC_UI_FunctionLibrary.generated.h"

class UInputAction;
class UInputMappingContext;

//This Enum is to handle Return Executions of the GetKeyDataOfInput Function.
UENUM()
enum class EKeyHitReturn : uint8
{
	KeyIsHit UMETA(DisplayName = "Is Key"),
	KeyIsNotHit UMETA(DisplayName = "is Not Key")
};

USTRUCT(BlueprintType)
struct FSourceTargetOffset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BDC_CommonUI|Helpers")
	float Source_X = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BDC_CommonUI|Helpers")
	float Source_Y = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BDC_CommonUI|Helpers")
	float Target_X = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BDC_CommonUI|Helpers")
	float Target_Y = 0.0f;
};

USTRUCT(BlueprintType)
struct FLineSystem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BDC_CommonUI|Helpers")
	TArray<FVector2D> LinePoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BDC_CommonUI|Helpers")
	FName LineTag = "None";
};

UCLASS()
class BDC_UI_LIBRARY_API UBDC_UI_FunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
		// Get an icon of a Key
		UFUNCTION(BlueprintCallable, BlueprintPure = true, Category = "BDC_CommonUI|Helpers|Inputs")
			static void GetKeyIcon(UObject* IconDataObject, FKey InputKey, UTexture2D*& KeyIcon);

		// Get Key of CommonInput
		UFUNCTION(BlueprintCallable, BlueprintPure = true, Category = "BDC_CommonUI|Helpers|Inputs")
			static void GetCommonKey(FDataTableRowHandle InputData, FText& KeyName, FKey& FoundKeyKeyboard, FKey& FoundKeyGamepad);

		// Get Key of Enhanced Input
		UFUNCTION(BlueprintCallable, BlueprintPure = true, Category = "BDC_CommonUI|Helpers|Inputs")
			static void GetEnhancedKeys(UInputMappingContext* OfContext, UInputAction* OfAction, TArray<FKey>& FoundKeys, TArray<FText>& InputNames);

		// Ask if an Input Key is equal to a Key in the CommonUI Input DataTables. Useful for OnKeyDown/Up functions.
		UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "BDC_CommonUI|Helpers|Inputs", meta = (ExpandEnumAsExecs = "Returns"))
			static void GetKeyDataOfInput(ECommonInputType InputType, FDataTableRowHandle InputData, FKey InputKey, bool& bHasHoldAction, float& HoldTarget, FKey& TargetedKey, EKeyHitReturn& Returns);

		// Ask if an Input Key is equal to a Key in the Enhanced Input Context. Useful for OnKeyDown/Up functions.
		UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "BDC_CommonUI|Helpers|Inputs", meta = (ExpandEnumAsExecs = "Returns"))
			static void GetEnhancedKeyOfInput(UInputMappingContext* OfContext, UInputAction* OfAction, FKey InputKey, bool& bHasHoldAction, float& HoldTarget, FKey& TargetedKey, EKeyHitReturn& Returns);



		// Setup a Canvas/Overlay Slots Anchor, Offset and Alignment.
		UFUNCTION(BlueprintCallable, BlueprintPure = false, Category = "BDC_CommonUI|Helpers|Widgets")
			static void SetupPanelSlot(UPanelSlot* Slot, FPanelSlotSetting Settings, UPanelSlot*& ReturnedSlot);

		// Get the Look At Angle of two Vector2D Positions
		UFUNCTION(BlueprintCallable, BlueprintPure = true, Category = "BDC_CommonUI|Helpers|Widgets")
			static void GetWidgetLookAt(FVector2D Source, FVector2D Target, float& Angle);

		// Get the Points between two Positions
		UFUNCTION(BlueprintCallable, BlueprintPure = true, Category = "BDC_CommonUI|Helpers|Widgets")
			static void GetLinePointsBetween(FVector2D Source, FVector2D Target, FVector2D SourceOffset, FVector2D TargetOffset, FSourceTargetOffset LineOffset, bool bStraightLine, FName TagOfLine, FLineSystem& Points);

		// Get a Visibility based on a bool
		UFUNCTION(BlueprintCallable, BlueprintPure = true, Category = "BDC_CommonUI|Helpers|Widgets")
			static void GetVisibleOfBool(bool bInput, bool bInverse, bool bFullVisible, ESlateVisibility& Visibility);
};
