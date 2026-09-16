#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 15 member(s).
class CPagedVector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Empty@CPagedVector@@QEAAXXZ
    void Empty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeTable@CPagedVector@@QEAAXK@Z
    void FreeTable(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBits@CPagedVector@@QEAAPEAUCVectBits@@K@Z
    CVectBits * GetBits(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTable@CPagedVector@@QEAAJKKPEAPEAX@Z
    long GetTable(unsigned long, unsigned long, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTableWithSect@CPagedVector@@QEAAJKKKPEAPEAX@Z
    long GetTableWithSect(unsigned long, unsigned long, unsigned long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CPagedVector@@QEAAJPEAVCMStream@@K@Z
    long Init(CMStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCopy@CPagedVector@@QEAAXPEAV1@@Z
    void InitCopy(CPagedVector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTable@CPagedVector@@QEAAXK@Z
    void ReleaseTable(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBits@CPagedVector@@QEAAXXZ
    void ResetBits();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CPagedVector@@QEAAJK@Z
    long Resize(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirty@CPagedVector@@QEAAJK@Z
    long SetDirty(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSect@CPagedVector@@QEAAXKK@Z
    void SetSect(unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPagedVector@@QEAA@XZ
    ~CPagedVector();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewPageArray@CPagedVector@@AEAAPEAV?$BasedPtr@VCMSFPage@@@@K@Z
    WindissectOpaque * GetNewPageArray(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewVectBits@CPagedVector@@AEAAPEAUCVectBits@@K@Z
    CVectBits * GetNewVectBits(unsigned long);
};
