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

	bool IsChild(UTitleUserWidget* _Top);

	UFUNCTION(BlueprintCallable)
	void WidgetTopView(UTitleUserWidget* _Top);

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
	class UTitleUserWidget* GetWidget(ETitleUIType _Tpye)
	{
		return Wigets[_Tpye];
	}

	UFUNCTION(BlueprintCallable)
	void SetZOrder(int _Order);

	UFUNCTION(BlueprintCallable)
	void VisibleChangeUI(ETitleUIType _Type, ESlateVisibility _Value);

	// 서버 연결 함수
	UFUNCTION(BlueprintCallable)
	virtual void StartServer();

	UFUNCTION(BlueprintCallable)
	void ConnectBookTravel(const FString& _IP, const FString& _Port);

	UFUNCTION(BlueprintCallable)
	void StartBookTravel(const FString& _IP, const FString& Name);

	// 서버 연결 함수
	//UFUNCTION(BlueprintCallable)
	//virtual void StartOnlineServer();

	UFUNCTION(BlueprintCallable)
	virtual void Connect();

	UFUNCTION(BlueprintCallable)
	void ServerTravelToWorld();

	UFUNCTION(BlueprintCallable)
	void ClientTravelToWorld();

	UFUNCTION(BlueprintCallable)
	void SetConnection();
	



	UFUNCTION(BlueprintCallable)
	virtual void CheckInput(const FString& _IP);

	UFUNCTION(BlueprintCallable)
	void CreateServer();






	//레벨 스트리밍
	UFUNCTION(BlueprintCallable)
	void OpenStreamingLevel();


	//UFUNCTION(BlueprintCallable)
	//void CheckServer(const FString& _IP, const FString& _Port);

	//class UWidgetAnimation* CurPlayAnim = nullptr;


	//class UWidgetAnimation* CurPlayAnim = nullptr;




	// 애니메이션 재생 함수

	UFUNCTION(BlueprintCallable)
	void PlayAnim(EUMGSequencePlayMode::Type _mode);

	UWidgetAnimation* GetCurAnimation()
	{
		return CurPlayAnim;
	}


	//메인 위젯에서 ui 가져오기
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void GetWidgetFromMain(ETitleUIType _Type);


private:
	UPROPERTY(Category = "UI", EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UTitleUserWidget* MainWidget;

	class UCanvasPanel* CanvasPanel;
	class UTitleUserWidget* CurWidget;

	UPROPERTY()
	TMap<ETitleUIType, UTitleUserWidget*> Wigets;


	// 입장시 ip 체크 관련



	//UPROPERTY(meta = (BindWidgetAnim), Transient)
	//UWidgetAnimation* IPIsNotValid;


	FSocket* Socket;
protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Server", meta = (AllowPrivateAccess = "true"))
	bool bIPIsValid = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server", meta = (AllowPrivateAccess = "true"))
	FString IP = TEXT("127.0.0.1");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server", meta = (AllowPrivateAccess = "true"))
	FString Port = TEXT("30000");



	UWidgetAnimation* CurPlayAnim = nullptr;
};
