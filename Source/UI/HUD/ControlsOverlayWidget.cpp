// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/HUD - Implementation for ControlsOverlayWidget.h

#include "ControlsOverlayWidget.h"

FControlsOverlayWidget::FControlsOverlayWidget()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FControlsOverlayWidget::~FControlsOverlayWidget()
{
    bIsInitialized = false;
}

void FControlsOverlayWidget::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Widget initialization
}

void FControlsOverlayWidget::Reset()
{
    InternalTimer = 0.0f;
}
