// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Optimization - Keeps texture memory strictly within iGPU limits

#pragma once

#include "CoreMinimal.h"

/**
 * TextureMemoryBudget
 * Keeps texture memory strictly within iGPU limits
 */
class RUSHPARKOUR_API FTextureMemoryBudget
{
public:
    FTextureMemoryBudget();
    virtual ~FTextureMemoryBudget();

    /** Core execution logic for keeps texture memory strictly within igpu limits */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
