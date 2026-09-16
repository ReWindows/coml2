#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 35 member(s).
class CSimpStorage {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSimpStorage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSimpStorage@@QEAA@XZ
    CSimpStorage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CSimpStorage@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CSimpStorage@@UEAAJKPEBU_GUID@@PEAPEAGPEAUIStorage@@@Z
    virtual long CopyTo(unsigned long, _GUID const *, unsigned short * *, IStorage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStorage@CSimpStorage@@UEAAJPEBGKKKPEAPEAUIStorage@@@Z
    virtual long CreateStorage(unsigned short const *, unsigned long, unsigned long, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CSimpStorage@@UEAAJPEBGKKKPEAPEAUIStream@@@Z
    virtual long CreateStream(unsigned short const *, unsigned long, unsigned long, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyElement@CSimpStorage@@UEAAJPEBG@Z
    virtual long DestroyElement(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@CSimpStorage@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumElements@CSimpStorage@@UEAAJKPEAXKPEAPEAUIEnumSTATSTG@@@Z
    virtual long EnumElements(unsigned long, void *, unsigned long, IEnumSTATSTG * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@CSimpStorage@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@CSimpStorage@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSimpStorage@@QEAAJPEBGPEAX@Z
    long Init(unsigned short const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@CSimpStorage@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveElementTo@CSimpStorage@@UEAAJPEBGPEAUIStorage@@0K@Z
    virtual long MoveElementTo(unsigned short const *, IStorage *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStorage@CSimpStorage@@UEAAJPEBGPEAUIStorage@@KPEAPEAGKPEAPEAU2@@Z
    virtual long OpenStorage(unsigned short const *, IStorage *, unsigned long, unsigned short * *, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStream@CSimpStorage@@UEAAJPEBGPEAXKKPEAPEAUIStream@@@Z
    virtual long OpenStream(unsigned short const *, void *, unsigned long, unsigned long, IStream * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSimpStorage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSimpStorage@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCurrentStream@CSimpStorage@@QEAAXXZ
    void ReleaseCurrentStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@CSimpStorage@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameElement@CSimpStorage@@UEAAJPEBG0@Z
    virtual long RenameElement(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CSimpStorage@@UEAAJXZ
    virtual long Revert();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClass@CSimpStorage@@UEAAJAEBU_GUID@@@Z
    virtual long SetClass(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementTimes@CSimpStorage@@UEAAJPEBGPEBU_FILETIME@@11@Z
    virtual long SetElementTimes(unsigned short const *, _FILETIME const *, _FILETIME const *, _FILETIME const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateBits@CSimpStorage@@UEAAJKK@Z
    virtual long SetStateBits(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CSimpStorage@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CSimpStorage@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSimpStorage@@QEAA@XZ
    ~CSimpStorage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildTree@CSimpStorage@@IEAAKPEAVCDirEntry@@KK@Z
    unsigned long BuildTree(CDirEntry *, unsigned long, unsigned long);
};
