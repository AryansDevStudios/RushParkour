// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Combat - Collision volume positioned above enemy head

#pragma once

#include "CoreMinimal.h"

/**
 * TopHitTrigger
 * Collision volume positioned above enemy head
 */
class RUSHPARKOUR_API FTopHitTrigger
{
public:
    FTopHitTrigger();
    virtual ~FTopHitTrigger();

    /** Core execution logic for collision volume positioned above enemy head */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
