#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 2 member(s).
class CChildInstanceList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByName@CChildInstanceList@@QEAAXPEBVCDfName@@@Z
    void DeleteByName(CDfName const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDenied@CChildInstanceList@@QEAAJPEBVCDfName@@KK@Z
    long IsDenied(CDfName const *, unsigned long, unsigned long);
};
