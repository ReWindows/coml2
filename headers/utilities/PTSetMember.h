#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 8 member(s).
class PTSetMember {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PTSetMember@@QEAAXXZ
    void AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyCache@PTSetMember@@QEAAXXZ
    void EmptyCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCommit@PTSetMember@@QEAAXK@Z
    void EndCommit(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommitInfo@PTSetMember@@QEAAXPEA_K0@Z
    void GetCommitInfo(uint64_t *, uint64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PTSetMember@@QEAAXXZ
    void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@PTSetMember@@QEAAXXZ
    void Revert();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@PTSetMember@@QEAAJPEAUtagSTATSTG@@K@Z
    long Stat(tagSTATSTG *, unsigned long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PTSetMember@@IEAA@PEBVCDfName@@G@Z
    PTSetMember(CDfName const *, unsigned short);
};
