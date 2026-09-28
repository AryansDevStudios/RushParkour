// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Movement - Implementation for LateralMovementHandler.h

#include "LateralMovementHandler.h"

FLateralMovementHandler::FLateralMovementHandler()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FLateralMovementHandler::~FLateralMovementHandler()
{
    bIsInitialized = false;
}

void FLateralMovementHandler::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Clamps input along locked Y traversal axis
}

void FLateralMovementHandler::Reset()
{
    InternalTimer = 0.0f;
}
