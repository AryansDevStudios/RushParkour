// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Camera - Implementation for ScreenShakeController.h

#include "ScreenShakeController.h"

FScreenShakeController::FScreenShakeController()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FScreenShakeController::~FScreenShakeController()
{
    bIsInitialized = false;
}

void FScreenShakeController::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Shake offset calculations
}

void FScreenShakeController::Reset()
{
    InternalTimer = 0.0f;
}
