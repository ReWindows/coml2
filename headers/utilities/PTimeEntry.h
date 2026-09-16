#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 3 member(s).
class PTimeEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTimesFrom@PTimeEntry@@QEAAJPEAV1@@Z
    long CopyTimesFrom(PTimeEntry *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTime@PTimeEntry@@QEAAJW4WHICHTIME@@PEAU_FILETIME@@@Z
    long GetTime(int, _FILETIME *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTime@PTimeEntry@@QEAAJW4WHICHTIME@@U_FILETIME@@@Z
    long SetTime(int, _FILETIME);
};
