// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Static - Implementation for StaticCollisionBounds.h

#include "StaticCollisionBounds.h"

FStaticCollisionBounds::FStaticCollisionBounds()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FStaticCollisionBounds::~FStaticCollisionBounds()
{
    bIsInitialized = false;
}

void FStaticCollisionBounds::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Hull calculation functions
}

void FStaticCollisionBounds::Reset()
{
    InternalTimer = 0.0f;
}
