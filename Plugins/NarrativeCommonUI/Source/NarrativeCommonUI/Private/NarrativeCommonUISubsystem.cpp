// Copyright Narrative Tools 2022. 


#include "NarrativeCommonUISubsystem.h"
#include "NarrativeCommonHUD.h"

void UNarrativeCommonUISubsystem::ShowNotification(const FText& NotificationText, const float Duration)
{
	if (CommonHUD && !NotificationText.IsEmptyOrWhitespace())
	{
		CommonHUD->ShowNotification(NotificationText, Duration);
	}
}
