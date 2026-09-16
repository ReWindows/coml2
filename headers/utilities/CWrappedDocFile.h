#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 26 member(s).
class CWrappedDocFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCommit@CWrappedDocFile@@QEAAJK@Z
    long BeginCommit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCommitFromChild@CWrappedDocFile@@QEAAJAEAVCUpdateList@@KPEAV1@@Z
    long BeginCommitFromChild(CUpdateList &, unsigned long, CWrappedDocFile *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWrappedDocFile@@QEAA@PEBVCDfName@@KKPEAVCDFBasis@@PEAVCPubDocFile@@@Z
    CWrappedDocFile(CDfName const *, unsigned long, unsigned long, CDFBasis *, CPubDocFile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDocFile@CWrappedDocFile@@QEAAJPEBVCDfName@@KKPEAPEAVPDocFile@@@Z
    long CreateDocFile(CDfName const *, unsigned long, unsigned long, PDocFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CWrappedDocFile@@QEAAJPEBVCDfName@@KKPEAPEAVPSStream@@@Z
    long CreateStream(CDfName const *, unsigned long, unsigned long, PSStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyEntry@CWrappedDocFile@@QEAAJPEBVCDfName@@H@Z
    long DestroyEntry(CDfName const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyCache@CWrappedDocFile@@QEAAXXZ
    void EmptyCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCommit@CWrappedDocFile@@QEAAXK@Z
    void EndCommit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCommitFromChild@CWrappedDocFile@@QEAAXKPEAV1@@Z
    void EndCommitFromChild(unsigned long, CWrappedDocFile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindGreaterEntry@CWrappedDocFile@@QEAAJPEBVCDfName@@PEAUSIterBuffer@@PEAUtagSTATSTG@@@Z
    long FindGreaterEntry(CDfName const *, SIterBuffer *, tagSTATSTG *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocFile@CWrappedDocFile@@QEAAJPEBVCDfName@@KPEAPEAVPDocFile@@@Z
    long GetDocFile(CDfName const *, unsigned long, PDocFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReservedStream@CWrappedDocFile@@QEAAPEAVCTransactedStream@@PEBVCDfName@@KK@Z
    CTransactedStream * GetReservedStream(CDfName const *, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CWrappedDocFile@@QEAAJPEBVCDfName@@KPEAPEAVPSStream@@@Z
    long GetStream(CDfName const *, unsigned long, PSStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CWrappedDocFile@@QEAAJPEAVPDocFile@@@Z
    long Init(PDocFile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEntry@CWrappedDocFile@@QEAAJPEBVCDfName@@PEAUSEntryBuffer@@@Z
    long IsEntry(CDfName const *, SEntryBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameEntry@CWrappedDocFile@@QEAAJPEBVCDfName@@0@Z
    long RenameEntry(CDfName const *, CDfName const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnDocFile@CWrappedDocFile@@QEAAXPEAV1@@Z
    void ReturnDocFile(CWrappedDocFile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnStream@CWrappedDocFile@@QEAAXPEAVCTransactedStream@@@Z
    void ReturnStream(CTransactedStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnToReserve@CWrappedDocFile@@QEAAXQEAVCDFBasis@@@Z
    void ReturnToReserve(CDFBasis * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CWrappedDocFile@@QEAAXXZ
    void Revert();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBase@CWrappedDocFile@@QEAAJPEAVPDocFile@@@Z
    long SetBase(PDocFile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StatEntry@CWrappedDocFile@@QEAAJPEBVCDfName@@PEAUSIterBuffer@@PEAUtagSTATSTG@@@Z
    long StatEntry(CDfName const *, SIterBuffer *, tagSTATSTG *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWrappedDocFile@@QEAA@XZ
    ~CWrappedDocFile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevertUpdate@CWrappedDocFile@@AEAAXPEAVCUpdate@@@Z
    void RevertUpdate(CUpdate *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialState@CWrappedDocFile@@AEAAJPEAVPDocFile@@@Z
    long SetInitialState(PDocFile *);
};
