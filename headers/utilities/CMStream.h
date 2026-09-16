#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 34 member(s).
class CMStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCopyOnWrite@CMStream@@QEAAJK@Z
    long BeginCopyOnWrite(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildConsolidationControlSectList@CMStream@@QEAAJPEAPEAKPEAK@Z
    long BuildConsolidationControlSectList(unsigned long * *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMStream@@QEAA@PEAUIMalloc@@PEAPEAUILockBytes@@HKG@Z
    CMStream(IMalloc *, ILockBytes * *, int, unsigned long, unsigned short);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMStream@@QEAA@PEBV0@@Z
    CMStream(CMStream const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Consolidate@CMStream@@QEAAJXZ
    long Consolidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConsolidateStream@CMStream@@QEAAJPEAVCDirEntry@@KK@Z
    long ConsolidateStream(CDirEntry *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Empty@CMStream@@QEAAXXZ
    void Empty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCopyOnWrite@CMStream@@QEAAJKK@Z
    long EndCopyOnWrite(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMStream@@QEAAJH@Z
    long Flush(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushHeader@CMStream@@QEAAJG@Z
    long FlushHeader(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllTimes@CMStream@@QEAAJKPEAU_FILETIME@@00@Z
    long GetAllTimes(unsigned long, _FILETIME *, _FILETIME *, _FILETIME *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetESect@CMStream@@QEAAJKKPEAK@Z
    long GetESect(unsigned long, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetILB@CMStream@@QEBAPEAUILockBytes@@XZ
    ILockBytes * GetILB() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMiniStream@CMStream@@QEBAPEAVCDirectStream@@XZ
    CDirectStream * GetMiniStream() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStart@CMStream@@QEBAKK@Z
    unsigned long GetStart(unsigned long) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTime@CMStream@@QEAAJKW4WHICHTIME@@PEAU_FILETIME@@@Z
    long GetTime(unsigned long, int, _FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CMStream@@QEAAJHHT_ULARGE_INTEGER@@@Z
    long Init(int, int, _ULARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitConvert@CMStream@@QEAAJH@Z
    long InitConvert(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCopy@CMStream@@QEAAXPEAV1@@Z
    void InitCopy(CMStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitNew@CMStream@@QEAAJHT_ULARGE_INTEGER@@@Z
    long InitNew(int, _ULARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitScratch@CMStream@@QEAAJPEAV1@H@Z
    long InitScratch(CMStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MWrite@CMStream@@QEAAJKH_KPEBXKPEAVCStreamCache@@PEAK@Z
    long MWrite(unsigned long, int, uint64_t, void const *, unsigned long, CStreamCache *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveSect@CMStream@@QEAAJKKK@Z
    long MoveSect(unsigned long, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllFileLockBytesTimes@CMStream@@QEAAJU_FILETIME@@00@Z
    long SetAllFileLockBytesTimes(_FILETIME, _FILETIME, _FILETIME);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllTimes@CMStream@@QEAAJKU_FILETIME@@00@Z
    long SetAllTimes(unsigned long, _FILETIME, _FILETIME, _FILETIME);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileLockBytesTime@CMStream@@QEAAJW4WHICHTIME@@U_FILETIME@@@Z
    long SetFileLockBytesTime(int, _FILETIME);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMiniSize@CMStream@@QEAAJXZ
    long SetMiniSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CMStream@@QEAAJXZ
    long SetSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTime@CMStream@@QEAAJKW4WHICHTIME@@U_FILETIME@@@Z
    long SetTime(unsigned long, int, _FILETIME);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMStream@@QEAA@XZ
    ~CMStream();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertILB@CMStream@@AEAAJKT_ULARGE_INTEGER@@@Z
    long ConvertILB(unsigned long, _ULARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySect@CMStream@@AEAAJKKFFPEBEPEAK@Z
    long CopySect(unsigned long, unsigned long, short, short, unsigned char const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCommon@CMStream@@AEAAJXZ
    long InitCommon();
};
