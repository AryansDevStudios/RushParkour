// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Audio - Background ambient music coordinator

#pragma once

#include "CoreMinimal.h"

/**
 * MusicTrackManager
 * Background ambient music coordinator
 */
class RUSHPARKOUR_API FMusicTrackManager
{
public:
    FMusicTrackManager();
    virtual ~FMusicTrackManager();

    /** Core execution logic for background ambient music coordinator */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
