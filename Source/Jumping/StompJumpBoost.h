// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Jumping - Grants vertical rebound when bouncing on enemies

#pragma once

#include "CoreMinimal.h"

/**
 * StompJumpBoost
 * Grants vertical rebound when bouncing on enemies
 */
class RUSHPARKOUR_API FStompJumpBoost
{
public:
    FStompJumpBoost();
    virtual ~FStompJumpBoost();

    /** Core execution logic for grants vertical rebound when bouncing on enemies */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
