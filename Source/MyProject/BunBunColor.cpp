// Fill out your copyright notice in the Description page of Project Settings.

#include "UObject/ConstructorHelpers.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "BunBunColor.h"

// Sets default values for this component's properties
UBunBunColor::UBunBunColor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	Material = nullptr;
	

	// ...
}



// Called when the game starts
void UBunBunColor::BeginPlay()
{
	Super::BeginPlay();
	//TArray<UStaticMeshComponent*> Components;
	//Actor->GetComponents<UStaticMeshComponent>(Components);
	//UStaticMeshComponent* StaticMeshComponent = Components[0];
	
	UStaticMeshComponent* StaticMeshComponent = GetOwner()->FindComponentByClass<UStaticMeshComponent>();
	StaticMeshComponent->SetMaterial(0, Material);
	
	// ...
	
}


// Called every frame
void UBunBunColor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

