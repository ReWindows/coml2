#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 4 member(s).
class ComTrace {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@ComTrace@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TracesRateLimited_@ComTrace@@QEAAXXZ
    void TracesRateLimited_();
};
