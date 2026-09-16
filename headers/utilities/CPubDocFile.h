#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 25 member(s).
class CPubDocFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddXSMember@CPubDocFile@@QEAAXPEAVPTSetMember@@0K@Z
    void AddXSMember(PTSetMember *, PTSetMember *, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPubDocFile@@QEAA@PEAV0@PEAVPDocFile@@KKPEAVCDFBasis@@PEBVCDfName@@GPEAVCMStream@@@Z
    CPubDocFile(CPubDocFile *, PDocFile *, unsigned long, unsigned long, CDFBasis *, CDfName const *, unsigned short, CMStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CPubDocFile@@QEAAJK@Z
    long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDocFile@CPubDocFile@@QEAAJPEBVCDfName@@KPEAPEAV1@@Z
    long CreateDocFile(CDfName const *, unsigned long, CPubDocFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CPubDocFile@@QEAAJPEBVCDfName@@KPEAPEAVCPubStream@@@Z
    long CreateStream(CDfName const *, unsigned long, CPubStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyEntry@CPubDocFile@@QEAAJPEBVCDfName@@H@Z
    long DestroyEntry(CDfName const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyCache@CPubDocFile@@QEAAXXZ
    void EmptyCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushBufferedData@CPubDocFile@@QEAAJH@Z
    long FlushBufferedData(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocFile@CPubDocFile@@QEAAJPEBVCDfName@@KPEAPEAV1@@Z
    long GetDocFile(CDfName const *, unsigned long, CPubDocFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CPubDocFile@@QEAAJPEBVCDfName@@KPEAPEAVCPubStream@@@Z
    long GetStream(CDfName const *, unsigned long, CPubStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRoot@CPubDocFile@@QEBAHXZ
    int IsRoot() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveUnnecessaryXSMembers@CPubDocFile@@QEAAXXZ
    void RemoveUnnecessaryXSMembers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameEntry@CPubDocFile@@QEAAJPEBVCDfName@@0@Z
    long RenameEntry(CDfName const *, CDfName const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirty@CPubDocFile@@QEAAXXZ
    void SetDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementTimes@CPubDocFile@@QEAAJPEBVCDfName@@PEBU_FILETIME@@11@Z
    long SetElementTimes(CDfName const *, _FILETIME const *, _FILETIME const *, _FILETIME const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateBits@CPubDocFile@@QEAAJKK@Z
    long SetStateBits(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CPubDocFile@@QEAAJPEAUtagSTATSTG@@K@Z
    long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?vRelease@CPubDocFile@@QEAAJXZ
    long vRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?vdtor@CPubDocFile@@QEAAXXZ
    void vdtor();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeXs@CPubDocFile@@IEAAXKK@Z
    void ChangeXs(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Consolidate@CPubDocFile@@IEAAJK@Z
    long Consolidate(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyLStreamToLStream@CPubDocFile@@IEAAJPEAUILockBytes@@0@Z
    long CopyLStreamToLStream(ILockBytes *, ILockBytes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommitSize@CPubDocFile@@IEAAJPEA_K@Z
    long GetCommitSize(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSingleWriter@CPubDocFile@@IEAAJXZ
    long IsSingleWriter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForOverwrite@CPubDocFile@@IEAAJXZ
    long PrepareForOverwrite();
};
