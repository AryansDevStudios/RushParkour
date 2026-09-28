// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Input - Implementation for EnhancedInputConfig.h

#include "EnhancedInputConfig.h"

FEnhancedInputConfig::FEnhancedInputConfig()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FEnhancedInputConfig::~FEnhancedInputConfig()
{
    bIsInitialized = false;
}

void FEnhancedInputConfig::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Maps keyboard actions cleanly
}

void FEnhancedInputConfig::Reset()
{
    InternalTimer = 0.0f;
}
