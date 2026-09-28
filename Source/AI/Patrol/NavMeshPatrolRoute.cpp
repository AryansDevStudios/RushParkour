// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: AI/Patrol - Implementation for NavMeshPatrolRoute.h

#include "NavMeshPatrolRoute.h"

FNavMeshPatrolRoute::FNavMeshPatrolRoute()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FNavMeshPatrolRoute::~FNavMeshPatrolRoute()
{
    bIsInitialized = false;
}

void FNavMeshPatrolRoute::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: NavMesh query functions
}

void FNavMeshPatrolRoute::Reset()
{
    InternalTimer = 0.0f;
}
