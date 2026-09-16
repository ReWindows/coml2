#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 8 member(s).
class DeserializeHelper {
public:
    class BstrDestroyer;
    class SafeArrayDestroyer;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DeserializeHelper@@QEAAJPEAVPMemoryAllocator@@II@Z
    long Init(PMemoryAllocator *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Worker@DeserializeHelper@@QEAAJPEBUtagSERIALIZEDPROPERTYVALUE@@KHHHPEAUtagPROPVARIANT@@PEAK@Z
    long Worker(tagSERIALIZEDPROPERTYVALUE const *, unsigned long, int, int, int, tagPROPVARIANT *, unsigned long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alloc@DeserializeHelper@@AEAAJPEAPEAXK@Z
    long Alloc(void * *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocAndCopyBstr@DeserializeHelper@@AEAAJPEAPEAGPEBGK@Z
    long AllocAndCopyBstr(unsigned short * *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocArray@DeserializeHelper@@AEAAJPEAPEAXKK@Z
    long AllocArray(void * *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocCount@DeserializeHelper@@AEAAJK@Z
    long AllocCount(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocSafeArray@DeserializeHelper@@AEAAJPEAPEAUtagSAFEARRAY@@GKPEBUtagSAFEARRAYBOUND@@K@Z
    long AllocSafeArray(tagSAFEARRAY * *, unsigned short, unsigned long, tagSAFEARRAYBOUND const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVariantAllocSize@DeserializeHelper@@CAKG@Z
    static unsigned long GetVariantAllocSize(unsigned short);
};
