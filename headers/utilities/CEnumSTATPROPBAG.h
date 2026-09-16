#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 11 member(s).
class CEnumSTATPROPBAG {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumSTATPROPBAG@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumSTATPROPBAG@@QEAA@PEAUIBlockingLock@@@Z
    CEnumSTATPROPBAG(IBlockingLock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumSTATPROPBAG@@UEAAJPEAPEAUIEnumSTATPROPBAG@@@Z
    virtual long Clone(IEnumSTATPROPBAG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CEnumSTATPROPBAG@@QEAAJPEAUIPropertyStorage@@PEBGK@Z
    long Init(IPropertyStorage *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumSTATPROPBAG@@UEAAJKPEAUtagSTATPROPBAG@@PEAK@Z
    virtual long Next(unsigned long, tagSTATPROPBAG *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumSTATPROPBAG@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumSTATPROPBAG@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumSTATPROPBAG@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumSTATPROPBAG@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEnumSTATPROPBAG@@QEAA@XZ
    ~CEnumSTATPROPBAG();
};
