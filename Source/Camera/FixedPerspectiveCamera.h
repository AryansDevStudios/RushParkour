// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Camera - Stabilized 2.5D tracking camera

#pragma once

#include "CoreMinimal.h"

/**
 * FixedPerspectiveCamera
 * Stabilized 2.5D tracking camera
 */
class RUSHPARKOUR_API FFixedPerspectiveCamera
{
public:
    FFixedPerspectiveCamera();
    virtual ~FFixedPerspectiveCamera();

    /** Core execution logic for stabilized 2.5d tracking camera */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
