// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Jumping - Increases gravity when releasing spacebar early

#pragma once

#include "CoreMinimal.h"

/**
 * VariableJumpHeight
 * Increases gravity when releasing spacebar early
 */
class RUSHPARKOUR_API FVariableJumpHeight
{
public:
    FVariableJumpHeight();
    virtual ~FVariableJumpHeight();

    /** Core execution logic for increases gravity when releasing spacebar early */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
