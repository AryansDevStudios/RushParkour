// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Core - Implementation for LevelLifecycleManager.h

#include "LevelLifecycleManager.h"

FLevelLifecycleManager::FLevelLifecycleManager()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FLevelLifecycleManager::~FLevelLifecycleManager()
{
    bIsInitialized = false;
}

void FLevelLifecycleManager::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Course reload implementation
}

void FLevelLifecycleManager::Reset()
{
    InternalTimer = 0.0f;
}
