// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Static - High-performance mesh wrapper

#pragma once

#include "CoreMinimal.h"

/**
 * FloatingIslandMesh
 * High-performance mesh wrapper
 */
class RUSHPARKOUR_API FFloatingIslandMesh
{
public:
    FFloatingIslandMesh();
    virtual ~FFloatingIslandMesh();

    /** Core execution logic for high-performance mesh wrapper */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
