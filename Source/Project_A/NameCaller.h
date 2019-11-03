// Copyrighted by Devoted Koi 2019

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NameCaller.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_A_API UNameCaller : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNameCaller();

	UPROPERTY(EditAnywhere)
		int32 SizeOfInventory;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
