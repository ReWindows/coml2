#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 5 member(s).
class CContextList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CContextList@@QEAAXPEAVCContext@@@Z
    void Add(CContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountContexts@CContextList@@QEAAKXZ
    unsigned long CountContexts();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContextList@@QEAAXXZ
    void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CContextList@@QEAAXPEAVCContext@@@Z
    void Remove(CContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Find@CContextList@@QEAAPEAVCContext@@K@Z
    CContext * _Find(unsigned long);
};
