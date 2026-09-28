// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Core - Persistent session options and audio volume

#pragma once

#include "CoreMinimal.h"

/**
 * RushGameInstance
 * Persistent session options and audio volume
 */
class RUSHPARKOUR_API FRushGameInstance
{
public:
    FRushGameInstance();
    virtual ~FRushGameInstance();

    /** Core execution logic for persistent session options and audio volume */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
