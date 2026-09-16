#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 8 member(s).
class CUpdateList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CUpdateList@@QEAAPEAVCUpdate@@QEAUIMalloc@@PEBVCDfName@@1KKPEAVPTSetMember@@@Z
    CUpdate * Add(IMalloc * const, CDfName const *, CDfName const *, unsigned long, unsigned long, PTSetMember *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CUpdateList@@QEAAXPEAVCUpdate@@@Z
    void Append(CUpdate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CUpdateList@@QEAAXPEAVCUpdate@@@Z
    void Delete(CUpdate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Empty@CUpdateList@@QEAAXXZ
    void Empty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyCache@CUpdateList@@QEAAXXZ
    void EmptyCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBase@CUpdateList@@SAPEAVCUpdate@@PEAV2@PEAPEBVCDfName@@@Z
    static CUpdate * FindBase(CUpdate *, CDfName const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEntry@CUpdateList@@QEAA?AW4UlIsEntry@@PEBVCDfName@@PEAPEAVCUpdate@@@Z
    int IsEntry(CDfName const *, CUpdate * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CUpdateList@@QEAAXPEAVCUpdate@@@Z
    void Remove(CUpdate *);
};
