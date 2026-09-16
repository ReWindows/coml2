#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 11 member(s).
class CPerContext {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPerContext@@QEAA@PEAUIMalloc@@@Z
    CPerContext(IMalloc *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CPerContext@@QEAAXXZ
    void Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThreadAllocatorState@CPerContext@@QEAAJXZ
    long GetThreadAllocatorState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNewContext@CPerContext@@QEAAJH@Z
    long InitNewContext(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNotificationEvent@CPerContext@@QEAAJPEAUILockBytes@@@Z
    long InitNotificationEvent(ILockBytes *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPerContext@@QEAAJXZ
    long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetILBInfo@CPerContext@@QEAAXPEAUILockBytes@@PEAUCFileStream@@0K@Z
    void SetILBInfo(ILockBytes *, CFileStream *, ILockBytes *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThreadAllocatorState@CPerContext@@QEAAPEAVCSmAllocator@@PEAPEAV1@@Z
    CSmAllocator * SetThreadAllocatorState(CPerContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeSem@CPerContext@@QEAAJK@Z
    long TakeSem(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPerContext@@QEAA@XZ
    ~CPerContext();
};
