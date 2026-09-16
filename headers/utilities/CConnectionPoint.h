#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 12 member(s).
class CConnectionPoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddConnection@CConnectionPoint@@UEAAJPEAUIProgressNotify@@PEAK@Z
    virtual long AddConnection(IProgressNotify *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CConnectionPoint@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConnectionPoint@@QEAA@XZ
    CConnectionPoint();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CConnectionPoint@@UEAAJPEAPEAUIDocfileAsyncConnectionPoint@@@Z
    virtual long GetParent(IDocfileAsyncConnectionPoint * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CConnectionPoint@@QEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySinks@CConnectionPoint@@UEAAJKKHJ@Z
    virtual long NotifySinks(unsigned long, unsigned long, int, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CConnectionPoint@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CConnectionPoint@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveConnection@CConnectionPoint@@UEAAJK@Z
    virtual long RemoveConnection(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CConnectionPoint@@QEAAXPEAUIDocfileAsyncConnectionPoint@@@Z
    void SetParent(IDocfileAsyncConnectionPoint *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConnectionPoint@@QEAA@XZ
    ~CConnectionPoint();
};
