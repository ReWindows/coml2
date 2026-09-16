#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 8 member(s).
class CDirectStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCommitFromChild@CDirectStream@@QEAAJ_KPEAVCDeltaList@@PEAVCTransactedStream@@@Z
    long BeginCommitFromChild(uint64_t, CDeltaList *, CTransactedStream *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDirectStream@@QEAA@K@Z
    CDirectStream(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDirectStream@@QEAAJPEAVCStgHandle@@PEBVCDfName@@H@Z
    long Init(CStgHandle *, CDfName const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitSystem@CDirectStream@@QEAAXPEAVCMStream@@K_K@Z
    void InitSystem(CMStream *, unsigned long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAt@CDirectStream@@QEAAJ_KPEAXKPEAK@Z
    long ReadAt(uint64_t, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CDirectStream@@QEAAJ_K@Z
    long SetSize(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAt@CDirectStream@@QEAAJ_KPEBXKPEAK@Z
    long WriteAt(uint64_t, void const *, unsigned long, unsigned long *);
};
