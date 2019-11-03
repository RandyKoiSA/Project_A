// Copyrighted by Devoted Koi 2019

#include "NameCaller.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UNameCaller::UNameCaller(): SizeOfInventory(32)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNameCaller::BeginPlay()
{
	Super::BeginPlay();

	FString ActorName= GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s"), *ActorName)
	// ...
	
}


// Called every frame
void UNameCaller::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}