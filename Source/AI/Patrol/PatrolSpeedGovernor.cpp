// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: AI/Patrol - Implementation for PatrolSpeedGovernor.h

#include "PatrolSpeedGovernor.h"

FPatrolSpeedGovernor::FPatrolSpeedGovernor()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FPatrolSpeedGovernor::~FPatrolSpeedGovernor()
{
    bIsInitialized = false;
}

void FPatrolSpeedGovernor::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Speed limiter implementation
}

void FPatrolSpeedGovernor::Reset()
{
    InternalTimer = 0.0f;
}
