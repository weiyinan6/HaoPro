// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "NarrativeCommonUISubsystem.generated.h"

/**
 * Currently just used to provide efficient access to the narrative HUD, but may be used for more in future. 
 */
UCLASS()
class NARRATIVECOMMONUI_API UNarrativeCommonUISubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public: 	

	//Cached common hud 
	UPROPERTY(BlueprintReadOnly, Category = "Narrative Common UI")
	class UNarrativeCommonHUD* CommonHUD;

	//Send a notification to the narrative HUD
	UFUNCTION(BlueprintCallable, Category = "Narrative Common UI")
	void ShowNotification(const FText& NotificationText, const float Duration = 5.f);

	//Tell the Narrative HUD to open a menu - TODO  possibly add when we're ready to make NarrativeMenu native
	//UFUNCTION(BlueprintCallable, Category = "Narrative Common UI")
	//void OpenMenu(const FText& NotificationText, const float Duration = 5.f);
};
