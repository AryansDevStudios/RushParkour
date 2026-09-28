// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Jumping - Component managing jump execution and impulse

#pragma once

#include "CoreMinimal.h"

/**
 * JumpController
 * Component managing jump execution and impulse
 */
class RUSHPARKOUR_API FJumpController
{
public:
    FJumpController();
    virtual ~FJumpController();

    /** Core execution logic for component managing jump execution and impulse */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
