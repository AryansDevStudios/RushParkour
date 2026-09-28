// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: AI/Patrol - Implementation for EnemyPatrolController.h

#include "EnemyPatrolController.h"

FEnemyPatrolController::FEnemyPatrolController()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FEnemyPatrolController::~FEnemyPatrolController()
{
    bIsInitialized = false;
}

void FEnemyPatrolController::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Possesses pawn and assigns patrol paths
}

void FEnemyPatrolController::Reset()
{
    InternalTimer = 0.0f;
}
