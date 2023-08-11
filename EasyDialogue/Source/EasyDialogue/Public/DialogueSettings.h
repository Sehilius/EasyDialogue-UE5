// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DialogueSettings.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class EASYDIALOGUE_API UDialogueSettings : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
		class USoundWave* ProceedSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
		class USoundWave* GiveAnswerSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
		class USoundWave* HoverAnswerSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
		class USoundWave* FastForwardEnabledSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
		class USoundWave* FastForwardDisabledSound;



	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sprites")
		class UTexture* DialogueNameBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sprites")
		class UTexture* DialogueTextBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sprites")
		class UTexture* AnswerHovered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sprites")
		class UTexture* AnswerNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sprites")
		class UTexture* AnswersBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sprites")
		class UTexture* ProceedIcon;*/




};
