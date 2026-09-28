// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Character - Implementation for RushCharacter.h

#include "RushCharacter.h"

FRushCharacter::FRushCharacter()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FRushCharacter::~FRushCharacter()
{
    bIsInitialized = false;
}

void FRushCharacter::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Input bindings, movement calls, death triggers
}

void FRushCharacter::Reset()
{
    InternalTimer = 0.0f;
}
