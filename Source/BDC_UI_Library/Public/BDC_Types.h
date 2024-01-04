#pragma once
#include "CoreMinimal.h"
#include "BDC_Types.generated.h"

UENUM(BlueprintType)
enum class EHUD_Container : uint8
{
	ContainerElement UMETA(DisplayName = "Element"),
	ContainerWindow UMETA(DisplayName = "Window"),
	ContainerPrompt UMETA(DisplayName = "Prompt"),
	ContainerFree UMETA(DisplayName = "Free")
};

UENUM(BlueprintType)
enum class EAlignH : uint8
{
	AlignHL UMETA(DisplayName = "Left"),
	AlignHC UMETA(DisplayName = "Center"),
	AlignHR UMETA(DisplayName = "Right"),
	AlignHS UMETA(DisplayName = "Stretch")
};

UENUM(BlueprintType)
enum class EAlignV : uint8
{
	AlignVT UMETA(DisplayName = "Top"),
	AlignVC UMETA(DisplayName = "Center"),
	AlignVB UMETA(DisplayName = "Bottom"),
	AlignVS UMETA(DisplayName = "Stretch")
};

USTRUCT(BlueprintType)
struct FBDC_TooltipSetup
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LoH|Instance|Interface|Tooltip")
	FText Tooltip_Header = FText::FromString("");
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LoH|Instance|Interface|Tooltip")
	FText Tooltip_Text = FText::FromString("");
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LoH|Instance|Interface|Tooltip")
	float Tooltip_Delay = 3.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="LoH|Instance|Interface|Tooltip")
	bool Tooltip_Visible = true;
};

USTRUCT(BlueprintType)
struct FPanelSlotSetting
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="BDC_CommonUI|PanelSlotSetting")
	EAlignH HorizontalAlignment = EAlignH::AlignHL;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="BDC_CommonUI|PanelSlotSetting")
	EAlignV VerticalAlignment = EAlignV::AlignVT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="BDC_CommonUI|PanelSlotSetting")
	int OffsetLeft = 0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="BDC_CommonUI|PanelSlotSetting")
	int OffsetRight_and_PositionX = 0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="BDC_CommonUI|PanelSlotSetting")
	int OffsetTop_and_PositionY = 0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="BDC_CommonUI|PanelSlotSetting")
	int OffsetBottom = 0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="BDC_CommonUI|PanelSlotSetting")
	FVector2D UIPivot = FVector2D(0.5, 0.5);
};