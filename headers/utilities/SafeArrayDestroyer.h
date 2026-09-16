#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 2 member(s).
namespace DeserializeHelper {
class SafeArrayDestroyer {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@SafeArrayDestroyer@DeserializeHelper@@EEAAPEAXK@Z
    virtual void * Allocate(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@SafeArrayDestroyer@DeserializeHelper@@EEAAXPEAX@Z
    virtual void Free(void *);
};
} // namespace DeserializeHelper
