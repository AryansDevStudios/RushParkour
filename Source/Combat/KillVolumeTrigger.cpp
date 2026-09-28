// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Combat - Implementation for KillVolumeTrigger.h

#include "KillVolumeTrigger.h"

FKillVolumeTrigger::FKillVolumeTrigger()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FKillVolumeTrigger::~FKillVolumeTrigger()
{
    bIsInitialized = false;
}

void FKillVolumeTrigger::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Triggers course reset
}

void FKillVolumeTrigger::Reset()
{
    InternalTimer = 0.0f;
}
