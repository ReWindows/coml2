#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 5 member(s).
class CDfMutex {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDfMutex@@QEAAJPEAVCGlobalContext@@H@Z
    long Init(CGlobalContext *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHandleValid@CDfMutex@@QEAAHPEBG@Z
    int IsHandleValid(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDfMutex@@QEAAXXZ
    void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Take@CDfMutex@@QEAAJK@Z
    long Take(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDfMutex@@QEAA@XZ
    ~CDfMutex();
};
