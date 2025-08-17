// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/ULXRConst.h"

// UI �г� �̸�
FName UULXRConst::UI::TitleMainPanelName = TEXT("MainCanvasPanel");
FName UULXRConst::UI::PlayMainPanelName = TEXT("MainCanvasPanel");

// ������ �� �̸�
FString UULXRConst::Level::PlayLevelName = TEXT("PlayLevel");
//FString UULXRConst::Level::PlayLevelName = TEXT("01PlayLevel");
FString UULXRConst::Level::TitleLevelName = TEXT("TitleLevel");
FString UULXRConst::Level::EndLevelName = TEXT("EndLevel");

//�ݸ��� ��������
FName UULXRConst::Collision::ProfileName_Player = TEXT("Player");
FName UULXRConst::Collision::ProfileName_Item = TEXT("Item");
FName UULXRConst::Collision::ProfileName_WidgetInter = TEXT("WidgetInter");

//DatatablePath
FString UULXRConst::Path::GlobalDataTablePath =TEXT("/Game/BP/Global/Data/DT_GlobalDataTable.DT_GlobalDataTable");

// Title -> Play �̵� 
int UULXRConst::Title::MaxPlayer = 2

;