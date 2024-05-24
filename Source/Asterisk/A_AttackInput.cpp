#include "A_AttackInput.h"

// Sets default values for this component's properties
UA_AttackInput::UA_AttackInput()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UA_AttackInput::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UA_AttackInput::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

