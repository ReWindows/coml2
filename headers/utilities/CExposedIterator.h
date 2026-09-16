#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 13 member(s).
class CExposedIterator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExposedIterator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExposedIterator@@QEAA@PEAVCPubDocFile@@PEAVCDfName@@PEAVCDFBasis@@PEAVCPerContext@@@Z
    CExposedIterator(CPubDocFile *, CDfName *, CDFBasis *, CPerContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CExposedIterator@@UEAAJPEAPEAUIEnumSTATSTG@@@Z
    virtual long Clone(IEnumSTATSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CExposedIterator@@UEAAJKPEAUtagSTATSTG@@PEAK@Z
    virtual long Next(unsigned long, tagSTATSTG *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExposedIterator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExposedIterator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CExposedIterator@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Skip@CExposedIterator@@UEAAJK@Z
    virtual long Skip(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CExposedIterator@@QEBAJXZ
    long Validate() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExposedIterator@@QEAA@XZ
    ~CExposedIterator();
};
