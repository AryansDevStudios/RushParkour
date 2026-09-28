// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/Menus - Implementation for SettingsMenuController.h

#include "SettingsMenuController.h"

FSettingsMenuController::FSettingsMenuController()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FSettingsMenuController::~FSettingsMenuController()
{
    bIsInitialized = false;
}

void FSettingsMenuController::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Applies engine scalability settings
}

void FSettingsMenuController::Reset()
{
    InternalTimer = 0.0f;
}
