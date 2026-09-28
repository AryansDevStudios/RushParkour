// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/HUD - Implementation for RushHUD.h

#include "RushHUD.h"

FRushHUD::FRushHUD()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FRushHUD::~FRushHUD()
{
    bIsInitialized = false;
}

void FRushHUD::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: HUD draw calls
}

void FRushHUD::Reset()
{
    InternalTimer = 0.0f;
}
