// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Character - Implementation for RagdollStateTransition.h

#include "RagdollStateTransition.h"

FRagdollStateTransition::FRagdollStateTransition()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FRagdollStateTransition::~FRagdollStateTransition()
{
    bIsInitialized = false;
}

void FRagdollStateTransition::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Engages physics simulation on fatal hazards
}

void FRagdollStateTransition::Reset()
{
    InternalTimer = 0.0f;
}
