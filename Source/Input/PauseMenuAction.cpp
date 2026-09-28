// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Input - Implementation for PauseMenuAction.h

#include "PauseMenuAction.h"

FPauseMenuAction::FPauseMenuAction()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FPauseMenuAction::~FPauseMenuAction()
{
    bIsInitialized = false;
}

void FPauseMenuAction::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Menu toggle dispatcher
}

void FPauseMenuAction::Reset()
{
    InternalTimer = 0.0f;
}
