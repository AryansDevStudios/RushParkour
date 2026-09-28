// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Input - Implementation for HorizontalMovementAction.h

#include "HorizontalMovementAction.h"

FHorizontalMovementAction::FHorizontalMovementAction()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FHorizontalMovementAction::~FHorizontalMovementAction()
{
    bIsInitialized = false;
}

void FHorizontalMovementAction::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Axis value forwarding
}

void FHorizontalMovementAction::Reset()
{
    InternalTimer = 0.0f;
}
