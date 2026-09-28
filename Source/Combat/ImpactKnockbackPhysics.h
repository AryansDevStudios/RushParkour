// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Combat - Mild recoil velocity on stomping enemy

#pragma once

#include "CoreMinimal.h"

/**
 * ImpactKnockbackPhysics
 * Mild recoil velocity on stomping enemy
 */
class RUSHPARKOUR_API FImpactKnockbackPhysics
{
public:
    FImpactKnockbackPhysics();
    virtual ~FImpactKnockbackPhysics();

    /** Core execution logic for mild recoil velocity on stomping enemy */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
