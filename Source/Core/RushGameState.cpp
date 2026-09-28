// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Core - Implementation for RushGameState.h

#include "RushGameState.h"

FRushGameState::FRushGameState()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FRushGameState::~FRushGameState()
{
    bIsInitialized = false;
}

void FRushGameState::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Run timer updater
}

void FRushGameState::Reset()
{
    InternalTimer = 0.0f;
}
