#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 2 member(s).
class CCoTaskAllocator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@CCoTaskAllocator@@UEAAPEAXK@Z
    virtual void * Allocate(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CCoTaskAllocator@@UEAAXPEAX@Z
    virtual void Free(void *);
};
