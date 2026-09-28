// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Movement - Kinetic energy tracking during platform runs

#pragma once

#include "CoreMinimal.h"

/**
 * MomentumCalculator
 * Kinetic energy tracking during platform runs
 */
class RUSHPARKOUR_API FMomentumCalculator
{
public:
    FMomentumCalculator();
    virtual ~FMomentumCalculator();

    /** Core execution logic for kinetic energy tracking during platform runs */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
