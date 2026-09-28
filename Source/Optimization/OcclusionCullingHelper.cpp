// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Optimization - Implementation for OcclusionCullingHelper.h

#include "OcclusionCullingHelper.h"

FOcclusionCullingHelper::FOcclusionCullingHelper()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FOcclusionCullingHelper::~FOcclusionCullingHelper()
{
    bIsInitialized = false;
}

void FOcclusionCullingHelper::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Hardware occlusion queries
}

void FOcclusionCullingHelper::Reset()
{
    InternalTimer = 0.0f;
}
