// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Combat - Hazard zone surrounding enemy torso

#pragma once

#include "CoreMinimal.h"

/**
 * SideDamageHazard
 * Hazard zone surrounding enemy torso
 */
class RUSHPARKOUR_API FSideDamageHazard
{
public:
    FSideDamageHazard();
    virtual ~FSideDamageHazard();

    /** Core execution logic for hazard zone surrounding enemy torso */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
