// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Audio - Global audio cue trigger manager

#pragma once

#include "CoreMinimal.h"

/**
 * AudioManager
 * Global audio cue trigger manager
 */
class RUSHPARKOUR_API FAudioManager
{
public:
    FAudioManager();
    virtual ~FAudioManager();

    /** Core execution logic for global audio cue trigger manager */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
