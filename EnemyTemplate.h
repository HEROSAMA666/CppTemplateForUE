// HERO aka Chen Feng made all those.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "components/ArrowComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "MyEnemy.generated.h"

UCLASS()
class BOXHEAD_API AMyEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyEnemy();

	UPROPERTY()
		USkeletalMeshComponent* EnemyMesh;
	UPROPERTY()
		UArrowComponent* EnemyArrow;
	UPROPERTY()
		UCharacterMovementComponent* MovementComponent;
	//UPROPERTY()
		//UPawnSensingComponent* SensingComponent;
	//Add EnemyComponents

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnemyAttribute")
		int EnemyHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnemyAttribute")
		FName EnemyName;
	//ADd EnemyAttribute

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
