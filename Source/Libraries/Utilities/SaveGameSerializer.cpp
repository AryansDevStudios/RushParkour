// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Libraries/Utilities - Implementation for SaveGameSerializer.h

#include "SaveGameSerializer.h"

FSaveGameSerializer::FSaveGameSerializer()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FSaveGameSerializer::~FSaveGameSerializer()
{
    bIsInitialized = false;
}

void FSaveGameSerializer::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Disk write/read helpers
}

void FSaveGameSerializer::Reset()
{
    InternalTimer = 0.0f;
}
