#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 3 member(s).
class CAsyncConnectionContainer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAsyncConnectionContainer@@QEAA@XZ
    CAsyncConnectionContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumConnectionPoints@CAsyncConnectionContainer@@UEAAJPEAPEAUIEnumConnectionPoints@@@Z
    virtual long EnumConnectionPoints(IEnumConnectionPoints * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindConnectionPoint@CAsyncConnectionContainer@@UEAAJAEBU_GUID@@PEAPEAUIConnectionPoint@@@Z
    virtual long FindConnectionPoint(_GUID const &, IConnectionPoint * *);
};
