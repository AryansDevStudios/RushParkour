// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Static - Implementation for PlatformSpawnPoint.h

#include "PlatformSpawnPoint.h"

FPlatformSpawnPoint::FPlatformSpawnPoint()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FPlatformSpawnPoint::~FPlatformSpawnPoint()
{
    bIsInitialized = false;
}

void FPlatformSpawnPoint::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Spawn locator implementation
}

void FPlatformSpawnPoint::Reset()
{
    InternalTimer = 0.0f;
}
