// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Utilities - Implementation for PerformanceLogger.h

#include "PerformanceLogger.h"

FPerformanceLogger::FPerformanceLogger()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FPerformanceLogger::~FPerformanceLogger()
{
    bIsInitialized = false;
}

void FPerformanceLogger::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Diagnostic output logging
}

void FPerformanceLogger::Reset()
{
    InternalTimer = 0.0f;
}
