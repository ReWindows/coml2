#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 3 member(s).
class CStatArray {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStatArray@@QEAA@PEAVCPropertySetStream@@PEAJ@Z
    CStatArray(CPropertySetStream *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextAt@CStatArray@@QEAAJKPEAUtagSTATPROPSTG@@PEAK@Z
    long NextAt(unsigned long, tagSTATPROPSTG *, unsigned long *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStatArray@@AEAA@XZ
    ~CStatArray();
};
