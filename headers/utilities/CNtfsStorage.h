#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 46 member(s).
class CNtfsStorage {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNtfsStorage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNtfsStorage@@QEAA@K@Z
    CNtfsStorage(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CNtfsStorage@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CNtfsStorage@@UEAAJKPEBU_GUID@@PEAPEAGPEAUIStorage@@@Z
    virtual long CopyTo(unsigned long, _GUID const *, unsigned short * *, IStorage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStorage@CNtfsStorage@@UEAAJPEBGKKKPEAPEAUIStorage@@@Z
    virtual long CreateStorage(unsigned short const *, unsigned long, unsigned long, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CNtfsStorage@@UEAAJPEBGKKKPEAPEAUIStream@@@Z
    virtual long CreateStream(unsigned short const *, unsigned long, unsigned long, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyElement@CNtfsStorage@@UEAAJPEBG@Z
    virtual long DestroyElement(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyStreamElement@CNtfsStorage@@QEAAJPEBG@Z
    long DestroyStreamElement(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumElements@CNtfsStorage@@UEAAJKPEAXKPEAPEAUIEnumSTATSTG@@@Z
    virtual long EnumElements(unsigned long, void *, unsigned long, IEnumSTATSTG * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamHandle@CNtfsStorage@@QEAAJPEAPEAXPEBGKH@Z
    long GetStreamHandle(void * *, unsigned short const *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitCNtfsStream@CNtfsStorage@@QEAAJPEAVCNtfsStream@@PEAXKPEBG@Z
    long InitCNtfsStream(CNtfsStream *, void *, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromMainStreamHandle@CNtfsStorage@@QEAAJPEAPEAXPEBGHKK@Z
    long InitFromMainStreamHandle(void * *, unsigned short const *, int, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromName@CNtfsStorage@@QEAAJPEBGPEAXHK@Z
    long InitFromName(unsigned short const *, void *, int, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNffAppropriate@CNtfsStorage@@SAJPEBG@Z
    static long IsNffAppropriate(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CNtfsStorage@@UEAAJK@Z
    virtual long Lock(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveElementTo@CNtfsStorage@@UEAAJPEBGPEAUIStorage@@0K@Z
    virtual long MoveElementTo(unsigned short const *, IStorage *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NewCNtfsStream@CNtfsStorage@@QEAAJPEBGKHPEAPEAVCNtfsStream@@@Z
    long NewCNtfsStream(unsigned short const *, unsigned long, int, CNtfsStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStorage@CNtfsStorage@@UEAAJPEBGPEAUIStorage@@KPEAPEAGKPEAPEAU2@@Z
    virtual long OpenStorage(unsigned short const *, IStorage *, unsigned long, unsigned short * *, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStream@CNtfsStorage@@UEAAJPEBGPEAXKKPEAPEAUIStream@@@Z
    virtual long OpenStream(unsigned short const *, void *, unsigned long, unsigned long, IStream * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNtfsStorage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNtfsStorage@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameElement@CNtfsStorage@@UEAAJPEBG0@Z
    virtual long RenameElement(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CNtfsStorage@@UEAAJXZ
    virtual long Revert();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClass@CNtfsStorage@@UEAAJAEBU_GUID@@@Z
    virtual long SetClass(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementTimes@CNtfsStorage@@UEAAJPEBGPEBU_FILETIME@@11@Z
    virtual long SetElementTimes(unsigned short const *, _FILETIME const *, _FILETIME const *, _FILETIME const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateBits@CNtfsStorage@@UEAAJKK@Z
    virtual long SetStateBits(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CNtfsStorage@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CNtfsStorage@@UEAAJXZ
    virtual long Unlock();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNtfsStorage@@QEAA@XZ
    ~CNtfsStorage();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNffAppropriate@CNtfsStorage@@KAJPEAXPEBG@Z
    static long IsNffAppropriate(void *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenControlStream@CNtfsStorage@@IEAAJH@Z
    long OpenControlStream(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StreamExists@CNtfsStorage@@IEAAJPEBG@Z
    long StreamExists(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteControlStream@CNtfsStorage@@IEAAJXZ
    long WriteControlStream();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAlreadyOpenStream@CNtfsStorage@@AEAAHPEBGPEAPEAVCNtfsStream@@@Z
    int FindAlreadyOpenStream(unsigned short const *, CNtfsStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilePath@CNtfsStorage@@AEAAJPEAPEAG@Z
    long GetFilePath(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlStreamExtant@CNtfsStorage@@CAHPEAU_FILE_STREAM_INFORMATION@@@Z
    static int IsControlStreamExtant(_FILE_STREAM_INFORMATION *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfflineFile@CNtfsStorage@@CAJPEAX@Z
    static long IsOfflineFile(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenNtFileHandle@CNtfsStorage@@CAJAEBU_UNICODE_STRING@@PEAX1KKHPEAPEAX@Z
    static long OpenNtFileHandle(_UNICODE_STRING const &, void *, void *, unsigned long, unsigned long, int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenNtStream@CNtfsStorage@@AEAAJAEBVCNtfsStreamName@@KKHPEAPEAX@Z
    long OpenNtStream(CNtfsStreamName const &, unsigned long, unsigned long, int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutDownStorage@CNtfsStorage@@AEAAJXZ
    long ShutDownStorage();
};
