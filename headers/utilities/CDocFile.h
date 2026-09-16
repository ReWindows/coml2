#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 16 member(s).
class CDocFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyChanges@CDocFile@@QEAAJAEAVCUpdateList@@@Z
    long ApplyChanges(CUpdateList &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCommitFromChild@CDocFile@@QEAAJAEAVCUpdateList@@KPEAVCWrappedDocFile@@@Z
    long BeginCommitFromChild(CUpdateList &, unsigned long, CWrappedDocFile *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDocFile@@QEAA@PEAVCMStream@@KKPEAVCDFBasis@@@Z
    CDocFile(CMStream *, unsigned long, unsigned long, CDFBasis *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDocFile@@QEAA@KPEAVCDFBasis@@@Z
    CDocFile(unsigned long, CDFBasis *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CDocFile@@QEAAJPEAV1@KPEAPEAG@Z
    long CopyTo(CDocFile *, unsigned long, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDocFile@CDocFile@@QEAAJPEBVCDfName@@KKPEAPEAVPDocFile@@@Z
    long CreateDocFile(CDfName const *, unsigned long, unsigned long, PDocFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CDocFile@@QEAAJPEBVCDfName@@KKPEAPEAVPSStream@@@Z
    long CreateStream(CDfName const *, unsigned long, unsigned long, PSStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCommitFromChild@CDocFile@@QEAAXKPEAVCWrappedDocFile@@@Z
    void EndCommitFromChild(unsigned long, CWrappedDocFile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindGreaterEntry@CDocFile@@QEAAJPEBVCDfName@@PEAUSIterBuffer@@PEAUtagSTATSTG@@@Z
    long FindGreaterEntry(CDfName const *, SIterBuffer *, tagSTATSTG *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocFile@CDocFile@@QEAAJPEBVCDfName@@KPEAPEAVPDocFile@@@Z
    long GetDocFile(CDfName const *, unsigned long, PDocFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReservedDocfile@CDocFile@@QEAAPEAV1@K@Z
    CDocFile * GetReservedDocfile(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CDocFile@@QEAAJPEBVCDfName@@KPEAPEAVPSStream@@@Z
    long GetStream(CDfName const *, unsigned long, PSStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnToReserve@CDocFile@@QEAAXQEAVCDFBasis@@@Z
    void ReturnToReserve(CDFBasis * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StatEntry@CDocFile@@QEAAJPEBVCDfName@@PEAUSIterBuffer@@PEAUtagSTATSTG@@@Z
    long StatEntry(CDfName const *, SIterBuffer *, tagSTATSTG *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDocFile@@QEAA@XZ
    ~CDocFile();
};
