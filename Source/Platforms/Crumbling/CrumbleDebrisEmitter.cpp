// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Crumbling - Implementation for CrumbleDebrisEmitter.h

#include "CrumbleDebrisEmitter.h"

FCrumbleDebrisEmitter::FCrumbleDebrisEmitter()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FCrumbleDebrisEmitter::~FCrumbleDebrisEmitter()
{
    bIsInitialized = false;
}

void FCrumbleDebrisEmitter::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Particle burst trigger
}

void FCrumbleDebrisEmitter::Reset()
{
    InternalTimer = 0.0f;
}
