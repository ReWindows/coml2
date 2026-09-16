#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 8 member(s).
class CSimpEnumSTATSTG {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSimpEnumSTATSTG@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSimpEnumSTATSTG@@QEAA@PEAVCDfNameList@@0@Z
    CSimpEnumSTATSTG(CDfNameList *, CDfNameList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CSimpEnumSTATSTG@@UEAAJPEAPEAUIEnumSTATSTG@@@Z
    virtual long Clone(IEnumSTATSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CSimpEnumSTATSTG@@UEAAJKPEAUtagSTATSTG@@PEAK@Z
    virtual long Next(unsigned long, tagSTATSTG *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSimpEnumSTATSTG@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSimpEnumSTATSTG@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CSimpEnumSTATSTG@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CSimpEnumSTATSTG@@UEAAJK@Z
    virtual long Skip(unsigned long);
};
