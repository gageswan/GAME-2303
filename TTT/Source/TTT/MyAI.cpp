// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAI.h"

// Sets default values for this component's properties
UMyAI::UMyAI()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	/*static ConstructorHelpers::FObjectFinder<UBlueprint> myManager(TEXT("Blueprint/Game/GameManager.GameManager"));
	if (myManager.Succeeded())
	{
		manager = (UClass*)myManager.Object->GeneratedClass;
	}*/

	//TSubclassOf<GameManager*> m = managerActor->FindComponentByClass <GameManager>();
	//managerActor->GetComponentsByTag(GameManager, "MANAGER");
}


// Called when the game starts
void UMyAI::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyAI::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	// check if we can win

	// check if player can win, block them

	// take center square

	// take corners

	// choose randomly


}

