#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 2 member(s).
class CleanupStack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Done@CleanupStack@@QEAAXJ@Z
    void Done(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Push@CleanupStack@@QEAAJPEAXPEAVPMemoryAllocator@@@Z
    long Push(void *, PMemoryAllocator *);
};
