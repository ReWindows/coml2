#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 26 member(s).
class CDeltaList {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDeltaList@@QEAA@PEAVCMStream@@0@Z
    CDeltaList(CMStream *, CMStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Empty@CDeltaList@@QEAAXXZ
    void Empty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCommit@CDeltaList@@QEAAXPEAV1@K@Z
    void EndCommit(CDeltaList *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlFat@CDeltaList@@QEAAPEAVCFat@@XZ
    CFat * GetControlFat();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlILB@CDeltaList@@QEAAPEAUILockBytes@@XZ
    ILockBytes * GetControlILB();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataFat@CDeltaList@@QEAAPEAVCFat@@XZ
    CFat * GetDataFat();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataILB@CDeltaList@@QEAAPEAUILockBytes@@XZ
    ILockBytes * GetDataILB();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataSectorShift@CDeltaList@@QEAAGXZ
    unsigned short GetDataSectorShift();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataSectorSize@CDeltaList@@QEAAGXZ
    unsigned short GetDataSectorSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMap@CDeltaList@@QEAAJKKPEAK@Z
    long GetMap(unsigned long, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDeltaList@@QEAAJ_KPEAVCTransactedStream@@@Z
    long Init(uint64_t, CTransactedStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitResize@CDeltaList@@QEAAJ_K@Z
    long InitResize(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CDeltaList@@QEAAHXZ
    int IsEmpty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInMemory@CDeltaList@@QEAAHXZ
    int IsInMemory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInStream@CDeltaList@@QEAAHXZ
    int IsInStream();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNoScratch@CDeltaList@@QEAAHXZ
    int IsNoScratch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOwned@CDeltaList@@QEAAJKKPEAH@Z
    long IsOwned(unsigned long, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseInvalidSects@CDeltaList@@QEAAJK@Z
    long ReleaseInvalidSects(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DumpList@CDeltaList@@AEAAJXZ
    long DumpList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindOffset@CDeltaList@@AEAAJPEAKKPEAT_ULARGE_INTEGER@@H@Z
    long FindOffset(unsigned long *, unsigned long, _ULARGE_INTEGER *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeStream@CDeltaList@@AEAAXKK@Z
    void FreeStream(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewDeltaArray@CDeltaList@@AEAAPEAV?$BasedPtr@USDeltaBlock@@@@K@Z
    WindissectOpaque * GetNewDeltaArray(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitStreamBlock@CDeltaList@@AEAAJK@Z
    long InitStreamBlock(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadMap@CDeltaList@@AEAAJPEAKK0@Z
    long ReadMap(unsigned long *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBlock@CDeltaList@@AEAAXK@Z
    void ReleaseBlock(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteMap@CDeltaList@@AEAAJPEAKKK@Z
    long WriteMap(unsigned long *, unsigned long, unsigned long);
};
