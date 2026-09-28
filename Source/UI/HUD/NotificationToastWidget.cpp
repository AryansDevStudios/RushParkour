// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: UI/HUD - Implementation for NotificationToastWidget.h

#include "NotificationToastWidget.h"

FNotificationToastWidget::FNotificationToastWidget()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FNotificationToastWidget::~FNotificationToastWidget()
{
    bIsInitialized = false;
}

void FNotificationToastWidget::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Toast slide-in animation
}

void FNotificationToastWidget::Reset()
{
    InternalTimer = 0.0f;
}
