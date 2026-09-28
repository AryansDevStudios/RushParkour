// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Movement - Down-trace raycasting for reliable floor alignment

#pragma once

#include "CoreMinimal.h"

/**
 * GroundSnapping
 * Down-trace raycasting for reliable floor alignment
 */
class RUSHPARKOUR_API FGroundSnapping
{
public:
    FGroundSnapping();
    virtual ~FGroundSnapping();

    /** Core execution logic for down-trace raycasting for reliable floor alignment */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
