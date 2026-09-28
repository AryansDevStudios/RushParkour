// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/Menus - Options for resolution scale and volume

#pragma once

#include "CoreMinimal.h"

/**
 * SettingsMenuController
 * Options for resolution scale and volume
 */
class RUSHPARKOUR_API FSettingsMenuController
{
public:
    FSettingsMenuController();
    virtual ~FSettingsMenuController();

    /** Core execution logic for options for resolution scale and volume */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
