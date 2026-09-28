// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Camera - Subtle camera jolt upon heavy landing

#pragma once

#include "CoreMinimal.h"

/**
 * ScreenShakeController
 * Subtle camera jolt upon heavy landing
 */
class RUSHPARKOUR_API FScreenShakeController
{
public:
    FScreenShakeController();
    virtual ~FScreenShakeController();

    /** Core execution logic for subtle camera jolt upon heavy landing */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
