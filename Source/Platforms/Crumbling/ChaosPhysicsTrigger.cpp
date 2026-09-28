// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Crumbling - Implementation for ChaosPhysicsTrigger.h

#include "ChaosPhysicsTrigger.h"

FChaosPhysicsTrigger::FChaosPhysicsTrigger()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FChaosPhysicsTrigger::~FChaosPhysicsTrigger()
{
    bIsInitialized = false;
}

void FChaosPhysicsTrigger::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Awakens rigid bodies
}

void FChaosPhysicsTrigger::Reset()
{
    InternalTimer = 0.0f;
}
