#include "GeometryInteractionComponent.h"

float UGeometryInteractionComponent::DistanceToPoint(const FVector& Point) const
{
    if (!GetOwner())
        return 0.0f;

    return FVector::Distance(GetOwner()->GetActorLocation(), Point);
}

float UGeometryInteractionComponent::ForwardDot(const FVector& TargetPoint) const
{
    if (!GetOwner())
        return 0.0f;

    const FVector Forward = GetOwner()->GetActorForwardVector();
    const FVector Direction = (TargetPoint - GetOwner()->GetActorLocation()).GetSafeNormal();

    return FVector::DotProduct(Forward, Direction);
}

FVector UGeometryInteractionComponent::DirectionToPoint(const FVector& TargetPoint) const
{
    if (!GetOwner())
        return FVector::ZeroVector;

    return (TargetPoint - GetOwner()->GetActorLocation()).GetSafeNormal();
}