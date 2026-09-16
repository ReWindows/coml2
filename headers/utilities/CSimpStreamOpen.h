#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 8 member(s).
class CSimpStreamOpen {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CSimpStreamOpen@@UEAAJPEAXKPEAK@Z
    virtual long Read(void *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSimpStreamOpen@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CSimpStreamOpen@@UEAAJT_LARGE_INTEGER@@KPEAT_ULARGE_INTEGER@@@Z
    virtual long Seek(_LARGE_INTEGER, unsigned long, _ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CSimpStreamOpen@@UEAAJT_ULARGE_INTEGER@@@Z
    virtual long SetSize(_ULARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CSimpStreamOpen@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CSimpStreamOpen@@UEAAJPEBXKPEAK@Z
    virtual long Write(void const *, unsigned long, unsigned long *);
};
