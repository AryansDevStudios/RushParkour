// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Utilities - Serializes run stats and options to disk

#pragma once

#include "CoreMinimal.h"

/**
 * SaveGameSerializer
 * Serializes run stats and options to disk
 */
class RUSHPARKOUR_API FSaveGameSerializer
{
public:
    FSaveGameSerializer();
    virtual ~FSaveGameSerializer();

    /** Core execution logic for serializes run stats and options to disk */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
