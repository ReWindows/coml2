#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 5 member(s).
class CPubMappedStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CPubMappedStream@@QEAAXPEAJ@Z
    void Flush(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CPubMappedStream@@QEAAXPEAVCPropertySetStream@@PEAJ@Z
    void Open(CPropertySetStream *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReOpen@CPubMappedStream@@QEAAXPEAPEAXPEAJ@Z
    void ReOpen(void * *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CPubMappedStream@@QEAAXKEPEAPEAXPEAJ@Z
    void SetSize(unsigned long, unsigned char, void * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CPubMappedStream@@QEAAJXZ
    long Write();
};
