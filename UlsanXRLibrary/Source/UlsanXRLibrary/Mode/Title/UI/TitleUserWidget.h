// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Global/ULXREnum.h"
#include "Global/BaseGameInstance.h"
#include "TitleUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class ULSANXRLIBRARY_API UTitleUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void NativeConstruct();

	UFUNCTION(BlueprintCallable)
	void MainWidgetInit();

	UFUNCTION(BlueprintCallable)
	void CreateChildWidget(ETitleUIType _Type, TSubclassOf<UUserWidget> _Widget, int _ZOrder);

	void SetMainWidget(class UTitleUserWidget* _MainWidget)
	{
		MainWidget = _MainWidget;
	}
	UFUNCTION(BlueprintCallable)
	class UTitleUserWidget* GetMainWidget()
	{
		return MainWidget;
	}

	UFUNCTION(BlueprintCallable)
	void SetZOrder(int _Order);

	UFUNCTION(BlueprintCallable)
	void VisibleChangeUI(ETitleUIType _Type, ESlateVisibility _Value);

	// ���� ���� �Լ�
	UFUNCTION(BlueprintCallable)
	void StartServer();

	UFUNCTION(BlueprintCallable)
	virtual void Connect();
	//

	// �ִϸ��̼� ��� �Լ�
	void PlayAnim(EUMGSequencePlayMode::Type _mode);

	UWidgetAnimation* GetCurAnimation()
	{
		return CurPlayAnim;
	}


private:
	UPROPERTY(Category = "UI", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UTitleUserWidget* MainWidget;

	class UCanvasPanel* CanvasPanel;
	class UTitleUserWidget* CurWidget;

	UPROPERTY()
	TMap<ETitleUIType, UTitleUserWidget*> Wigets;


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server", meta = (AllowPrivateAccess = "true"))
	FString IP = TEXT("127.0.0.1");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server", meta = (AllowPrivateAccess = "true"))
	FString Port = TEXT("30000");

	UWidgetAnimation* CurPlayAnim = nullptr;
};
