// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/Menus - Implementation for GraphicsQualityWidget.h

#include "GraphicsQualityWidget.h"

FGraphicsQualityWidget::FGraphicsQualityWidget()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FGraphicsQualityWidget::~FGraphicsQualityWidget()
{
    bIsInitialized = false;
}

void FGraphicsQualityWidget::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Scalability group toggles
}

void FGraphicsQualityWidget::Reset()
{
    InternalTimer = 0.0f;
}
