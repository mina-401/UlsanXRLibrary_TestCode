// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/Object/Interface/ItemInterface.h"

UItemInterface::UItemInterface(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}
void IItemInterface::InterectUpdate(class AItem* _Item,float _DeltaTime)
{

}
void IItemInterface::InterectStart(class AItem* _Item)
{

}
void IItemInterface::InterectEnd(class AItem* _Item)
{

}