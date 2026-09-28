// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Combat - Implementation for SideDamageHazard.h

#include "SideDamageHazard.h"

FSideDamageHazard::FSideDamageHazard()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FSideDamageHazard::~FSideDamageHazard()
{
    bIsInitialized = false;
}

void FSideDamageHazard::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Defeat trigger on contact
}

void FSideDamageHazard::Reset()
{
    InternalTimer = 0.0f;
}
