// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Core - Reset logic on void falls

#pragma once

#include "CoreMinimal.h"

/**
 * LevelLifecycleManager
 * Reset logic on void falls
 */
class RUSHPARKOUR_API FLevelLifecycleManager
{
public:
    FLevelLifecycleManager();
    virtual ~FLevelLifecycleManager();

    /** Core execution logic for reset logic on void falls */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
