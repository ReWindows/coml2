#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 8 member(s).
class CErrorSmAllocator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alloc@CErrorSmAllocator@@UEAAPEAX_K@Z
    virtual void * Alloc(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CErrorSmAllocator@@QEAA@XZ
    CErrorSmAllocator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DidAlloc@CErrorSmAllocator@@UEAAHPEAX@Z
    virtual int DidAlloc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CErrorSmAllocator@@UEAAXPEAX@Z
    virtual void Free(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CErrorSmAllocator@@UEAA_KPEAX@Z
    virtual uint64_t GetSize(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeapMinimize@CErrorSmAllocator@@UEAAXXZ
    virtual void HeapMinimize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Realloc@CErrorSmAllocator@@UEAAPEAXPEAX_K@Z
    virtual void * Realloc(void *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyUnmarshaledPointerWithinBlock@CErrorSmAllocator@@UEBA_N_KK@Z
    virtual bool VerifyUnmarshaledPointerWithinBlock(uint64_t, unsigned long) const;
};
