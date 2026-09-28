// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Static - Implementation for StaticPlatformBase.h

#include "StaticPlatformBase.h"

FStaticPlatformBase::FStaticPlatformBase()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FStaticPlatformBase::~FStaticPlatformBase()
{
    bIsInitialized = false;
}

void FStaticPlatformBase::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Initializes static mesh and optimized collision
}

void FStaticPlatformBase::Reset()
{
    InternalTimer = 0.0f;
}
