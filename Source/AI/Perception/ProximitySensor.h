// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: AI/Perception - Triggers aggressive alert when player approaches

#pragma once

#include "CoreMinimal.h"

/**
 * ProximitySensor
 * Triggers aggressive alert when player approaches
 */
class RUSHPARKOUR_API FProximitySensor
{
public:
    FProximitySensor();
    virtual ~FProximitySensor();

    /** Core execution logic for triggers aggressive alert when player approaches */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
