// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Camera - Defines boundaries to keep camera in bounds

#pragma once

#include "CoreMinimal.h"

/**
 * CameraBoundsVolume
 * Defines boundaries to keep camera in bounds
 */
class RUSHPARKOUR_API FCameraBoundsVolume
{
public:
    FCameraBoundsVolume();
    virtual ~FCameraBoundsVolume();

    /** Core execution logic for defines boundaries to keep camera in bounds */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
