// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Core - Implementation for RushGameInstance.h

#include "RushGameInstance.h"

FRushGameInstance::FRushGameInstance()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FRushGameInstance::~FRushGameInstance()
{
    bIsInitialized = false;
}

void FRushGameInstance::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: GameInstance startup logic
}

void FRushGameInstance::Reset()
{
    InternalTimer = 0.0f;
}
