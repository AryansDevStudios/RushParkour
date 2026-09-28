// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Jumping - Stores pre-ground jump button presses

#pragma once

#include "CoreMinimal.h"

/**
 * JumpBufferSystem
 * Stores pre-ground jump button presses
 */
class RUSHPARKOUR_API FJumpBufferSystem
{
public:
    FJumpBufferSystem();
    virtual ~FJumpBufferSystem();

    /** Core execution logic for stores pre-ground jump button presses */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
