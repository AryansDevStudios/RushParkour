// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Moving - Low-frequency hum while platform moves

#pragma once

#include "CoreMinimal.h"

/**
 * MovingPlatformAudioEmitter
 * Low-frequency hum while platform moves
 */
class RUSHPARKOUR_API FMovingPlatformAudioEmitter
{
public:
    FMovingPlatformAudioEmitter();
    virtual ~FMovingPlatformAudioEmitter();

    /** Core execution logic for low-frequency hum while platform moves */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
