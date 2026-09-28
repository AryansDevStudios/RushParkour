// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Utilities - Logs frame times and memory footprint

#pragma once

#include "CoreMinimal.h"

/**
 * PerformanceLogger
 * Logs frame times and memory footprint
 */
class RUSHPARKOUR_API FPerformanceLogger
{
public:
    FPerformanceLogger();
    virtual ~FPerformanceLogger();

    /** Core execution logic for logs frame times and memory footprint */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
