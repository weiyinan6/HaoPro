// Copyright Narrative Tools 2022. 


#include "NarrativeCommonUIFunctionLibrary.h"
#include "NarrativeCommonUISubsystem.h"
#include <Engine/GameInstance.h>
#include <Engine/World.h>
#include <Kismet/GameplayStatics.h>

void UNarrativeCommonUIFunctionLibrary::PushHUDNotification(const UObject* WorldContextObject, FText Message, const float Duration)
{
	//Store the HUD in a subsystem - that way, 
	if (!Message.IsEmptyOrWhitespace())
	{
		if (UGameInstance* GI = UGameplayStatics::GetGameInstance(WorldContextObject))
		{
			if (UNarrativeCommonUISubsystem* NSS = GI->GetSubsystem<UNarrativeCommonUISubsystem>())
			{
				NSS->ShowNotification(Message, Duration);
			}
		}
	}
}
