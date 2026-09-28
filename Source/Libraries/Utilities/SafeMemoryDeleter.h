// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Utilities - Safe pointer release utility functions

#pragma once

#include "CoreMinimal.h"

/**
 * SafeMemoryDeleter
 * Safe pointer release utility functions
 */
class RUSHPARKOUR_API FSafeMemoryDeleter
{
public:
    FSafeMemoryDeleter();
    virtual ~FSafeMemoryDeleter();

    /** Core execution logic for safe pointer release utility functions */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
