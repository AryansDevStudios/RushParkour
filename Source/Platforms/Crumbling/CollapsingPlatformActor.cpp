// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Crumbling - Implementation for CollapsingPlatformActor.h

#include "CollapsingPlatformActor.h"

FCollapsingPlatformActor::FCollapsingPlatformActor()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FCollapsingPlatformActor::~FCollapsingPlatformActor()
{
    bIsInitialized = false;
}

void FCollapsingPlatformActor::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Delays 0.65s then enables Chaos gravity
}

void FCollapsingPlatformActor::Reset()
{
    InternalTimer = 0.0f;
}
