// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Jumping - Implementation for CoyoteTimeManager.h

#include "CoyoteTimeManager.h"

FCoyoteTimeManager::FCoyoteTimeManager()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FCoyoteTimeManager::~FCoyoteTimeManager()
{
    bIsInitialized = false;
}

void FCoyoteTimeManager::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Countdown timer for coyote frames
}

void FCoyoteTimeManager::Reset()
{
    InternalTimer = 0.0f;
}
