// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Math - Vector projection and angle helper functions

#pragma once

#include "CoreMinimal.h"

/**
 * VectorMathUtils
 * Vector projection and angle helper functions
 */
class RUSHPARKOUR_API FVectorMathUtils
{
public:
    FVectorMathUtils();
    virtual ~FVectorMathUtils();

    /** Core execution logic for vector projection and angle helper functions */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
