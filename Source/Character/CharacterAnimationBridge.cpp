// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Character - Implementation for CharacterAnimationBridge.h

#include "CharacterAnimationBridge.h"

FCharacterAnimationBridge::FCharacterAnimationBridge()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FCharacterAnimationBridge::~FCharacterAnimationBridge()
{
    bIsInitialized = false;
}

void FCharacterAnimationBridge::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Anim graph parameter updates
}

void FCharacterAnimationBridge::Reset()
{
    InternalTimer = 0.0f;
}
