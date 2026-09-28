// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Movement - 2.5D horizontal input processor

#pragma once

#include "CoreMinimal.h"

/**
 * LateralMovementHandler
 * 2.5D horizontal input processor
 */
class RUSHPARKOUR_API FLateralMovementHandler
{
public:
    FLateralMovementHandler();
    virtual ~FLateralMovementHandler();

    /** Core execution logic for 2.5d horizontal input processor */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
