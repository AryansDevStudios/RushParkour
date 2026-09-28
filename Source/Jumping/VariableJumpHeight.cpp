// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Jumping - Implementation for VariableJumpHeight.h

#include "VariableJumpHeight.h"

FVariableJumpHeight::FVariableJumpHeight()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FVariableJumpHeight::~FVariableJumpHeight()
{
    bIsInitialized = false;
}

void FVariableJumpHeight::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Dynamic gravity scaling
}

void FVariableJumpHeight::Reset()
{
    InternalTimer = 0.0f;
}
