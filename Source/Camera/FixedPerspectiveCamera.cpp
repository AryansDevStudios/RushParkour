// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Camera - Implementation for FixedPerspectiveCamera.h

#include "FixedPerspectiveCamera.h"

FFixedPerspectiveCamera::FFixedPerspectiveCamera()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FFixedPerspectiveCamera::~FFixedPerspectiveCamera()
{
    bIsInitialized = false;
}

void FFixedPerspectiveCamera::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Locks rotation; follows character translation
}

void FFixedPerspectiveCamera::Reset()
{
    InternalTimer = 0.0f;
}
