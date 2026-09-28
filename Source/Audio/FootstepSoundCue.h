// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Audio - Plays subtle steps when walking on stone/metal

#pragma once

#include "CoreMinimal.h"

/**
 * FootstepSoundCue
 * Plays subtle steps when walking on stone/metal
 */
class RUSHPARKOUR_API FFootstepSoundCue
{
public:
    FFootstepSoundCue();
    virtual ~FFootstepSoundCue();

    /** Core execution logic for plays subtle steps when walking on stone/metal */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
