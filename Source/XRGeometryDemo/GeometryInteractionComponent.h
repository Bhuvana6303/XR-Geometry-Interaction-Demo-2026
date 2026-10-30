#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GeometryInteractionComponent.generated.h"

UCLASS(ClassGroup=(XR), meta=(BlueprintSpawnableComponent))
class XRGEOMETRYDEMO_API UGeometryInteractionComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Geometry")
    float DistanceToPoint(const FVector& Point) const;

    UFUNCTION(BlueprintPure, Category="Geometry")
    float ForwardDot(const FVector& TargetPoint) const;

    UFUNCTION(BlueprintPure, Category="Geometry")
    FVector DirectionToPoint(const FVector& TargetPoint) const;
};