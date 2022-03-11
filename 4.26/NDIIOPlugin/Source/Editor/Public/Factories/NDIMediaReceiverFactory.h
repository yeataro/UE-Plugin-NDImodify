/*
	All rights reserved. Copyright(c) 2018-2021, NewTek Inc.

	This file and it's use within a Product is bound by the terms of NDI SDK license that was provided
	as part of the NDI SDK. For more information, please review the license and the NDI SDK documentation.
*/

#pragma once

#include <CoreMinimal.h>
#include <Factories/Factory.h>
#include <UObject/Object.h>

#include "NDIMediaReceiverFactory.generated.h"

/** 
	Factory Class used to create assets via content browser for NDI Receiver objects
*/
UCLASS()
class NDIIOEDITOR_API UNDIMediaReceiverFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	public:
		virtual FText GetDisplayName() const override;
		virtual uint32 GetMenuCategories() const override;

		virtual bool ShouldShowInNewMenu() const override { return true; }
		virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};
