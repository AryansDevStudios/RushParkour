// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Moving - Implementation for MovingPlatformActor.h

#include "MovingPlatformActor.h"

FMovingPlatformActor::FMovingPlatformActor()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FMovingPlatformActor::~FMovingPlatformActor()
{
    bIsInitialized = false;
}

void FMovingPlatformActor::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Translates back and forth via smooth timeline
}

void FMovingPlatformActor::Reset()
{
    InternalTimer = 0.0f;
}
