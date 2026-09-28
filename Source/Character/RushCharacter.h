// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Character - Main player character actor definition

#pragma once

#include "CoreMinimal.h"

/**
 * RushCharacter
 * Main player character actor definition
 */
class RUSHPARKOUR_API FRushCharacter
{
public:
    FRushCharacter();
    virtual ~FRushCharacter();

    /** Core execution logic for main player character actor definition */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
