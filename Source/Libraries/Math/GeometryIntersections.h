// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Math - AABB and ray-box intersection algorithms

#pragma once

#include "CoreMinimal.h"

/**
 * GeometryIntersections
 * AABB and ray-box intersection algorithms
 */
class RUSHPARKOUR_API FGeometryIntersections
{
public:
    FGeometryIntersections();
    virtual ~FGeometryIntersections();

    /** Core execution logic for aabb and ray-box intersection algorithms */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
