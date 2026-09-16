#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 5 member(s).
class CStgHandle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEntry@CStgHandle@@QEAAJPEBVCDfName@@KPEAVCHandle@@@Z
    long CreateEntry(CDfName const *, unsigned long, CHandle *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClass@CStgHandle@@QEAAJPEAU_GUID@@@Z
    long GetClass(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateBits@CStgHandle@@QEAAJPEAK@Z
    long GetStateBits(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClass@CStgHandle@@QEAAJAEBU_GUID@@@Z
    long SetClass(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateBits@CStgHandle@@QEAAJKK@Z
    long SetStateBits(unsigned long, unsigned long);
};
