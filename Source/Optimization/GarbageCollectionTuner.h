// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Optimization - Schedules GC during quiet moments to avoid hitches

#pragma once

#include "CoreMinimal.h"

/**
 * GarbageCollectionTuner
 * Schedules GC during quiet moments to avoid hitches
 */
class RUSHPARKOUR_API FGarbageCollectionTuner
{
public:
    FGarbageCollectionTuner();
    virtual ~FGarbageCollectionTuner();

    /** Core execution logic for schedules gc during quiet moments to avoid hitches */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
