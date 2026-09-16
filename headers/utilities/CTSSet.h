#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 4 member(s).
class CTSSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMember@CTSSet@@QEAAXPEAVPTSetMember@@@Z
    void AddMember(PTSetMember *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindName@CTSSet@@QEAAPEAVPTSetMember@@PEBVCDfName@@K@Z
    PTSetMember * FindName(CDfName const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMember@CTSSet@@QEAAXPEAVPTSetMember@@@Z
    void RemoveMember(PTSetMember *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameMember@CTSSet@@QEAAXPEBVCDfName@@K0@Z
    void RenameMember(CDfName const *, unsigned long, CDfName const *);
};
