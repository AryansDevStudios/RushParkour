// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Audio - Implementation for AudioManager.h

#include "AudioManager.h"

FAudioManager::FAudioManager()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FAudioManager::~FAudioManager()
{
    bIsInitialized = false;
}

void FAudioManager::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Plays footsteps, jumps, and collapses
}

void FAudioManager::Reset()
{
    InternalTimer = 0.0f;
}
