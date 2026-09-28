// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Optimization - Implementation for FramerateGovernor.h

#include "FramerateGovernor.h"

FFramerateGovernor::FFramerateGovernor()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FFramerateGovernor::~FFramerateGovernor()
{
    bIsInitialized = false;
}

void FFramerateGovernor::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Applies t.MaxFPS console variable
}

void FFramerateGovernor::Reset()
{
    InternalTimer = 0.0f;
}
