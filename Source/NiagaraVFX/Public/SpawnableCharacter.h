// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SpawnableCharacter.generated.h"

UCLASS()
class NIAGARAVFX_API ASpawnableCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASpawnableCharacter();

	UFUNCTION(BlueprintCallable, category = "Ability")
		void SpawnActor();

	UPROPERTY(EditAnywhere)
		TSubclassOf<AActor> ActorBPToSpawn;
	
	UPROPERTY(EditAnywhere)
		FTransform spawnPos;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
