// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Jumping - Implementation for ApexHangTime.h

#include "ApexHangTime.h"

FApexHangTime::FApexHangTime()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FApexHangTime::~FApexHangTime()
{
    bIsInitialized = false;
}

void FApexHangTime::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Apex detector implementation
}

void FApexHangTime::Reset()
{
    InternalTimer = 0.0f;
}
