// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Utilities - Formats elapsed seconds into MM:SS.ms

#pragma once

#include "CoreMinimal.h"

/**
 * StringFormatters
 * Formats elapsed seconds into MM:SS.ms
 */
class RUSHPARKOUR_API FStringFormatters
{
public:
    FStringFormatters();
    virtual ~FStringFormatters();

    /** Core execution logic for formats elapsed seconds into mm:ss.ms */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
