// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Audio - Rumble sound for falling platforms

#pragma once

#include "CoreMinimal.h"

/**
 * CollapseSoundCue
 * Rumble sound for falling platforms
 */
class RUSHPARKOUR_API FCollapseSoundCue
{
public:
    FCollapseSoundCue();
    virtual ~FCollapseSoundCue();

    /** Core execution logic for rumble sound for falling platforms */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
