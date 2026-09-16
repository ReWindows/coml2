#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 19 member(s).
class CPropertyBagEx {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPropertyBagEx@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CPropertyBagEx@@QEAAJK@Z
    long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteMultiple@CPropertyBagEx@@UEAAJKQEBQEBGK@Z
    virtual long DeleteMultiple(unsigned long, unsigned short const * const * const, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enum@CPropertyBagEx@@UEAAJPEBGKPEAPEAUIEnumSTATPROPBAG@@@Z
    virtual long Enum(unsigned short const *, unsigned long, IEnumSTATPROPBAG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CPropertyBagEx@@UEAAJPEAUIUnknown@@PEBGU_GUID@@KAEBU3@PEAPEAU2@@Z
    virtual long Open(IUnknown *, unsigned short const *, _GUID, unsigned long, _GUID const &, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPropertyBagEx@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CPropertyBagEx@@UEAAJPEBGPEAUtagVARIANT@@PEAUIErrorLog@@@Z
    virtual long Read(unsigned short const *, tagVARIANT *, IErrorLog *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadMultiple@CPropertyBagEx@@UEAAJKQEBQEBGQEAUtagPROPVARIANT@@PEAUIErrorLog@@@Z
    virtual long ReadMultiple(unsigned long, unsigned short const * const * const, tagPROPVARIANT * const, IErrorLog *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPropertyBagEx@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutDown@CPropertyBagEx@@QEAAJXZ
    long ShutDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CPropertyBagEx@@UEAAJPEBGPEAUtagVARIANT@@@Z
    virtual long Write(unsigned short const *, tagVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteMultiple@CPropertyBagEx@@UEAAJKQEBQEBGQEBUtagPROPVARIANT@@@Z
    virtual long WriteMultiple(unsigned long, unsigned short const * const * const, tagPROPVARIANT const * const);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLCID@CPropertyBagEx@@AEAAJXZ
    long GetLCID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadObject@CPropertyBagEx@@AEBAJPEAUtagPROPVARIANT@@0@Z
    long LoadObject(tagPROPVARIANT *, tagPROPVARIANT *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenPropStg@CPropertyBagEx@@AEAAJK@Z
    long OpenPropStg(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteOneObject@CPropertyBagEx@@AEAAJPEBUtagPROPSPEC@@PEBUtagPROPVARIANT@@@Z
    long WriteOneObject(tagPROPSPEC const *, tagPROPVARIANT const *);
};
