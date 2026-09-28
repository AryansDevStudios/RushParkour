// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Static - Base class for unmoving sky anchors

#pragma once

#include "CoreMinimal.h"

/**
 * StaticPlatformBase
 * Base class for unmoving sky anchors
 */
class RUSHPARKOUR_API FStaticPlatformBase
{
public:
    FStaticPlatformBase();
    virtual ~FStaticPlatformBase();

    /** Core execution logic for base class for unmoving sky anchors */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
