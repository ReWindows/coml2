#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 11 member(s).
class CNtfsEnumSTATSTG {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNtfsEnumSTATSTG@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNtfsEnumSTATSTG@@QEAA@PEAUIBlockingLock@@@Z
    CNtfsEnumSTATSTG(IBlockingLock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CNtfsEnumSTATSTG@@UEAAJPEAPEAUIEnumSTATSTG@@@Z
    virtual long Clone(IEnumSTATSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CNtfsEnumSTATSTG@@UEAAJPEAX@Z
    virtual long Init(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CNtfsEnumSTATSTG@@UEAAJKPEAUtagSTATSTG@@PEAK@Z
    virtual long Next(unsigned long, tagSTATSTG *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNtfsEnumSTATSTG@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNtfsEnumSTATSTG@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CNtfsEnumSTATSTG@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CNtfsEnumSTATSTG@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNtfsEnumSTATSTG@@QEAA@XZ
    ~CNtfsEnumSTATSTG();
};
