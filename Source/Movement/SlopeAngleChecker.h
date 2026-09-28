// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Movement - Calculates incline angles to prevent slipping

#pragma once

#include "CoreMinimal.h"

/**
 * SlopeAngleChecker
 * Calculates incline angles to prevent slipping
 */
class RUSHPARKOUR_API FSlopeAngleChecker
{
public:
    FSlopeAngleChecker();
    virtual ~FSlopeAngleChecker();

    /** Core execution logic for calculates incline angles to prevent slipping */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
