// Fill out your copyright notice in the Description page of Project Settings.

#include "TOA.h"
#include "sapi.h"
#include <sphelper.h>
#include <string>


// Sets default values
ATOA::ATOA()
{
	// Set this actor to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;
	TOAMesh = CreateDefaultSubobject<UStaticMeshComponent>("TOA");

	PitchValue = 0.f;
	YawValue   = 0.f;
	RollValue  = 0.f;

}

void Welcome()
{
	ISpVoice * pVoice = NULL;

	HRESULT hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void **)&pVoice);
	if (SUCCEEDED(hr))
	{
		ISpObjectToken* cpToken(NULL);
		SpFindBestToken(SPCAT_VOICES, L"gender=female", L"", &cpToken);
		pVoice->SetVoice(cpToken);
		cpToken->Release();
		hr = pVoice->Speak(L"Hello, welcome to the VR AI Retail Store", 0, NULL);
	}
	pVoice->Release();
	pVoice = NULL;
}

// Called when the game starts or when spawned
void ATOA::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle TOA;
	TFuture<void> A = Async<void>(EAsyncExecution::Thread, Welcome);
}

// Called every frame
void ATOA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator NewRotation = FRotator(PitchValue, YawValue, RollValue);
	FQuat QuatRotation = FQuat(NewRotation);
	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);

}

