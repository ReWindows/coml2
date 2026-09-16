#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 4 member(s).
class CDfName {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@CDfName@@QEBAHPEBV1@@Z
    int IsEqual(CDfName const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CDfName@@QEAAXGPEBE@Z
    void Set(unsigned short, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CDfName@@QEAAXPEBG@Z
    void Set(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CDfName@@QEAAXPEBV1@@Z
    void Set(CDfName const *);
};
