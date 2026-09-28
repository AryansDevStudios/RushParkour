// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Combat - Catches player falling below world boundary

#pragma once

#include "CoreMinimal.h"

/**
 * KillVolumeTrigger
 * Catches player falling below world boundary
 */
class RUSHPARKOUR_API FKillVolumeTrigger
{
public:
    FKillVolumeTrigger();
    virtual ~FKillVolumeTrigger();

    /** Core execution logic for catches player falling below world boundary */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
