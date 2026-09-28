// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Movement - Implementation for SpeedInterpolator.h

#include "SpeedInterpolator.h"

FSpeedInterpolator::FSpeedInterpolator()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FSpeedInterpolator::~FSpeedInterpolator()
{
    bIsInitialized = false;
}

void FSpeedInterpolator::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Velocity interpolation functions
}

void FSpeedInterpolator::Reset()
{
    InternalTimer = 0.0f;
}
