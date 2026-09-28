// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Math - Implementation for EasingCurves.h

#include "EasingCurves.h"

FEasingCurves::FEasingCurves()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FEasingCurves::~FEasingCurves()
{
    bIsInitialized = false;
}

void FEasingCurves::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Easing implementations
}

void FEasingCurves::Reset()
{
    InternalTimer = 0.0f;
}
