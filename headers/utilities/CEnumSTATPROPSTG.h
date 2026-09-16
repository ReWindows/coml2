#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 9 member(s).
class CEnumSTATPROPSTG {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEnumSTATPROPSTG@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumSTATPROPSTG@@QEAA@PEAVCStatArray@@@Z
    CEnumSTATPROPSTG(CStatArray *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEnumSTATPROPSTG@@QEAA@AEBV0@@Z
    CEnumSTATPROPSTG(CEnumSTATPROPSTG const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CEnumSTATPROPSTG@@UEAAJPEAPEAUIEnumSTATPROPSTG@@@Z
    virtual long Clone(IEnumSTATPROPSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CEnumSTATPROPSTG@@UEAAJKPEAUtagSTATPROPSTG@@PEAK@Z
    virtual long Next(unsigned long, tagSTATPROPSTG *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumSTATPROPSTG@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEnumSTATPROPSTG@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEnumSTATPROPSTG@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CEnumSTATPROPSTG@@UEAAJK@Z
    virtual long Skip(unsigned long);
};
