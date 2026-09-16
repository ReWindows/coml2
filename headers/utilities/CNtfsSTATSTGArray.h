#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 3 member(s).
class CNtfsSTATSTGArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CNtfsSTATSTGArray@@QEAAJPEAX@Z
    long Init(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextAt@CNtfsSTATSTGArray@@QEAAJKPEAUtagSTATSTG@@PEAK@Z
    long NextAt(unsigned long, tagSTATSTG *, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNtfsSTATSTGArray@@QEAA@XZ
    ~CNtfsSTATSTGArray();
};
