// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Crumbling - Platform that drops shortly after player touch

#pragma once

#include "CoreMinimal.h"

/**
 * CollapsingPlatformActor
 * Platform that drops shortly after player touch
 */
class RUSHPARKOUR_API FCollapsingPlatformActor
{
public:
    FCollapsingPlatformActor();
    virtual ~FCollapsingPlatformActor();

    /** Core execution logic for platform that drops shortly after player touch */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
