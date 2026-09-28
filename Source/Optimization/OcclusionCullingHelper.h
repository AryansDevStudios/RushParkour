// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Optimization - Suppresses rendering of occluded platform meshes

#pragma once

#include "CoreMinimal.h"

/**
 * OcclusionCullingHelper
 * Suppresses rendering of occluded platform meshes
 */
class RUSHPARKOUR_API FOcclusionCullingHelper
{
public:
    FOcclusionCullingHelper();
    virtual ~FOcclusionCullingHelper();

    /** Core execution logic for suppresses rendering of occluded platform meshes */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
