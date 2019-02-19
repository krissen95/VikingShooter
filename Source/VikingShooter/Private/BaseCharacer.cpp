// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacer.h"


// Sets default values
ABaseCharacer::ABaseCharacer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCharacer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseCharacer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

