// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Movement - Implementation for AirControlPhysics.h

#include "AirControlPhysics.h"

FAirControlPhysics::FAirControlPhysics()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FAirControlPhysics::~FAirControlPhysics()
{
    bIsInitialized = false;
}

void FAirControlPhysics::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Air control logic application
}

void FAirControlPhysics::Reset()
{
    InternalTimer = 0.0f;
}
