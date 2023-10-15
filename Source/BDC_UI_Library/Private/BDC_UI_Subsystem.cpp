// Fill out your copyright notice in the Description page of Project Settings.

#include "BDC_UI_Subsystem.h"
#include "BDC_ActivatableWidget.h"
#include "Engine/GameViewportClient.h"
#include "Slate/SceneViewport.h"
#include <Kismet/KismetMathLibrary.h>
#include <Blueprint/WidgetBlueprintLibrary.h>

void UBDC_UI_Subsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UBDC_UI_Subsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UBDC_UI_Subsystem::SelectNewWidget(UWidget* NewSelectedWidget, const bool bOverrideLastSelected, const bool bFocusNewSelected, UWidget*& NewCurrent, UWidget*& OldCurrent)
{
	OldCurrent = CurrentSelected;
	CurrentSelected = NewSelectedWidget;
	if(bOverrideLastSelected)
	{
		LastSelected = NewSelectedWidget;
	}
	NewCurrent = CurrentSelected;
	if(bFocusNewSelected)
	{
		if (CurrentSelected) {
			CurrentSelected->SetKeyboardFocus();
			CurrentSelected->SetFocus();
			if (Cast<UBDC_ActivatableWidget>(CurrentSelected))
			{
				Cast<UBDC_ActivatableWidget>(CurrentSelected)->ActivateWidget();
			}
		}
	}
	

	if(OldCurrent)
	{
		if(OldCurrent->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()))
		{
			IBDC_UI_Interface::Execute_Widget_Unhover(OldCurrent);
			IBDC_UI_Interface::Execute_Widget_Update(OldCurrent, 0, FText::FromString(""));
		}
	}
	if(CurrentSelected)
	{
		if(CurrentSelected->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()))
		{
			IBDC_UI_Interface::Execute_Widget_Hover(CurrentSelected);
			IBDC_UI_Interface::Execute_Widget_Update(CurrentSelected, 0, FText::FromString(""));
		}
	}
}

void UBDC_UI_Subsystem::SetLastofUI(FString UI_ID, UWidget* LastSelectedWidget)
{
	LastOfUI.Add(UI_ID, LastSelectedWidget);
}

void UBDC_UI_Subsystem::GetLastOfUI(FString UI_ID, UWidget*& LastOf, bool& bIsValid)
{
	if(LastOfUI.Find(UI_ID))
	{
		LastOf = *LastOfUI.Find(UI_ID);
		bIsValid = true;
	}
	bIsValid = false;
	LastOf = nullptr;
}

void UBDC_UI_Subsystem::InvalidateLastOfUI(FString UI_ID)
{
	LastOfUI.Remove(UI_ID);
}

void UBDC_UI_Subsystem::SetCurrentUI(FName NewCurrentUI)
{
	CurrentUI = NewCurrentUI;
}

void UBDC_UI_Subsystem::GetSelections(FName& LastUI, UWidget*& Last, UWidget*& Current, bool& bValidLast, bool& bValidCurrent)
{
	Last = LastSelected;
	Current = CurrentSelected;
	LastUI = CurrentUI;

	if(LastSelected)
	{
		bValidLast = true;
	}
	if(CurrentSelected)
	{
		bValidCurrent = true;
	}
}

void UBDC_UI_Subsystem::InvalidateSelections()
{
	if(LastSelected)
	{
		if(LastSelected->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()))
		{
			IBDC_UI_Interface::Execute_Widget_Unhover(LastSelected);
			IBDC_UI_Interface::Execute_Widget_Update(LastSelected, 0, FText::FromString(""));
		}
	}
	if(CurrentSelected)
	{
		if(CurrentSelected->GetClass()->ImplementsInterface(UBDC_UI_Interface::StaticClass()))
		{
			IBDC_UI_Interface::Execute_Widget_Unhover(CurrentSelected);
			IBDC_UI_Interface::Execute_Widget_Update(CurrentSelected, 0, FText::FromString(""));
			IBDC_UI_Interface::Execute_Widget_Update(CurrentSelected, 0, FText::FromString(""));
		}
	}
	LastSelected = nullptr;
	LastSelected = nullptr;
	CurrentSelected = nullptr;
	CurrentUI = FName("UI_None_Selected");
	LastOfUI.Empty();
}

void UBDC_UI_Subsystem::OverrideLast(UWidget* NewLast)
{
	LastSelected = NewLast;
}