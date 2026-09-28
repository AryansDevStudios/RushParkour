// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/Menus - Volume slider bindings

#pragma once

#include "CoreMinimal.h"

/**
 * AudioSlidersWidget
 * Volume slider bindings
 */
class RUSHPARKOUR_API FAudioSlidersWidget
{
public:
    FAudioSlidersWidget();
    virtual ~FAudioSlidersWidget();

    /** Core execution logic for volume slider bindings */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
