#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 3 member(s).
class CSTATPROPBAGArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSTATPROPBAGArray@@QEAAJPEAUIPropertyStorage@@PEBGK@Z
    long Init(IPropertyStorage *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextAt@CSTATPROPBAGArray@@QEAAJKPEAUtagSTATPROPBAG@@PEAK@Z
    long NextAt(unsigned long, tagSTATPROPBAG *, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSTATPROPBAGArray@@QEAA@XZ
    ~CSTATPROPBAGArray();
};
