// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Moving - Implementation for PassengerAttachmentHandler.h

#include "PassengerAttachmentHandler.h"

FPassengerAttachmentHandler::FPassengerAttachmentHandler()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FPassengerAttachmentHandler::~FPassengerAttachmentHandler()
{
    bIsInitialized = false;
}

void FPassengerAttachmentHandler::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Velocity transfer logic
}

void FPassengerAttachmentHandler::Reset()
{
    InternalTimer = 0.0f;
}
