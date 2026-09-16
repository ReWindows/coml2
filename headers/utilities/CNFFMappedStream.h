#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 28 member(s).
class CNFFMappedStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNFFMappedStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CNFFMappedStream@@UEAAXPEAJ@Z
    virtual void Close(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CNFFMappedStream@@UEAAXPEAJ@Z
    virtual void Flush(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CNFFMappedStream@@UEAAKPEAJ@Z
    virtual unsigned long GetSize(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CNFFMappedStream@@QEAAJPEAX@Z
    long Init(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsModified@CNFFMappedStream@@UEBAEXZ
    virtual unsigned char IsModified() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWriteable@CNFFMappedStream@@UEBAEXZ
    virtual unsigned char IsWriteable() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CNFFMappedStream@@UEAAJE@Z
    virtual long Lock(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CNFFMappedStream@@UEAAXEPEAPEAX@Z
    virtual void Map(unsigned char, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CNFFMappedStream@@UEAAXPEAVCPropertySetStream@@PEAJ@Z
    virtual void Open(CPropertySetStream *, long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNFFMappedStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReOpen@CNFFMappedStream@@UEAAXPEAPEAXPEAJ@Z
    virtual void ReOpen(void * *, long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNFFMappedStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModified@CNFFMappedStream@@UEAAXPEAJ@Z
    virtual void SetModified(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CNFFMappedStream@@UEAAXKEPEAPEAXPEAJ@Z
    virtual void SetSize(unsigned long, unsigned char, void * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutDown@CNFFMappedStream@@QEAAJXZ
    long ShutDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CNFFMappedStream@@UEAAJXZ
    virtual long Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CNFFMappedStream@@UEAAXEPEAPEAX@Z
    virtual void Unmap(unsigned char, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNFFMappedStream@@QEAA@XZ
    ~CNFFMappedStream();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginUsingLatestStream@CNFFMappedStream@@AEAAXXZ
    void BeginUsingLatestStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginUsingUpdateStream@CNFFMappedStream@@AEAAXXZ
    void BeginUsingUpdateStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUpdateStreamIfNecessary@CNFFMappedStream@@AEAAJXZ
    long CreateUpdateStreamIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndUsingLatestStream@CNFFMappedStream@@AEAAXXZ
    void EndUsingLatestStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndUsingUpdateStream@CNFFMappedStream@@AEAAXXZ
    void EndUsingUpdateStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenUpdateStream@CNFFMappedStream@@AEAAJH@Z
    long OpenUpdateStream(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceOriginalWithUpdate@CNFFMappedStream@@AEAAJW4enumCREATE_NEW_UPDATE_STREAM@1@H@Z
    long ReplaceOriginalWithUpdate(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RollForwardIfNecessary@CNFFMappedStream@@AEAAJXZ
    long RollForwardIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteMappedStream@CNFFMappedStream@@AEAAJXZ
    long WriteMappedStream();
};
