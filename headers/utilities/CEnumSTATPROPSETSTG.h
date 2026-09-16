#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 12 member(s).
class CEnumSTATPROPSETSTG {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumSTATPROPSETSTG@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumSTATPROPSETSTG@@QEAA@PEAUIStorage@@PEAJ@Z
    CEnumSTATPROPSETSTG(IStorage *, long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumSTATPROPSETSTG@@QEAA@AEAV0@PEAJ@Z
    CEnumSTATPROPSETSTG(CEnumSTATPROPSETSTG &, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumSTATPROPSETSTG@@UEAAJPEAPEAUIEnumSTATPROPSETSTG@@@Z
    virtual long Clone(IEnumSTATPROPSETSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumSTATPROPSETSTG@@UEAAJKPEAUtagSTATPROPSETSTG@@PEAK@Z
    virtual long Next(unsigned long, tagSTATPROPSETSTG *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumSTATPROPSETSTG@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumSTATPROPSETSTG@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumSTATPROPSETSTG@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumSTATPROPSETSTG@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumSTATPROPSETSTG@@QEAA@XZ
    ~CEnumSTATPROPSETSTG();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupStatArray@CEnumSTATPROPSETSTG@@AEAAXXZ
    void CleanupStatArray();
};
