// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Static - Solid anchor resting spots between tricky jumps

#pragma once

#include "CoreMinimal.h"

/**
 * AnchorPlatform
 * Solid anchor resting spots between tricky jumps
 */
class RUSHPARKOUR_API FAnchorPlatform
{
public:
    FAnchorPlatform();
    virtual ~FAnchorPlatform();

    /** Core execution logic for solid anchor resting spots between tricky jumps */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
