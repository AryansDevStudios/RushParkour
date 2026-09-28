// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Static - Implementation for AnchorPlatform.h

#include "AnchorPlatform.h"

FAnchorPlatform::FAnchorPlatform()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FAnchorPlatform::~FAnchorPlatform()
{
    bIsInitialized = false;
}

void FAnchorPlatform::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Resting spot implementation
}

void FAnchorPlatform::Reset()
{
    InternalTimer = 0.0f;
}
