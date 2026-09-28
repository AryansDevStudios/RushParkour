// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Character - Connects movement states to AnimInstance

#pragma once

#include "CoreMinimal.h"

/**
 * CharacterAnimationBridge
 * Connects movement states to AnimInstance
 */
class RUSHPARKOUR_API FCharacterAnimationBridge
{
public:
    FCharacterAnimationBridge();
    virtual ~FCharacterAnimationBridge();

    /** Core execution logic for connects movement states to animinstance */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
