#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 17 member(s).
class CTransactedStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCommit@CTransactedStream@@QEAAJK@Z
    long BeginCommit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCommitFromChild@CTransactedStream@@QEAAJ_KPEAVCDeltaList@@PEAV1@@Z
    long BeginCommitFromChild(uint64_t, CDeltaList *, CTransactedStream *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransactedStream@@QEAA@PEBVCDfName@@KKPEAVCMStream@@1@Z
    CTransactedStream(CDfName const *, unsigned long, unsigned long, CMStream *, CMStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyCache@CTransactedStream@@QEAAXXZ
    void EmptyCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCommit@CTransactedStream@@QEAAXK@Z
    void EndCommit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCommitFromChild@CTransactedStream@@QEAAXKPEAV1@@Z
    void EndCommitFromChild(unsigned long, CTransactedStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommitInfo@CTransactedStream@@QEAAXPEA_K0@Z
    void GetCommitInfo(uint64_t *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTransactedStream@@QEAAJPEAVPSStream@@@Z
    long Init(PSStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAt@CTransactedStream@@QEAAJ_KPEAXKPEAK@Z
    long ReadAt(uint64_t, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnToReserve@CTransactedStream@@QEAAXQEAVCDFBasis@@@Z
    void ReturnToReserve(CDFBasis * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBase@CTransactedStream@@QEAAJPEAVPSStream@@@Z
    long SetBase(PSStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CTransactedStream@@QEAAJ_K@Z
    long SetSize(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAt@CTransactedStream@@QEAAJ_KPEBXKPEAK@Z
    long WriteAt(uint64_t, void const *, unsigned long, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransactedStream@@QEAA@XZ
    ~CTransactedStream();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartialWrite@CTransactedStream@@AEAAJKKPEBEGG@Z
    long PartialWrite(unsigned long, unsigned long, unsigned char const *, unsigned short, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialState@CTransactedStream@@AEAAJPEAVPSStream@@@Z
    long SetInitialState(PSStream *);
};
