#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Components/Widget.h"
#include "BDC_UI_Interface.generated.h"


UENUM(BlueprintType)
enum class EHUD_Container : uint8
{
	ContainerFree UMETA(DisplayName = "Free"),
	ContainerHUD UMETA(DisplayName = "HUD"),
	ContainerPrompt UMETA(DisplayName = "Prompt"),
	ContainerOverlay UMETA(DisplayName = "Overlay")
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

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBDC_UI_Interface : public UInterface
{
	GENERATED_BODY()
};

/**
 * This Structure is meant to handle different Input Triggers the System can Switch on.
 * The WidgetTrigger Function is returning such an Enum to add a Select or Switch after it, to
 * drive multiple Actions from this one Function Node.
 */
UENUM(BlueprintType)
enum class ENavigationInputTypeA : uint8
{
	ANAVIGATING_NONE UMETA(DisplayName = "None"),							// Default, always needs to be there, f.e. to have a basic input for a Map
	ANAVIGATING_UP UMETA(DisplayName = "Up"),								// Gamepad used for Direction UP
	ANAVIGATING_DOWN UMETA(DisplayName = "Down"),							// Gamepad used for Direction DOWN
	ANAVIGATING_LEFT UMETA(DisplayName = "Left"),							// Gamepad used for Direction LEFT
	ANAVIGATING_RIGHT UMETA(DisplayName = "Right"),							// Gamepad used for Direction RIGHT
	ANAVIGATING_NEXT UMETA(DisplayName = "Next"),							// Gamepad used for RightShoulder Button
	ANAVIGATING_PREV UMETA(DisplayName = "Previous"),						// Gamepad used for LeftShoulder Button
	ANAVIGATING_IN_SWITCHNEXT UMETA(DisplayName = "Switch to Next"),		// Gamepad used for RightShoulder Trigger
	ANAVIGATING_IN_SWITCHPREV UMETA(DisplayName = "Switch to Previous"),	// Gamepad used for LeftShoulder Trigger
	ANAVIGATING_JUMPNEXT UMETA(DisplayName = "Jump to Next"),				// Gamepad used for Left Stick Button
	ANAVIGATING_JUMPPREV UMETA(DisplayName = "Jump to Previous"),			// Gamepad used for Right Stick Button
	ANAVIGATING_IN_CONFIRM UMETA(DisplayName = "Confirm"),					// Gamepad used for FaceButtonBottom
	ANAVIGATING_IN_CANCEL UMETA(DisplayName = "Cancel"),					// Gamepad used for FaceButtonRight
	ANAVIGATING_IN_SPECIAL1 UMETA(DisplayName = "Special 1"),				// Gamepad used for FaceButtonLeft
	ANAVIGATING_IN_SPECIAL2 UMETA(DisplayName = "Special 2"),				// Gamepad used for FaceButtonTop
	ANAVIGATING_IN_OPTION UMETA(DisplayName = "Option"),					// Gamepad used for Start/Option Key
	ANAVIGATING_IN_SHARE UMETA(DisplayName = "Share"),						// Gamepad used for Share/Community Key
	ANAVIGATING_IN_ADD1 UMETA(DisplayName = "Additional 1"),				// Free to be used
	ANAVIGATING_IN_ADD2 UMETA(DisplayName = "Additional 2"),				// Free to be used
	ANAVIGATING_IN_ADD3 UMETA(DisplayName = "Additional 3"),				// Free to be used
	ANAVIGATING_IN_ADD4 UMETA(DisplayName = "Additional 4"),				// Free to be used
	ANAVIGATING_INVALID UMETA(DisplayName = "Invalid"),						// Free to be used, but normally used to say an Input is not valid
};

class BDC_UI_LIBRARY_API IBDC_UI_Interface
{
	GENERATED_BODY()

public:
	/* The following Functions are normally used to handle the appearance of a Widget. Since this System
	* is not bound to any Focus of CommonUI, this can be used for all kinds of UserWidgets, too. */

	// Should the Widget be hovered
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="BDC_CommonUI|Interface|Widgets")
	void Widget_Hover();
	// Should the Widget be unhovered
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="BDC_CommonUI|Interface|Widgets")
	void Widget_Unhover();
	// Is the Widget being Pressed
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BDC_CommonUI|Interface|Widgets")
	void Widget_Pressed();
	// Is the Widget being Released
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BDC_CommonUI|Interface|Widgets")
	void Widget_Released();
	// Should the Widget be forced to get focus
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="BDC_CommonUI|Interface|Widgets")
	void Widget_Focus();
	// Send Values to a Widget
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="BDC_CommonUI|Interface|Widgets")
	void Widget_SetValue(const int32 InInteger,const float InFloat,const FString& InString,const bool bInBool,const FText& InText,const FName InName,const FVector InVector3,const FVector2D InVector2);
	// Get Values from a Widget
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BDC_CommonUI|Interface|Widgets")
	void Widget_GetValue(int32& InInteger, float& InFloat, FString& InString, bool& bInBool, FText& InText, FName& InName, FVector& InVector3, FVector2D& InVector2);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="BDC_CommonUI|Interface|Widgets")
	// Update the Widgets behaviour or appearance. The Integer is for driving different options
	void Widget_Update(int UpdateMode, const FText& Updateings);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="BDC_CommonUI|Interface|Widgets")
	// Like SetIsEnabled, but as Interface call to drive some own logic.
	void Widget_SetActive(bool bIsActive);
	// Especially for CommonUI, where Gamepad<>Mouse/Keyboard switching is not always working well.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="BDC_CommonUI|Interface|Widgets")
	void Widget_UpdateInputMethod(bool bUsesGamepad);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BDC_CommonUI|Interface|Widgets")
	// Call when changing the IsEnabled state.
	void Widget_EnableStateChanged();

	/* The following Function can be overidden in BP to have a general way to get a default focus target.
	In CommonUI, you always want to override the GetDesiredFocusTarget of a Common Widget for that.*/

	// Override to Return a valid Focus Target
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="BDC_CommonUI|Interface|Widgets")
	UWidget* AskFocusTarget();

	/* The following Functions are used for interacting with a Widget.*/

	// Trigger the Input Action's Function on any Widget this Event is implemented.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BDC_CommonUI|Interface|Widgets")
	void Widget_Trigger(ENavigationInputTypeA InputOfType, bool bOnHold, float HoldDelta);
	// Use this to update the Hold percentage when a HoldAction is on an InputTriggerAction
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BDC_CommonUI|Interface|Widgets")
	void Widget_UpdateHold(float Percentage, bool bIsInvalidated);
	// Interface to handle BackAction in an Event, not just in a function. Events are capable of using timed tasks and delays.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BDC_CommonUI|Interface|Widgets")
	void Widget_DoBack(UWidget* FromWidget, FName FromName, int BackMode);

	// Interface to add a Widget to the HUD
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BDC_CommonUI|Interface|HUD")
	void HUD_AddWidget(UUserWidget* WidgetToAdd, TSubclassOf<UUserWidget> CreatingWidget, FName WidgetName, EHUD_Container IntoContainer, int32 At_Z_Position, FPanelSlotSetting SlotSettings, UWidget*& AddedWidget, UCanvasPanelSlot*& AddedCanvas);

	// Interface to Remove a Widget from the HUD, by the given Widget reference
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BDC_CommonUI|Interface|HUD")
	void HUD_RemoveWidgetByRef(UUserWidget* WidgetToRemove, EHUD_Container OffContainer);

	// Interface to Remove a Widget from the HUD, by the given Widget Name
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BDC_CommonUI|Interface|HUD")
	void HUD_RemoveWidgetByName(FName WidgetToRemove, EHUD_Container OffContainer);

	// Interface to Init the HUD
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BDC_CommonUI|Interface|HUD")
	void HUD_Init();

	// Change the LoadingScreen Visibility
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BDC_CommonUI|Interface|HUD")
	void HUD_UpdateLoading(bool bNewVisible, float FadingTime, USoundBase* AudioToPlay, const FString& Reason);
};
