// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NarrativeCommonUIFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVECOMMONUI_API UNarrativeCommonUIFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	//Add a notification to the Narrative HUD, provided one has been created 
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, Category = "Narrative Common UI", meta = (DisplayName = "Show Narrative HUD Notification", WorldContext = "WorldContextObject"))
	static void PushHUDNotification(const UObject* WorldContextObject, FText Message, const float Duration = 5.f);
};
