#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 19 member(s).
class CSSMappedStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSSMappedStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSSMappedStream@@QEAA@PEAUIStream@@@Z
    CSSMappedStream(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CSSMappedStream@@UEAAXPEAJ@Z
    virtual void Close(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CSSMappedStream@@UEAAXPEAJ@Z
    virtual void Flush(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CSSMappedStream@@UEAAKPEAJ@Z
    virtual unsigned long GetSize(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsModified@CSSMappedStream@@UEBAEXZ
    virtual unsigned char IsModified() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWriteable@CSSMappedStream@@UEBAEXZ
    virtual unsigned char IsWriteable() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CSSMappedStream@@UEAAJE@Z
    virtual long Lock(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CSSMappedStream@@UEAAXEPEAPEAX@Z
    virtual void Map(unsigned char, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CSSMappedStream@@UEAAXPEAVCPropertySetStream@@PEAJ@Z
    virtual void Open(CPropertySetStream *, long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSSMappedStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReOpen@CSSMappedStream@@UEAAXPEAPEAXPEAJ@Z
    virtual void ReOpen(void * *, long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSSMappedStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModified@CSSMappedStream@@UEAAXPEAJ@Z
    virtual void SetModified(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CSSMappedStream@@UEAAXKEPEAPEAXPEAJ@Z
    virtual void SetSize(unsigned long, unsigned char, void * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CSSMappedStream@@UEAAJXZ
    virtual long Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CSSMappedStream@@UEAAXEPEAPEAX@Z
    virtual void Unmap(unsigned char, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSSMappedStream@@QEAA@XZ
    ~CSSMappedStream();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CSSMappedStream@@IEAAJXZ
    long Write();
};
