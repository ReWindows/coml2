#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 15 member(s).
class CSmAllocator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSmAllocator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Alloc@CSmAllocator@@UEAAPEAX_K@Z
    virtual void * Alloc(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSmAllocator@@QEAA@XZ
    CSmAllocator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DidAlloc@CSmAllocator@@UEAAHPEAX@Z
    virtual int DidAlloc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CSmAllocator@@UEAAXPEAX@Z
    virtual void Free(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CSmAllocator@@UEAA_KPEAX@Z
    virtual uint64_t GetSize(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeapMinimize@CSmAllocator@@UEAAXXZ
    virtual void HeapMinimize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSmAllocator@@QEAAJPEAXKKH@Z
    long Init(void *, unsigned long, unsigned long, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSmAllocator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Realloc@CSmAllocator@@UEAAPEAXPEAX_K@Z
    virtual void * Realloc(void *, uint64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSmAllocator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@CSmAllocator@@QEAAXPEAVCSharedMemoryBlock@@PEAEKPEAPEAVCPerContext@@PEAV3@@Z
    void SetState(CSharedMemoryBlock *, unsigned char *, unsigned long, CPerContext * *, CPerContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Sync@CSmAllocator@@QEAAJXZ
    long Sync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninit@CSmAllocator@@QEAAJXZ
    long Uninit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyUnmarshaledPointerWithinBlock@CSmAllocator@@UEBA_N_KK@Z
    virtual bool VerifyUnmarshaledPointerWithinBlock(uint64_t, unsigned long) const;
};
