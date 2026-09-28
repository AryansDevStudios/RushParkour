// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Crumbling - Implementation for DelayBeforeFallTimer.h

#include "DelayBeforeFallTimer.h"

FDelayBeforeFallTimer::FDelayBeforeFallTimer()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FDelayBeforeFallTimer::~FDelayBeforeFallTimer()
{
    bIsInitialized = false;
}

void FDelayBeforeFallTimer::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Jitter offset math
}

void FDelayBeforeFallTimer::Reset()
{
    InternalTimer = 0.0f;
}
