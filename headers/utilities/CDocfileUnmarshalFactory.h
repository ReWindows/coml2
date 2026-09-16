#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 15 member(s).
class CDocfileUnmarshalFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDocfileUnmarshalFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDocfileUnmarshalFactory@@QEAA@XZ
    CDocfileUnmarshalFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CDocfileUnmarshalFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@CDocfileUnmarshalFactory@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@CDocfileUnmarshalFactory@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@CDocfileUnmarshalFactory@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockServer@CDocfileUnmarshalFactory@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@CDocfileUnmarshalFactory@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDocfileUnmarshalFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDocfileUnmarshalFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@CDocfileUnmarshalFactory@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CDocfileUnmarshalFactory@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
};
