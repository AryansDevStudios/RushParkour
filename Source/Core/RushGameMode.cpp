// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Core - Implementation for RushGameMode.h

#include "RushGameMode.h"

FRushGameMode::FRushGameMode()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FRushGameMode::~FRushGameMode()
{
    bIsInitialized = false;
}

void FRushGameMode::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: GameMode implementation
}

void FRushGameMode::Reset()
{
    InternalTimer = 0.0f;
}
