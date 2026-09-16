#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 7 member(s).
class CRootPubDocFile {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRootPubDocFile@@QEAA@QEAUIMalloc@@@Z
    CRootPubDocFile(IMalloc * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitRoot@CRootPubDocFile@@QEAAJPEAUILockBytes@@KKPEAPEAGPEAPEAVCDFBasis@@PEAKPEAVCGlobalContext@@@Z
    long InitRoot(ILockBytes *, unsigned long, unsigned long, unsigned short * *, CDFBasis * *, unsigned long *, CGlobalContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CRootPubDocFile@@QEAAJPEAUtagSTATSTG@@K@Z
    long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToFile@CRootPubDocFile@@QEAAJPEBGPEAUILockBytes@@PEAK@Z
    long SwitchToFile(unsigned short const *, ILockBytes *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?vdtor@CRootPubDocFile@@QEAAXXZ
    void vdtor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInd@CRootPubDocFile@@AEAAJPEAUILockBytes@@PEAPEAGKKH@Z
    long InitInd(ILockBytes *, unsigned short * *, unsigned long, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNotInd@CRootPubDocFile@@AEAAJPEAUILockBytes@@PEAPEAGKK@Z
    long InitNotInd(ILockBytes *, unsigned short * *, unsigned long, unsigned long);
};
