// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Audio - Procedural atmospheric wind based on altitude

#pragma once

#include "CoreMinimal.h"

/**
 * WindAmbienceController
 * Procedural atmospheric wind based on altitude
 */
class RUSHPARKOUR_API FWindAmbienceController
{
public:
    FWindAmbienceController();
    virtual ~FWindAmbienceController();

    /** Core execution logic for procedural atmospheric wind based on altitude */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
