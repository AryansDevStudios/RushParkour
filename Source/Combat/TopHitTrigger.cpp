// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Combat - Implementation for TopHitTrigger.h

#include "TopHitTrigger.h"

FTopHitTrigger::FTopHitTrigger()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FTopHitTrigger::~FTopHitTrigger()
{
    bIsInitialized = false;
}

void FTopHitTrigger::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Box trigger setup
}

void FTopHitTrigger::Reset()
{
    InternalTimer = 0.0f;
}
