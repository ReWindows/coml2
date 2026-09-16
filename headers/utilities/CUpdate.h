#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 7 member(s).
class CUpdate {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUpdate@@QEAA@PEBVCDfName@@0KKPEAVPTSetMember@@@Z
    CUpdate(CDfName const *, CDfName const *, unsigned long, unsigned long, PTSetMember *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRename@CUpdate@@QEBAHXZ
    int IsRename() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNext@CUpdate@@QEAAXPEAV1@@Z
    void SetNext(CUpdate *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrev@CUpdate@@QEAAXPEAV1@@Z
    void SetPrev(CUpdate *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetXSM@CUpdate@@QEAAXPEAVPTSetMember@@@Z
    void SetXSM(PTSetMember *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUpdate@@QEAA@XZ
    ~CUpdate();
};
