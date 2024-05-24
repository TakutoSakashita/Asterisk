#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "A_PlayerAnimNotifyState.generated.h"

class AA_Player;

UCLASS()
class ASTERISK_API UA_PlayerAnimNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:
	UA_PlayerAnimNotifyState();

public:
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime);
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);

protected:
	AA_Player* PlayerCharacter;
};
