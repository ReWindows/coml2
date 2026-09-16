#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 11 member(s).
class CStreamCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@CStreamCache@@QEAAJPEAVCFat@@KPEAK@Z
    long Allocate(CFat *, unsigned long, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStreamCache@@QEAA@XZ
    CStreamCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contig@CStreamCache@@QEAAJKHPEAUSSegment@@KPEAK@Z
    long Contig(unsigned long, int, SSegment *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Empty@CStreamCache@@QEAAXXZ
    void Empty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyRegion@CStreamCache@@QEAAJKK@Z
    long EmptyRegion(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetESect@CStreamCache@@QEAAJKPEAK@Z
    long GetESect(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSect@CStreamCache@@QEAAJKPEAK@Z
    long GetSect(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CStreamCache@@QEAAXPEAVCMStream@@KPEAVCDirectStream@@@Z
    void Init(CMStream *, unsigned long, CDirectStream *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheSegment@CStreamCache@@AEAAXPEAUSSegment@@@Z
    void CacheSegment(SSegment *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStart@CStreamCache@@AEAAJPEAK@Z
    long GetStart(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectFat@CStreamCache@@AEAAPEAVCFat@@XZ
    CFat * SelectFat();
};
