// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Platforms/Moving - Imparts platform velocity to standing player

#pragma once

#include "CoreMinimal.h"

/**
 * PassengerAttachmentHandler
 * Imparts platform velocity to standing player
 */
class RUSHPARKOUR_API FPassengerAttachmentHandler
{
public:
    FPassengerAttachmentHandler();
    virtual ~FPassengerAttachmentHandler();

    /** Core execution logic for imparts platform velocity to standing player */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
