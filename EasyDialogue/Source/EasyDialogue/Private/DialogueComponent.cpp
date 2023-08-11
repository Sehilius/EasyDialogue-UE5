// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueComponent.h"


// Sets default values for this component's properties
UDialogueComponent::UDialogueComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDialogueComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDialogueComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

//UDialogueComponent::FDialogueBoxEvent DialogueBoxEvent;

void UDialogueComponent::SetDialogueBoxEvent(FDialogueBoxEvent Event, FName DialogueBoxName)
{
	DialogueBoxEvent = Event;
	BindDialogueBoxEvent(DialogueBoxName);
}

void UDialogueComponent::BindDialogueBoxEvent_Implementation(const FName& DialogueBoxName)
{

}

//void UDialogueComponent::SetDialogueBoxEvent_Implementation()
//{
//	
//}





//void UDialogueComponent::SetDialogueBoxEvent_Implementation(const FDialogueBoxEvent& Event)
//{
//}



//static UDialogueComponent::FDialogueBoxEvent DialogueBoxEvent;



