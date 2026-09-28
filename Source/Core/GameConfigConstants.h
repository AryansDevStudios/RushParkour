// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Core - Speed, gravity, and timing constant definitions

#pragma once

#include "CoreMinimal.h"

/**
 * GameConfigConstants
 * Speed, gravity, and timing constant definitions
 */
class RUSHPARKOUR_API FGameConfigConstants
{
public:
    FGameConfigConstants();
    virtual ~FGameConfigConstants();

    /** Core execution logic for speed, gravity, and timing constant definitions */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
