#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 11 member(s).
class CMSFPageTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPage@CMSFPageTable@@QEAAJPEAVCPagedVector@@PEAVCMSFPage@@PEAV?$BasedPtr@VCMSFPage@@@@@Z
    long CopyPage(CPagedVector *, CMSFPage *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPage@CMSFPageTable@@QEAAJPEAVCPagedVector@@KKPEAPEAVCMSFPage@@@Z
    long FindPage(CPagedVector *, unsigned long, unsigned long, CMSFPage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMSFPageTable@@QEAAJXZ
    long Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushPage@CMSFPageTable@@QEAAJPEAVCMSFPage@@@Z
    long FlushPage(CMSFPage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreePages@CMSFPageTable@@QEAAXPEAVCPagedVector@@@Z
    void FreePages(CPagedVector *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFreePage@CMSFPageTable@@QEAAJPEAPEAVCMSFPage@@@Z
    long GetFreePage(CMSFPage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CMSFPageTable@@QEAAJXZ
    long Init();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSect@CMSFPageTable@@QEAAXPEAVCMSFPage@@K@Z
    void SetSect(CMSFPage *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMSFPageTable@@QEAA@XZ
    ~CMSFPageTable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSwapPage@CMSFPageTable@@AEAAPEAVCMSFPage@@XZ
    CMSFPage * FindSwapPage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNewPage@CMSFPageTable@@AEAAPEAVCMSFPage@@XZ
    CMSFPage * GetNewPage();
};
