#pragma once
#include "CoreMinimal.h"
#include "BDC_UI_Interface.h"
#include "Components/Widget.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CommonUI/Public/CommonUITypes.h"
#include "BDC_UI_Subsystem.generated.h"

class UCanvasPanelSlot;

/**
 * A helper class to provide Widget informations to CommonUI Navigation.
 */

UCLASS(DisplayName="BDC_CommonUI")
class BDC_UI_LIBRARY_API UBDC_UI_Subsystem : public UGameInstanceSubsystem, public IBDC_UI_Interface
{
	GENERATED_BODY()

protected:
	/** Initialize the subsystem */
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

private:
	UPROPERTY()
	UWidget* LastSelected = nullptr; // The last selected Widget of an unspecific UI.
	UPROPERTY()
	UWidget* CurrentSelected = nullptr; // The current selected Widget.
	UPROPERTY()
	FName CurrentUI = FName("UI_None_Selected"); // The name of the current UI
	UPROPERTY()
	TMap<FString, UWidget*> LastOfUI; // The Selections of Widgets on specific UIs.

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BDC_CommonUI|HoldingSystem")
	bool IsInActiveHold = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BDC_CommonUI|HoldingSystem")
	FKey ActiveHoldKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BDC_CommonUI|Helpers")
	bool UsesGamepad = false;

	// Set a new CurrentSelected Widget. WidgetHover and WidgetUnhover Interfaces are called on the Old and New Selections.
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="BDC_CommonUI|Helpers")
	void SelectNewWidget(UWidget* NewSelectedWidget, bool bOverrideLastSelected, bool bFocusNewSelected, UWidget*& NewCurrent, UWidget*& OldCurrent);

	// Set the Widget that was selected on a Different WidgetSwitcher Page. If going back to that Page, this Widget can then be focused again.Using a String as Identifier.
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="BDC_CommonUI|Helpers")
	void SetLastofUI(FString UI_ID, UWidget* LastSelectedWidget);

	// Return the Widget set in the SetLastOfUI, called by the Identifier String.
	UFUNCTION(BlueprintCallable, BlueprintPure=true, Category="BDC_CommonUI|Helpers")
	void GetLastOfUI(FString UI_ID, UWidget*& LastOf, bool& bIsValid);

	// Helper Function to hold the name of the current UI
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="BDC_CommonUI|Helpers")
	void SetCurrentUI(FName NewCurrentUI);

	// Get the Selections and the CurrentUI Name
	UFUNCTION(BlueprintCallable, BlueprintPure=true, Category="BDC_CommonUI|Helpers")
	void GetSelections(FName& LastUI, UWidget*& Last, UWidget*& Current, bool& bValidLast, bool& bValidCurrent);

	// Remove all Selections and Names.
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="BDC_CommonUI|Helpers")
	void InvalidateSelections();

	// Remove LastOfUI Selections
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="BDC_CommonUI|Helpers")
	void InvalidateLastOfUI(FString UI_ID);

	// Override the LastSelected Value, only.
	UFUNCTION(BlueprintCallable, BlueprintPure = false, Category="BDC_CommonUI|Helpers")
	void OverrideLast(UWidget* NewLast);
};