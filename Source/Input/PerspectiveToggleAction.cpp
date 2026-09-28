// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Input - Implementation for PerspectiveToggleAction.h

#include "PerspectiveToggleAction.h"

FPerspectiveToggleAction::FPerspectiveToggleAction()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FPerspectiveToggleAction::~FPerspectiveToggleAction()
{
    bIsInitialized = false;
}

void FPerspectiveToggleAction::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Directs camera mode cycling
}

void FPerspectiveToggleAction::Reset()
{
    InternalTimer = 0.0f;
}
