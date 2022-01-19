// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

#include "Engine/DataTable.h"
#include "ProjectileObject.generated.h"

USTRUCT(BlueprintType)
struct FProjectileEffect : public FTableRowBase
{

	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Effect;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Description;
};

class USPhereComponent;
class UBoxComponent;

UCLASS()
class CODETESTPROJ_API AProjectileObject : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProjectileObject();
	//FString ObjTypeS;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;


	//UPROPERTY(VisibleAnywhere, Category = "Components")
		//UBoxComponent* HitBox;
	// Projectile movement component

	//UPROPERTY(VisibleAnywhere, Category = "Chillin")
		//USceneComponent* RootComponent;

	UPROPERTY(VisibleAnywhere, Category = Movement)
		UProjectileMovementComponent* ProjectileMovementComponent;

// Sphere mesh component
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
		UStaticMeshComponent* ProjectileMeshComponent;

	// Sphere collision component
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Projectile)
		USphereComponent* CollisionComponent;

	

protected:
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UDataTable* EffectDataTable;
};
