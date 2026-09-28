// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Crumbling - Implementation for PlatformResetTimer.h

#include "PlatformResetTimer.h"

FPlatformResetTimer::FPlatformResetTimer()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FPlatformResetTimer::~FPlatformResetTimer()
{
    bIsInitialized = false;
}

void FPlatformResetTimer::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Reset timer callback
}

void FPlatformResetTimer::Reset()
{
    InternalTimer = 0.0f;
}
