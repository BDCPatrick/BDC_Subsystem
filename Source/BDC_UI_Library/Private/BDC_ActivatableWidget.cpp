#include "BDC_ActivatableWidget.h"
#include "CommonUI/Private/Input/UIActionRouterTypes.h"
#include "Input/CommonUIInputTypes.h"

void UBDC_ActivatableWidget::NativeDestruct()
{
	for (FUIActionBindingHandle Handle : BindingHandles)
	{
		if (Handle.IsValid())
		{
			Handle.Unregister();
		}
	}
	BindingHandles.Empty();

	Super::NativeDestruct();
}

void UBDC_ActivatableWidget::RegisterBinding(FDataTableRowHandle InputAction, const bool bDisplayInBar, const FInputActionExecutedDelegate& Callback, FInputActionBindingHandleBDC& BindingHandle)
{
	FBindUIActionArgs BindArgs(InputAction, FSimpleDelegate::CreateLambda([InputAction, Callback]()
		{
			Callback.ExecuteIfBound(InputAction.RowName);
		}));
	BindArgs.bDisplayInActionBar = bDisplayInBar;

	BindingHandle.Handle = RegisterUIActionBinding(BindArgs);
	BindingHandles.Add(BindingHandle.Handle);
}

void UBDC_ActivatableWidget::UnregisterBinding(FInputActionBindingHandleBDC BindingHandle)
{
	if (BindingHandle.Handle.IsValid())
	{
		BindingHandle.Handle.Unregister();
		BindingHandles.Remove(BindingHandle.Handle);
	}
}


void UBDC_ActivatableWidget::UnregisterAllBindings()
{
	for (FUIActionBindingHandle Handle : BindingHandles)
	{
		Handle.Unregister();
	}
	BindingHandles.Empty();
}

