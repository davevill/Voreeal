#pragma once

#include "VActor.h"
#include "VBasicVolumeComponent.h"
#include "VBasicVolumeActor.generated.h"

UCLASS(ComponentWrapperClass)
class VOREEAL_API ABasicVolumeActor : public AVActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Voreeal, meta = (ExposeFunctionCategories = "Mesh,Rendering,Physics,Components|StaticMesh", AllowPrivateAccess = "true"))
	UBasicVolumeComponent* BasicVolumeComponent;

public:
	ABasicVolumeActor(const class FObjectInitializer& ObjectInitializer);

	// Begin AActor Interface
#if WITH_EDITOR
	virtual void CheckForErrors() override;
	virtual bool GetReferencedContentObjects(TArray<UObject*>& Objects) const override;
#endif // WITH_EDITOR	
	// End AActor Interface

protected:
	// Begin UObject Interface
	virtual FString GetDetailedInfoInternal() const override;
	// End UObject Interface

public:
	UBasicVolumeComponent* GetBasicVolumeComponent() const;
};
