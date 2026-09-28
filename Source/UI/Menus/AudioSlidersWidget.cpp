// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/Menus - Implementation for AudioSlidersWidget.h

#include "AudioSlidersWidget.h"

FAudioSlidersWidget::FAudioSlidersWidget()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FAudioSlidersWidget::~FAudioSlidersWidget()
{
    bIsInitialized = false;
}

void FAudioSlidersWidget::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Sound class volume control
}

void FAudioSlidersWidget::Reset()
{
    InternalTimer = 0.0f;
}
