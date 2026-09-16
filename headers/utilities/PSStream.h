#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 6 member(s).
class PSStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyCache@PSStream@@QEAAXXZ
    void EmptyCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeltaList@PSStream@@QEAAPEAVCDeltaList@@XZ
    CDeltaList * GetDeltaList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@PSStream@@QEAAXPEA_K@Z
    void GetSize(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAt@PSStream@@QEAAJ_KPEAXKPEAK@Z
    long ReadAt(uint64_t, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@PSStream@@QEAAJ_K@Z
    long SetSize(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAt@PSStream@@QEAAJ_KPEBXKPEAK@Z
    long WriteAt(uint64_t, void const *, unsigned long, unsigned long *);
};
