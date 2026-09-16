#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 13 member(s).
class CPropertySetStorage {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPropertySetStorage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPropertySetStorage@@QEAA@W4MAPPED_STREAM_OPTS@@@Z
    CPropertySetStorage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPropertySetStorage@@UEAAJAEBU_GUID@@PEBU2@KKPEAPEAUIPropertyStorage@@@Z
    virtual long Create(_GUID const &, _GUID const *, unsigned long, unsigned long, IPropertyStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CPropertySetStorage@@UEAAJAEBU_GUID@@@Z
    virtual long Delete(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enum@CPropertySetStorage@@UEAAJPEAPEAUIEnumSTATPROPSETSTG@@@Z
    virtual long Enum(IEnumSTATPROPSETSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CPropertySetStorage@@QEAAXPEAUIStorage@@PEAUIBlockingLock@@H@Z
    void Init(IStorage *, IBlockingLock *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CPropertySetStorage@@UEAAJAEBU_GUID@@KPEAPEAUIPropertyStorage@@@Z
    virtual long Open(_GUID const &, unsigned long, IPropertyStorage * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPropertySetStorage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPropertySetStorage@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropertySetStorage@@QEAA@XZ
    ~CPropertySetStorage();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUserDefinedStream@CPropertySetStorage@@IEAAJPEAUIStorage@@AEAVCPropSetName@@KPEAHPEAPEAUIStream@@@Z
    long CreateUserDefinedStream(IStorage *, CPropSetName &, unsigned long, int *, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CPropertySetStorage@@IEAAXXZ
    void Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CPropertySetStorage@@IEAAXXZ
    void Unlock();
};
