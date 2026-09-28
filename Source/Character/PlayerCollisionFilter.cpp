// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Character - Implementation for PlayerCollisionFilter.h

#include "PlayerCollisionFilter.h"

FPlayerCollisionFilter::FPlayerCollisionFilter()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FPlayerCollisionFilter::~FPlayerCollisionFilter()
{
    bIsInitialized = false;
}

void FPlayerCollisionFilter::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Collision matrix evaluation
}

void FPlayerCollisionFilter::Reset()
{
    InternalTimer = 0.0f;
}
