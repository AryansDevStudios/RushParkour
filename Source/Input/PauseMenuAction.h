// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Input - Escape key action trigger

#pragma once

#include "CoreMinimal.h"

/**
 * PauseMenuAction
 * Escape key action trigger
 */
class RUSHPARKOUR_API FPauseMenuAction
{
public:
    FPauseMenuAction();
    virtual ~FPauseMenuAction();

    /** Core execution logic for escape key action trigger */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
