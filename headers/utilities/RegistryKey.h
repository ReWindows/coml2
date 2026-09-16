#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 2 member(s).
class RegistryKey {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadDWORDValue@RegistryKey@@QEBAJPEBGPEAK@Z
    long ReadDWORDValue(unsigned short const *, unsigned long *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticOpen@RegistryKey@@CAJPEAUHKEY__@@PEBGKPEAPEAU2@@Z
    static long StaticOpen(HKEY__*, unsigned short const *, unsigned long, HKEY__* *);
};
