#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 24 member(s).
class CFillLockBytes {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFillLockBytes@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillAppend@CFillLockBytes@@UEAAJPEBXKPEAK@Z
    virtual long FillAppend(void const *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillAt@CFillLockBytes@@UEAAJT_ULARGE_INTEGER@@PEBXKPEAK@Z
    virtual long FillAt(_ULARGE_INTEGER, void const *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CFillLockBytes@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFailureInfo@CFillLockBytes@@UEAAJPEAK0@Z
    virtual long GetFailureInfo(unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTerminationStatus@CFillLockBytes@@UEAAJPEAK@Z
    virtual long GetTerminationStatus(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CFillLockBytes@@QEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockRegion@CFillLockBytes@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long LockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFillLockBytes@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAt@CFillLockBytes@@UEAAJT_ULARGE_INTEGER@@PEAXKPEAK@Z
    virtual long ReadAt(_ULARGE_INTEGER, void *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFillLockBytes@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFillSize@CFillLockBytes@@UEAAJT_ULARGE_INTEGER@@@Z
    virtual long SetFillSize(_ULARGE_INTEGER);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CFillLockBytes@@UEAAJT_ULARGE_INTEGER@@@Z
    virtual long SetSize(_ULARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CFillLockBytes@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Terminate@CFillLockBytes@@UEAAJH@Z
    virtual long Terminate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockRegion@CFillLockBytes@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long UnlockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAt@CFillLockBytes@@UEAAJT_ULARGE_INTEGER@@PEBXKPEAK@Z
    virtual long WriteAt(_ULARGE_INTEGER, void const *, unsigned long, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFillLockBytes@@QEAA@XZ
    ~CFillLockBytes();
};
