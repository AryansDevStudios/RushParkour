// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Input - Action mapping data asset for player controls

#pragma once

#include "CoreMinimal.h"

/**
 * EnhancedInputConfig
 * Action mapping data asset for player controls
 */
class RUSHPARKOUR_API FEnhancedInputConfig
{
public:
    FEnhancedInputConfig();
    virtual ~FEnhancedInputConfig();

    /** Core execution logic for action mapping data asset for player controls */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
