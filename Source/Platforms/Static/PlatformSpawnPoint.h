// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Static - Marks player start location in level

#pragma once

#include "CoreMinimal.h"

/**
 * PlatformSpawnPoint
 * Marks player start location in level
 */
class RUSHPARKOUR_API FPlatformSpawnPoint
{
public:
    FPlatformSpawnPoint();
    virtual ~FPlatformSpawnPoint();

    /** Core execution logic for marks player start location in level */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
