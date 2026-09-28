// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Character - Resets character pose and location on restart

#pragma once

#include "CoreMinimal.h"

/**
 * PlayerRespawnCoordinator
 * Resets character pose and location on restart
 */
class RUSHPARKOUR_API FPlayerRespawnCoordinator
{
public:
    FPlayerRespawnCoordinator();
    virtual ~FPlayerRespawnCoordinator();

    /** Core execution logic for resets character pose and location on restart */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
