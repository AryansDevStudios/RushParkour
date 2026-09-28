// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Optimization - Controls distance-based mesh LOD swaps

#pragma once

#include "CoreMinimal.h"

/**
 * LODTransitionManager
 * Controls distance-based mesh LOD swaps
 */
class RUSHPARKOUR_API FLODTransitionManager
{
public:
    FLODTransitionManager();
    virtual ~FLODTransitionManager();

    /** Core execution logic for controls distance-based mesh lod swaps */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
