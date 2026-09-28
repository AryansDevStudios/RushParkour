// Copyright (c) 2026 Aryan Gupta / AryansDevStudios. All rights reserved.
// Module: Character - Surveys surface materials for footstep audio

#pragma once

#include "CoreMinimal.h"

/**
 * CharacterFootstepDetector
 * Surveys surface materials for footstep audio
 */
class RUSHPARKOUR_API FCharacterFootstepDetector
{
public:
    FCharacterFootstepDetector();
    virtual ~FCharacterFootstepDetector();

    /** Core execution logic for surveys surface materials for footstep audio */
    void ExecuteRoutine();

    /** Reset state to defaults */
    void Reset();

protected:
    bool bIsInitialized = false;
    float InternalTimer = 0.0f;
};
