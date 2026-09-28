// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Jumping - Implementation for JumpController.h

#include "JumpController.h"

FJumpController::FJumpController()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FJumpController::~FJumpController()
{
    bIsInitialized = false;
}

void FJumpController::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Applies jump velocity curves
}

void FJumpController::Reset()
{
    InternalTimer = 0.0f;
}
