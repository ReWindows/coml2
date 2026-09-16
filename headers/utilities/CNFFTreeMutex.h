#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 8 member(s).
class CNFFTreeMutex {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNFFTreeMutex@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNFFTreeMutex@@QEAA@XZ
    CNFFTreeMutex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CNFFTreeMutex@@QEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CNFFTreeMutex@@UEAAJK@Z
    virtual long Lock(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNFFTreeMutex@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNFFTreeMutex@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CNFFTreeMutex@@UEAAJXZ
    virtual long Unlock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNFFTreeMutex@@QEAA@XZ
    ~CNFFTreeMutex();
};
