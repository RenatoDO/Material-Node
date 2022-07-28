// Copyright Epic Games, Inc. All Rights Reserved.


#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "MaterialExpressionIO.h"
#include "Materials/MaterialExpression.h"
#include "MaterialExpressionSpectrum.generated.h"

UENUM()
enum ESpectrumType
{
	Jet UMETA(ToolTip = "MATLAB Jet Spectrum"), 
	Bruton UMETA(ToolTip = "Dan Bruton"),
	GPU_Gems UMETA(ToolTip = "GPU Gems"),
	Spektre UMETA(ToolTip = "Spektre"),
	Zucconi UMETA(ToolTip = "Optimised by Alan Zucconi"),
	Zucconi6 UMETA(ToolTip = "Optimised by Alan Zucconi"),
	Visible UMETA(ToolTip = "Default Spectrum"),
};

UCLASS(collapsecategories, hidecategories = Object, MinimalAPI)
class UMaterialExpressionSpectrum : public UMaterialExpression
{
	GENERATED_UCLASS_BODY()

	UPROPERTY()
	FExpressionInput Wavelength;

	UPROPERTY(EditAnywhere, Category = MaterialExpressionSpectrum)
	TEnumAsByte<enum ESpectrumType> Spectrum_Type;


	//~ Begin UMaterialExpression Interface
#if WITH_EDITOR
	virtual int32 Compile(class FMaterialCompiler* Compiler, int32 OutputIndex) override;
	virtual void GetCaption(TArray<FString>& OutCaptions) const override;
#endif
	//~ End UMaterialExpression Interface
};

