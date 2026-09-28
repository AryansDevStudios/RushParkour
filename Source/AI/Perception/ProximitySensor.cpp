// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: AI/Perception - Implementation for ProximitySensor.h

#include "ProximitySensor.h"

FProximitySensor::FProximitySensor()
{
    bIsInitialized = true;
    InternalTimer = 0.0f;
}

FProximitySensor::~FProximitySensor()
{
    bIsInitialized = false;
}

void FProximitySensor::ExecuteRoutine()
{
    if (!bIsInitialized) return;
    // Implementation for: Distance threshold test
}

void FProximitySensor::Reset()
{
    InternalTimer = 0.0f;
}
