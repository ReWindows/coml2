#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 6 member(s).
class CFreeList {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFreeList@@QEAA@XZ
    CFreeList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReserved@CFreeList@@QEAAPEAXXZ
    void * GetReserved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reserve@CFreeList@@QEAAJPEAUIMalloc@@I_K@Z
    long Reserve(IMalloc *, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnToReserve@CFreeList@@QEAAXPEAX@Z
    void ReturnToReserve(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unreserve@CFreeList@@QEAAXI@Z
    void Unreserve(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFreeList@@QEAA@XZ
    ~CFreeList();
};
