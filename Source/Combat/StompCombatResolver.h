// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Combat - Evaluates top-down stomps vs side collisions

#pragma once

#include "CoreMinimal.h"

/**
 * StompCombatResolver
 * Evaluates top-down stomps vs side collisions
 */
class RUSHPARKOUR_API FStompCombatResolver
{
public:
    FStompCombatResolver();
    virtual ~FStompCombatResolver();

    /** Core execution logic for evaluates top-down stomps vs side collisions */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
