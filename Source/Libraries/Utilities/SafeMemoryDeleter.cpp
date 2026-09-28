// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Utilities - Implementation for SafeMemoryDeleter.h

#include "SafeMemoryDeleter.h"

FSafeMemoryDeleter::FSafeMemoryDeleter()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FSafeMemoryDeleter::~FSafeMemoryDeleter()
{
    bIsInitialized = false;
}

void FSafeMemoryDeleter::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Memory safety guards
}

void FSafeMemoryDeleter::Reset()
{
    InternalTimer = 0.0f;
}
