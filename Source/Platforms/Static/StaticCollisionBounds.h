// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Static - Tight bounding box for clean landing edges

#pragma once

#include "CoreMinimal.h"

/**
 * StaticCollisionBounds
 * Tight bounding box for clean landing edges
 */
class RUSHPARKOUR_API FStaticCollisionBounds
{
public:
    FStaticCollisionBounds();
    virtual ~FStaticCollisionBounds();

    /** Core execution logic for tight bounding box for clean landing edges */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
