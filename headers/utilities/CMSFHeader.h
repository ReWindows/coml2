#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 2 member(s).
class CMSFHeader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSectorsAgainstFileSize@CMSFHeader@@QEBAJ_KPEAUILockBytes@@@Z
    long CheckSectorsAgainstFileSize(uint64_t, ILockBytes *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CMSFHeader@@QEBAJXZ
    long Validate() const;
};
