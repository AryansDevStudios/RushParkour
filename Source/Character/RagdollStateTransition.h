// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Character - Switches skeletal mesh to full physics simulation

#pragma once

#include "CoreMinimal.h"

/**
 * RagdollStateTransition
 * Switches skeletal mesh to full physics simulation
 */
class RUSHPARKOUR_API FRagdollStateTransition
{
public:
    FRagdollStateTransition();
    virtual ~FRagdollStateTransition();

    /** Core execution logic for switches skeletal mesh to full physics simulation */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
