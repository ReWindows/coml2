#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 5 member(s).
class CDFBasis {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDFBasis@@QEAA@QEAUIMalloc@@KKPEAVCGlobalContext@@@Z
    CDFBasis(IMalloc * const, unsigned long, unsigned long, CGlobalContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWriteAccess@CDFBasis@@QEAAJXZ
    long ReleaseWriteAccess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reserve@CDFBasis@@QEAAJIW4CDFB_CLASSTYPE@@@Z
    long Reserve(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?vRelease@CDFBasis@@QEAAJXZ
    long vRelease();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDFBasis@@QEAA@XZ
    ~CDFBasis();
};
