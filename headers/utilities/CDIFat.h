#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 12 member(s).
class CDIFat {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheUnmarkedSect@CDIFat@@QEAAXKKK@Z
    void CacheUnmarkedSect(unsigned long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fixup@CDIFat@@QEAAJPEAVCMStream@@@Z
    long Fixup(CMStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFatSect@CDIFat@@QEAAJKPEAK@Z
    long GetFatSect(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSect@CDIFat@@QEAAJKPEAK@Z
    long GetSect(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDIFat@@QEAAJPEAVCMStream@@K@Z
    long Init(CMStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitConvert@CDIFat@@QEAAJPEAVCMStream@@K@Z
    long InitConvert(CMStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@CDIFat@@QEAAJKPEAK@Z
    long Lookup(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remap@CDIFat@@QEAAJKPEAK@Z
    long Remap(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemapSelf@CDIFat@@QEAAJXZ
    long RemapSelf();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFatSect@CDIFat@@QEAAJKK@Z
    long SetFatSect(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CDIFat@@QEAAXPEAVCMStream@@@Z
    void SetParent(CMStream *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CDIFat@@AEAAJK@Z
    long Resize(unsigned long);
};
