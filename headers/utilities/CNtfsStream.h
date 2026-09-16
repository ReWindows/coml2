#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 38 member(s).
class CNtfsStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNtfsStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNtfsStream@@QEAA@PEAVCNtfsStorage@@PEAUIBlockingLock@@@Z
    CNtfsStream(CNtfsStorage *, IBlockingLock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CNtfsStream@@UEAAJPEAPEAUIStream@@@Z
    virtual long Clone(IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CNtfsStream@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CNtfsStream@@UEAAJPEAUIStream@@T_ULARGE_INTEGER@@PEAT3@2@Z
    virtual long CopyTo(IStream *, _ULARGE_INTEGER, _ULARGE_INTEGER *, _ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CNtfsStream@@UEAAJXZ
    virtual long Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CNtfsStream@@UEAAJPEAXKPEBGPEAV1@@Z
    virtual long Init(void *, unsigned long, unsigned short const *, CNtfsStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockRegion@CNtfsStream@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long LockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNtfsStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CNtfsStream@@UEAAJPEAXKPEAK@Z
    virtual long Read(void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAt@CNtfsStream@@UEAAJT_ULARGE_INTEGER@@PEAXKPEAK@Z
    virtual long ReadAt(_ULARGE_INTEGER, void *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNtfsStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CNtfsStream@@UEAAJXZ
    virtual long Revert();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CNtfsStream@@UEAAJT_LARGE_INTEGER@@KPEAT_ULARGE_INTEGER@@@Z
    virtual long Seek(_LARGE_INTEGER, unsigned long, _ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CNtfsStream@@UEAAJT_ULARGE_INTEGER@@@Z
    virtual long SetSize(_ULARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CNtfsStream@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockRegion@CNtfsStream@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long UnlockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CNtfsStream@@UEAAJPEBXKPEAK@Z
    virtual long Write(void const *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAt@CNtfsStream@@UEAAJT_ULARGE_INTEGER@@PEBXKPEAK@Z
    virtual long WriteAt(_ULARGE_INTEGER, void const *, unsigned long, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNtfsStream@@UEAA@XZ
    virtual ~CNtfsStream();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CNtfsStream@@IEAAJXZ
    long Delete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSelfFromList@CNtfsStream@@IEAAXXZ
    void RemoveSelfFromList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutDown@CNtfsStream@@MEAAJXZ
    virtual long ShutDown();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteStream@CNtfsStream@@CAJPEAPEAX@Z
    static long DeleteStream(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rename@CNtfsStream@@AEAAJPEBGH@Z
    long Rename(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileHandleTime@CNtfsStream@@CAJPEAXPEBU_FILETIME@@11@Z
    static long SetFileHandleTime(void *, _FILETIME const *, _FILETIME const *, _FILETIME const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileSize@CNtfsStream@@AEAAJAEBV?$TXLargeIntegerWrapper@T_ULARGE_INTEGER@@K_K@@@Z
    long SetFileSize(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncReadAtFile@CNtfsStream@@AEAAJT_ULARGE_INTEGER@@PEAXKPEAK@Z
    long SyncReadAtFile(_ULARGE_INTEGER, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncWriteAtFile@CNtfsStream@@AEAAJT_ULARGE_INTEGER@@PEBXKPEAK@Z
    long SyncWriteAtFile(_ULARGE_INTEGER, void const *, unsigned long, unsigned long *);
};
