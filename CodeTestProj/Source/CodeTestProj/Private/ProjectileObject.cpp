// Fill out your copyright notice in the Description page of Project Settings.



#include "ProjectileObject.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"

#define PrintString(String) GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::White,String)
// Sets default values
AProjectileObject::AProjectileObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


    HitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    HitBox->OnComponentHit.AddDynamic(this, &AProjectileObject::OnHit);
    if (!RootComponent)
    {
        RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSceneComponent"));
    }

    if (!CollisionComponent)
    {
        // Use a sphere as a simple collision representation.
        CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
        CollisionComponent->OnComponentHit.AddDynamic(this, &AProjectileObject::OnHit);

        // Set the sphere's collision radius.
        CollisionComponent->InitSphereRadius(90.0f);
        // Set the root component to be the collision component.
        RootComponent = CollisionComponent;
    }

    if (!ProjectileMovementComponent)
    {
        // Use this component to drive this projectile's movement.
        ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
        ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
        ProjectileMovementComponent->InitialSpeed = 3000.0f;
        ProjectileMovementComponent->MaxSpeed = 3000.0f;
        ProjectileMovementComponent->bRotationFollowsVelocity = true;
        ProjectileMovementComponent->bShouldBounce = true;
        ProjectileMovementComponent->Bounciness = 0.3f;
        ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
    }

    if (!ProjectileMeshComponent)
    {
        ProjectileMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMeshComponent"));
        static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("'/Game/StarterContent/Shapes/Sphere.Sphere'"));
        if (Mesh.Succeeded())
        {
            ProjectileMeshComponent->SetStaticMesh(Mesh.Object);
        }
    }
    
    //CollisionComponent->OnComponentHit.AddDynamic(this, &AProjectileObject::OnHit);

}

// Called when the game starts or when spawned
void AProjectileObject::BeginPlay()
{
	Super::BeginPlay();
    //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));
}

// Called every frame
//void AProjectileObject::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//    //&AProjectileObject::OnHit();
//}

void AProjectileObject::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    PrintString(FString::Printf(TEXT("Hit: %s"), *OtherActor->GetName()));
    PrintString(FString::Printf(TEXT("YUO"), *OtherActor->GetName()));

    ECollisionChannel ObjType = OtherComp->GetCollisionObjectType();
    //ObjType.ToString();
    //PrintString(FString::Printf(TEXT("Hit: %s"), ObjType));
    
    //switch (ObjType)
   // {
   // }
    //*UEnum::GetDisplayValueAsText(Notification).ToString()
}


