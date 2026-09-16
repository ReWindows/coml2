#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 24 member(s).
class CDirectory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEntry@CDirectory@@QEAAJKPEBVCDfName@@KPEAK@Z
    long CreateEntry(unsigned long, CDfName const *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyAllChildren@CDirectory@@QEAAJKK@Z
    long DestroyAllChildren(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyChild@CDirectory@@QEAAJKPEBVCDfName@@K@Z
    long DestroyChild(unsigned long, CDfName const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindGreaterEntry@CDirectory@@QEAAJKPEBVCDfName@@PEAK@Z
    long FindGreaterEntry(unsigned long, CDfName const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllTimes@CDirectory@@QEAAJKPEAU_FILETIME@@00@Z
    long GetAllTimes(unsigned long, _FILETIME *, _FILETIME *, _FILETIME *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirEntry@CDirectory@@QEAAJKKPEAPEAVCDirEntry@@@Z
    long GetDirEntry(unsigned long, unsigned long, CDirEntry * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CDirectory@@QEAAJKPEA_K@Z
    long GetSize(unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStart@CDirectory@@QEAAJKPEAK@Z
    long GetStart(unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDirectory@@QEAAJPEAVCMStream@@K@Z
    long Init(CMStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCopy@CDirectory@@QEAAXPEAV1@@Z
    void InitCopy(CDirectory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNew@CDirectory@@QEAAJPEAVCMStream@@@Z
    long InitNew(CMStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NameCompare@CDirectory@@SAHPEBVCDfName@@0@Z
    static int NameCompare(CDfName const *, CDfName const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameEntry@CDirectory@@QEAAJKPEBVCDfName@@0@Z
    long RenameEntry(unsigned long, CDfName const *, CDfName const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CDirectory@@QEAAXPEAVCMStream@@@Z
    void SetParent(CMStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CDirectory@@QEAAJK_K@Z
    long SetSize(unsigned long, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStart@CDirectory@@QEAAJKK@Z
    long SetStart(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StatEntry@CDirectory@@QEAAJKPEAUSIterBuffer@@PEAUtagSTATSTG@@@Z
    long StatEntry(unsigned long, SIterBuffer *, tagSTATSTG *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindEntry@CDirectory@@AEAAJKPEBVCDfName@@W4DIRENTRYOP@@PEAUSEntryBuffer@@@Z
    long FindEntry(unsigned long, CDfName const *, int, SEntryBuffer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFree@CDirectory@@AEAAJPEAK@Z
    long GetFree(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertEntry@CDirectory@@AEAAJKKPEBVCDfName@@@Z
    long InsertEntry(unsigned long, unsigned long, CDfName const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CDirectory@@AEAAJK@Z
    long Resize(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RotateEntry@CDirectory@@AEAAJPEBVCDfName@@KKPEAK@Z
    long RotateEntry(CDfName const *, unsigned long, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorBlack@CDirectory@@AEAAJK@Z
    long SetColorBlack(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SplitEntry@CDirectory@@AEAAJPEBVCDfName@@KKKKKPEAK@Z
    long SplitEntry(CDfName const *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long *);
};
