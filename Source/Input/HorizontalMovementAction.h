// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Input - A/D keyboard axis processing

#pragma once

#include "CoreMinimal.h"

/**
 * HorizontalMovementAction
 * A/D keyboard axis processing
 */
class RUSHPARKOUR_API FHorizontalMovementAction
{
public:
    FHorizontalMovementAction();
    virtual ~FHorizontalMovementAction();

    /** Core execution logic for a/d keyboard axis processing */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
