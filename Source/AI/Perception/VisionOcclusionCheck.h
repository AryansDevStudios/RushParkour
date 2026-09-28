// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: AI/Perception - Raycasts to verify vision isn't blocked by obstacles

#pragma once

#include "CoreMinimal.h"

/**
 * VisionOcclusionCheck
 * Raycasts to verify vision isn't blocked by obstacles
 */
class RUSHPARKOUR_API FVisionOcclusionCheck
{
public:
    FVisionOcclusionCheck();
    virtual ~FVisionOcclusionCheck();

    /** Core execution logic for raycasts to verify vision isn't blocked by obstacles */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
