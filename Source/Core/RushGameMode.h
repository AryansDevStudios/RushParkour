// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Core - GameMode definition with no-checkpoint rules

#pragma once

#include "CoreMinimal.h"

/**
 * RushGameMode
 * GameMode definition with no-checkpoint rules
 */
class RUSHPARKOUR_API FRushGameMode
{
public:
    FRushGameMode();
    virtual ~FRushGameMode();

    /** Core execution logic for gamemode definition with no-checkpoint rules */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
