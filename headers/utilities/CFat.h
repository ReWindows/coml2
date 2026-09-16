#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 31 member(s).
class CFat {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contig@CFat@@QEAAJPEAUSSegment@@HKKPEAK@Z
    long Contig(SSegment *, int, unsigned long, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountSectType@CFat@@QEAAJPEAKKKK@Z
    long CountSectType(unsigned long *, unsigned long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyAll@CFat@@QEAAJXZ
    long DirtyAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Empty@CFat@@QEAAXXZ
    void Empty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLast@CFat@@QEAAJPEAK@Z
    long FindLast(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMaxSect@CFat@@QEAAJPEAK@Z
    long FindMaxSect(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetESect@CFat@@QEAAJKKPEAK@Z
    long GetESect(unsigned long, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFree@CFat@@QEAAJKPEAKH@Z
    long GetFree(unsigned long, unsigned long *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFreeContig@CFat@@QEAAJKPEAUSSegment@@KPEAK@Z
    long GetFreeContig(unsigned long, SSegment *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLength@CFat@@QEAAJKPEAK@Z
    long GetLength(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@CFat@@QEAAJKPEAK@Z
    long GetNext(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSect@CFat@@QEAAJKKPEAK@Z
    long GetSect(unsigned long, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CFat@@QEAAJPEAVCMStream@@KH@Z
    long Init(CMStream *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitConvert@CFat@@QEAAJPEAVCMStream@@K@Z
    long InitConvert(CMStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCopy@CFat@@QEAAXPEAV1@@Z
    void InitCopy(CFat *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNew@CFat@@QEAAJPEAVCMStream@@@Z
    long InitNew(CMStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitScratch@CFat@@QEAAJPEAV1@H@Z
    long InitScratch(CFat *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryRemapped@CFat@@QEAAJK@Z
    long QueryRemapped(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remap@CFat@@QEAAJKKKPEAK000@Z
    long Remap(unsigned long, unsigned long, unsigned long, unsigned long *, unsigned long *, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveSects@CFat@@QEAAJK@Z
    long ReserveSects(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCopyOnWrite@CFat@@QEAAXXZ
    void ResetCopyOnWrite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CFat@@QEAAJK@Z
    long Resize(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChainLength@CFat@@QEAAJKK@Z
    long SetChainLength(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCopyOnWrite@CFat@@QEAAXPEAV1@K@Z
    void SetCopyOnWrite(CFat *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNext@CFat@@QEAAJKK@Z
    long SetNext(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CFat@@QEAAXPEAVCMStream@@@Z
    void SetParent(CMStream *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountFree@CFat@@AEAAJPEAK@Z
    long CountFree(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extend@CFat@@AEAAJKK@Z
    long Extend(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSectType@CFat@@AEAAJKK@Z
    long IsSectType(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkSect@CFat@@AEAAJPEAUSGetFreeStruct@@@Z
    long MarkSect(SGetFreeStruct *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseGetFreeStruct@CFat@@AEAAXPEAUSGetFreeStruct@@@Z
    void ReleaseGetFreeStruct(SGetFreeStruct *);
};
