#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 12 member(s).
class CAsyncConnection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAsyncConnection@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CAsyncConnection@@UEAAJPEAUIUnknown@@PEAK@Z
    virtual long Advise(IUnknown *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAsyncConnection@@QEAA@XZ
    CAsyncConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumConnections@CAsyncConnection@@UEAAJPEAPEAUIEnumConnections@@@Z
    virtual long EnumConnections(IEnumConnections * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectionInterface@CAsyncConnection@@UEAAJPEAU_GUID@@@Z
    virtual long GetConnectionInterface(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectionPointContainer@CAsyncConnection@@UEAAJPEAPEAUIConnectionPointContainer@@@Z
    virtual long GetConnectionPointContainer(IConnectionPointContainer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CAsyncConnection@@QEAAJPEAUIConnectionPointContainer@@PEAV1@@Z
    long Init(IConnectionPointContainer *, CAsyncConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitClone@CAsyncConnection@@QEAAJPEAUIConnectionPointContainer@@PEAV1@@Z
    long InitClone(IConnectionPointContainer *, CAsyncConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Notify@CAsyncConnection@@QEAAJJPEAUILockBytes@@PEAVCPerContext@@PEAVCSafeSem@@@Z
    long Notify(long, ILockBytes *, CPerContext *, CSafeSem *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAsyncConnection@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAsyncConnection@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CAsyncConnection@@UEAAJK@Z
    virtual long Unadvise(unsigned long);
};
