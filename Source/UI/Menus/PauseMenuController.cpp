// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/Menus - Implementation for PauseMenuController.h

#include "PauseMenuController.h"

FPauseMenuController::FPauseMenuController()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FPauseMenuController::~FPauseMenuController()
{
    bIsInitialized = false;
}

void FPauseMenuController::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Resume and Restart implementation
}

void FPauseMenuController::Reset()
{
    InternalTimer = 0.0f;
}
