#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 12 member(s).
class CMemBytes {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMemBytes@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMemBytes@@SAPEAV1@PEAX@Z
    static CMemBytes * Create(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMemBytes@@UEAAJXZ
    virtual long Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockRegion@CMemBytes@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long LockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMemBytes@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAt@CMemBytes@@UEAAJT_ULARGE_INTEGER@@PEAXKPEAK@Z
    virtual long ReadAt(_ULARGE_INTEGER, void *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMemBytes@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CMemBytes@@UEAAJT_ULARGE_INTEGER@@@Z
    virtual long SetSize(_ULARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CMemBytes@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockRegion@CMemBytes@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long UnlockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAt@CMemBytes@@UEAAJT_ULARGE_INTEGER@@PEBXKPEAK@Z
    virtual long WriteAt(_ULARGE_INTEGER, void const *, unsigned long, unsigned long *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMemBytes@@AEAA@XZ
    CMemBytes();
};
