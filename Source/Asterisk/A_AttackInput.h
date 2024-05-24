#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "A_AttackInput.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASTERISK_API UA_AttackInput : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UA_AttackInput();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
