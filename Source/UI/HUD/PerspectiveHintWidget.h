// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/HUD - Notifies player when camera mode changes

#pragma once

#include "CoreMinimal.h"

/**
 * PerspectiveHintWidget
 * Notifies player when camera mode changes
 */
class RUSHPARKOUR_API FPerspectiveHintWidget
{
public:
    FPerspectiveHintWidget();
    virtual ~FPerspectiveHintWidget();

    /** Core execution logic for notifies player when camera mode changes */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
