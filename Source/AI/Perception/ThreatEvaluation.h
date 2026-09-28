// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: AI/Perception - Determines whether enemy chases or patrols

#pragma once

#include "CoreMinimal.h"

/**
 * ThreatEvaluation
 * Determines whether enemy chases or patrols
 */
class RUSHPARKOUR_API FThreatEvaluation
{
public:
    FThreatEvaluation();
    virtual ~FThreatEvaluation();

    /** Core execution logic for determines whether enemy chases or patrols */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
