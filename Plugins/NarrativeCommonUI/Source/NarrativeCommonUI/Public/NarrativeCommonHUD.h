// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "NarrativeCommonHUD.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVECOMMONUI_API UNarrativeCommonHUD : public UCommonUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Notifications")
	void ShowNotification(const FText& NotificationText, const float Duration = 5.f);

};
