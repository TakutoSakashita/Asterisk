#include "A_PlayerAnimNotifyState.h"
#include "A_Player.h"
#include "DebugHelpers.h"

UA_PlayerAnimNotifyState::UA_PlayerAnimNotifyState()
{
}

void UA_PlayerAnimNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	// Žæ“¾
	if (!PlayerCharacter)
	{
		PlayerCharacter = Cast<AA_Player>(MeshComp->GetOwner());
	}

}

void UA_PlayerAnimNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
}

void UA_PlayerAnimNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
}
