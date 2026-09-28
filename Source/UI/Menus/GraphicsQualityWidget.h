// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/Menus - Presets for Low, Medium, High scalability

#pragma once

#include "CoreMinimal.h"

/**
 * GraphicsQualityWidget
 * Presets for Low, Medium, High scalability
 */
class RUSHPARKOUR_API FGraphicsQualityWidget
{
public:
    FGraphicsQualityWidget();
    virtual ~FGraphicsQualityWidget();

    /** Core execution logic for presets for low, medium, high scalability */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
