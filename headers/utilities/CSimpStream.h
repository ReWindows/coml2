#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 26 member(s).
class CSimpStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSimpStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSimpStream@@QEAA@XZ
    CSimpStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CSimpStream@@UEAAJPEAPEAUIStream@@@Z
    virtual long Clone(IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CSimpStream@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CSimpStream@@UEAAJPEAUIStream@@T_ULARGE_INTEGER@@PEAT3@2@Z
    virtual long CopyTo(IStream *, _ULARGE_INTEGER, _ULARGE_INTEGER *, _ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@CSimpStream@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@CSimpStream@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@CSimpStream@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSimpStream@@QEAAJPEAUCSimpStorage@@PEAXK@Z
    long Init(CSimpStorage *, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockRegion@CSimpStream@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long LockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@CSimpStream@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSimpStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CSimpStream@@UEAAJPEAXKPEAK@Z
    virtual long Read(void *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSimpStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@CSimpStream@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CSimpStream@@UEAAJXZ
    virtual long Revert();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CSimpStream@@UEAAJT_LARGE_INTEGER@@KPEAT_ULARGE_INTEGER@@@Z
    virtual long Seek(_LARGE_INTEGER, unsigned long, _ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CSimpStream@@UEAAJT_ULARGE_INTEGER@@@Z
    virtual long SetSize(_ULARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CSimpStream@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockRegion@CSimpStream@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long UnlockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CSimpStream@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CSimpStream@@UEAAJPEBXKPEAK@Z
    virtual long Write(void const *, unsigned long, unsigned long *);
};
