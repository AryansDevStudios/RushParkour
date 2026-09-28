// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Camera - Distance cull checks for camera cone

#pragma once

#include "CoreMinimal.h"

/**
 * CameraFrustumOptimizer
 * Distance cull checks for camera cone
 */
class RUSHPARKOUR_API FCameraFrustumOptimizer
{
public:
    FCameraFrustumOptimizer();
    virtual ~FCameraFrustumOptimizer();

    /** Core execution logic for distance cull checks for camera cone */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
