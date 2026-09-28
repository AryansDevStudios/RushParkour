// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Utilities - Implementation for StringFormatters.h

#include "StringFormatters.h"

FStringFormatters::FStringFormatters()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FStringFormatters::~FStringFormatters()
{
    bIsInitialized = false;
}

void FStringFormatters::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Time formatting functions
}

void FStringFormatters::Reset()
{
    InternalTimer = 0.0f;
}
