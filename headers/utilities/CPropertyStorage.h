#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 37 member(s).
class CPropertyStorage {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPropertyStorage@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPropertyStorage@@QEAA@W4MAPPED_STREAM_OPTS@@@Z
    CPropertyStorage(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CPropertyStorage@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPropertyStorage@@QEAAJPEAUIStorage@@AEBU_GUID@@PEBU3@KK@Z
    long Create(IStorage *, _GUID const &, _GUID const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPropertyStorage@@QEAAJPEAUIStream@@AEBU_GUID@@PEBU3@KK@Z
    long Create(IStream *, _GUID const &, _GUID const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteMultiple@CPropertyStorage@@UEAAJKQEBUtagPROPSPEC@@@Z
    virtual long DeleteMultiple(unsigned long, tagPROPSPEC const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeletePropertyNames@CPropertyStorage@@UEAAJKQEBK@Z
    virtual long DeletePropertyNames(unsigned long, unsigned long const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enum@CPropertyStorage@@UEAAJPEAPEAUIEnumSTATPROPSTG@@@Z
    virtual long Enum(IEnumSTATPROPSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CPropertyStorage@@QEAAJPEAUIStream@@AEBU_GUID@@KKH@Z
    long Open(IStream *, _GUID const &, unsigned long, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CPropertyStorage@@QEAAJPEAUIStorage@@AEBU_GUID@@KK@Z
    long Open(IStorage *, _GUID const &, unsigned long, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPropertyStorage@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadMultiple@CPropertyStorage@@UEAAJKQEBUtagPROPSPEC@@QEAUtagPROPVARIANT@@@Z
    virtual long ReadMultiple(unsigned long, tagPROPSPEC const * const, tagPROPVARIANT * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPropertyNames@CPropertyStorage@@UEAAJKQEBKQEAPEAG@Z
    virtual long ReadPropertyNames(unsigned long, unsigned long const * const, unsigned short * * const);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPropertyStorage@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CPropertyStorage@@UEAAJXZ
    virtual long Revert();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClass@CPropertyStorage@@UEAAJAEBU_GUID@@@Z
    virtual long SetClass(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimes@CPropertyStorage@@UEAAJPEBU_FILETIME@@00@Z
    virtual long SetTimes(_FILETIME const *, _FILETIME const *, _FILETIME const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CPropertyStorage@@UEAAJPEAUtagSTATPROPSETSTG@@@Z
    virtual long Stat(tagSTATPROPSETSTG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteMultiple@CPropertyStorage@@UEAAJKQEBUtagPROPSPEC@@QEBUtagPROPVARIANT@@K@Z
    virtual long WriteMultiple(unsigned long, tagPROPSPEC const * const, tagPROPVARIANT const * const, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WritePropertyNames@CPropertyStorage@@UEAAJKQEBKQEBQEAG@Z
    virtual long WritePropertyNames(unsigned long, unsigned long const * const, unsigned short * const * const);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropertyStorage@@QEAA@XZ
    ~CPropertyStorage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMappedStream@CPropertyStorage@@EEAAJXZ
    virtual long CreateMappedStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteMappedStream@CPropertyStorage@@EEAAXXZ
    virtual void DeleteMappedStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOnCreateOrOpen@CPropertyStorage@@AEAAJKKAEBU_GUID@@H@Z
    long InitializeOnCreateOrOpen(unsigned long, unsigned long, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePropertyStream@CPropertyStorage@@AEAAJPEBU_GUID@@0W4EInitializePropertyStream@1@@Z
    long InitializePropertyStream(_GUID const *, _GUID const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReverted@CPropertyStorage@@AEAAHXZ
    int IsReverted();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWriteable@CPropertyStorage@@AEAAHW4EIsWriteable@1@@Z
    int IsWriteable(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CPropertyStorage@@AEAAJXZ
    long Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProbeStreamToDetermineIfWriteable@CPropertyStorage@@AEAAHXZ
    int ProbeStreamToDetermineIfWriteable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CPropertyStorage@@AEAAJXZ
    long Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CPropertyStorage@@AEAAJXZ
    long Validate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRGPROPSPEC@CPropertyStorage@@AEAAJKQEBUtagPROPSPEC@@@Z
    long ValidateRGPROPSPEC(unsigned long, tagPROPSPEC const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRef@CPropertyStorage@@AEAAJXZ
    long ValidateRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVTs@CPropertyStorage@@AEAAJKQEBUtagPROPVARIANT@@@Z
    long ValidateVTs(unsigned long, tagPROPVARIANT const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteMultiple@CPropertyStorage@@AEAAJKQEBUtagPROPSPEC@@QEBUtagPROPVARIANT@@K@Z
    long _WriteMultiple(unsigned long, tagPROPSPEC const * const, tagPROPVARIANT const * const, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WritePropertyNames@CPropertyStorage@@AEAAJKQEBKQEBQEAG@Z
    long _WritePropertyNames(unsigned long, unsigned long const * const, unsigned short * const * const);
};
