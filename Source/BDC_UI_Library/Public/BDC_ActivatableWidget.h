#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CommonActivatableWidget.h"
#include "BDC_ActivatableWidget.generated.h"


DECLARE_DYNAMIC_DELEGATE_OneParam(FInputActionExecutedDelegate, FName, ActionName);

USTRUCT(BlueprintType)
struct FInputActionBindingHandleBDC
{
	GENERATED_BODY()

public:
	FUIActionBindingHandle Handle;
};

/**
 * Extends UCommonActivatableWidget with Blueprint-visible functions for registering additional input action bindings.
 */
UCLASS()
class BDC_UI_LIBRARY_API UBDC_ActivatableWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeDestruct() override;

	UFUNCTION(BlueprintCallable, Category = ExtendedActivatableWidget)
		void RegisterBinding(FDataTableRowHandle InputAction, bool bDisplayInBar, const FInputActionExecutedDelegate& Callback, FInputActionBindingHandleBDC& BindingHandle);

	UFUNCTION(BlueprintCallable, Category = ExtendedActivatableWidget)
		void UnregisterBinding(FInputActionBindingHandleBDC BindingHandle);

	UFUNCTION(BlueprintCallable, Category = ExtendedActivatableWidget)
		void UnregisterAllBindings();

private:
	TArray<FUIActionBindingHandle> BindingHandles;
	
};
