#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 2 member(s).
class CProcessSecret {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessSecret@CProcessSecret@@QEAAJPEAU_GUID@@@Z
    long GetProcessSecret(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyMatchingSecret@CProcessSecret@@QEAAJU_GUID@@@Z
    long VerifyMatchingSecret(_GUID);
};
