// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/HUD - Pop-up notifications for achievements

#pragma once

#include "CoreMinimal.h"

/**
 * NotificationToastWidget
 * Pop-up notifications for achievements
 */
class RUSHPARKOUR_API FNotificationToastWidget
{
public:
    FNotificationToastWidget();
    virtual ~FNotificationToastWidget();

    /** Core execution logic for pop-up notifications for achievements */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
