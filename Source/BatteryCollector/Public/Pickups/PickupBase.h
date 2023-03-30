// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupBase.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API APickupBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

#pragma region COMPONENTS

	UPROPERTY(VisibleAnywhere, Category="Components")
	UStaticMeshComponent* PickupMesh;

#pragma endregion


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
