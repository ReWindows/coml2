#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 9 member(s).
class CPubStream {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPubStream@@QEAA@PEAVCPubDocFile@@KPEBVCDfName@@@Z
    CPubStream(CPubDocFile *, unsigned long, CDfName const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CPubStream@@QEAAJK@Z
    long Commit(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CPubStream@@QEAAJPEA_K@Z
    long GetSize(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CPubStream@@QEAAXPEAVPSStream@@K@Z
    void Init(PSStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAt@CPubStream@@QEAAJ_KPEAXKPEAK@Z
    long ReadAt(uint64_t, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirty@CPubStream@@QEAAXXZ
    void SetDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CPubStream@@QEAAJ_K@Z
    long SetSize(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAt@CPubStream@@QEAAJ_KPEBXKPEAK@Z
    long WriteAt(uint64_t, void const *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?vRelease@CPubStream@@QEAAJXZ
    long vRelease();
};
