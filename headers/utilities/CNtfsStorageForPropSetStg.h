#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 20 member(s).
class CNtfsStorageForPropSetStg {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNtfsStorageForPropSetStg@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNtfsStorageForPropSetStg@@QEAA@XZ
    CNtfsStorageForPropSetStg();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CNtfsStorageForPropSetStg@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CNtfsStorageForPropSetStg@@UEAAJKPEBU_GUID@@PEAPEAGPEAUIStorage@@@Z
    virtual long CopyTo(unsigned long, _GUID const *, unsigned short * *, IStorage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStorage@CNtfsStorageForPropSetStg@@UEAAJPEBGKKKPEAPEAUIStorage@@@Z
    virtual long CreateStorage(unsigned short const *, unsigned long, unsigned long, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CNtfsStorageForPropSetStg@@UEAAJPEBGKKKPEAPEAUIStream@@@Z
    virtual long CreateStream(unsigned short const *, unsigned long, unsigned long, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyElement@CNtfsStorageForPropSetStg@@UEAAJPEBG@Z
    virtual long DestroyElement(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumElements@CNtfsStorageForPropSetStg@@UEAAJKPEAXKPEAPEAUIEnumSTATSTG@@@Z
    virtual long EnumElements(unsigned long, void *, unsigned long, IEnumSTATSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveElementTo@CNtfsStorageForPropSetStg@@UEAAJPEBGPEAUIStorage@@0K@Z
    virtual long MoveElementTo(unsigned short const *, IStorage *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStorage@CNtfsStorageForPropSetStg@@UEAAJPEBGPEAUIStorage@@KPEAPEAGKPEAPEAU2@@Z
    virtual long OpenStorage(unsigned short const *, IStorage *, unsigned long, unsigned short * *, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStream@CNtfsStorageForPropSetStg@@UEAAJPEBGPEAXKKPEAPEAUIStream@@@Z
    virtual long OpenStream(unsigned short const *, void *, unsigned long, unsigned long, IStream * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNtfsStorageForPropSetStg@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNtfsStorageForPropSetStg@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameElement@CNtfsStorageForPropSetStg@@UEAAJPEBG0@Z
    virtual long RenameElement(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CNtfsStorageForPropSetStg@@UEAAJXZ
    virtual long Revert();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClass@CNtfsStorageForPropSetStg@@UEAAJAEBU_GUID@@@Z
    virtual long SetClass(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementTimes@CNtfsStorageForPropSetStg@@UEAAJPEBGPEBU_FILETIME@@11@Z
    virtual long SetElementTimes(unsigned short const *, _FILETIME const *, _FILETIME const *, _FILETIME const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateBits@CNtfsStorageForPropSetStg@@UEAAJKK@Z
    virtual long SetStateBits(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CNtfsStorageForPropSetStg@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOrOpenStorage@CNtfsStorageForPropSetStg@@AEAAJPEBGPEAUIStorage@@KPEAPEAGHPEAPEAU2@@Z
    long CreateOrOpenStorage(unsigned short const *, IStorage *, unsigned long, unsigned short * *, int, IStorage * *);
};
