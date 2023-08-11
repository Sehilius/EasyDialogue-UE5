// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogueComponent.generated.h"

class FDialogueBoxEvent;

UCLASS( Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EASYDIALOGUE_API UDialogueComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDialogueComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "OnInteracionStarted"))
	//void OnInteractionStarted();

	////, meta = (DisplayName = "Begin Play")

	////virtual UFUNCTION(BlueprintImplementableEvent)
	//void OnInteractionFinished();


	
	DECLARE_DYNAMIC_DELEGATE(FDialogueBoxEvent);

	UPROPERTY(BlueprintReadWrite, Category = "Event Binding")
		FDialogueBoxEvent DialogueBoxEvent;

	UFUNCTION(BlueprintCallable, Category = "Event Binding")
		 void SetDialogueBoxEvent(FDialogueBoxEvent Event, FName DialogueBoxName);
		//void SetDialogueBoxEvent_Implementation();

	UFUNCTION(BlueprintImplementableEvent, Category = "Event Binding")
	void BindDialogueBoxEvent(const FName& DialogueBoxName);
	void BindDialogueBoxEvent_Implementation(const FName& DialogueBoxName);


	//UFUNCTION(BlueprintImplementableEvent)
	//	FString TestFunction(const FString& test);
	

	/*UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = test)
		void AddPanelToViewport(TSubclassOf<UUserWidget> panelClass, AActor* referencedActor);*/

	

};
