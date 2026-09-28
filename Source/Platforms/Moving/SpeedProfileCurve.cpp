// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Moving - Implementation for SpeedProfileCurve.h

#include "SpeedProfileCurve.h"

FSpeedProfileCurve::FSpeedProfileCurve()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FSpeedProfileCurve::~FSpeedProfileCurve()
{
    bIsInitialized = false;
}

void FSpeedProfileCurve::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Curve evaluation routines
}

void FSpeedProfileCurve::Reset()
{
    InternalTimer = 0.0f;
}
