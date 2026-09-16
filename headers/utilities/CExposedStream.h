#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 51 member(s).
class CExposedStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExposedStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExposedStream@@QEAA@XZ
    CExposedStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CExposedStream@@UEAAJPEAPEAUIStream@@@Z
    virtual long Clone(IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CExposedStream@@UEAAXPEAJ@Z
    virtual void Close(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CExposedStream@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CExposedStream@@UEAAJPEAUIStream@@T_ULARGE_INTEGER@@PEAT3@2@Z
    virtual long CopyTo(IStream *, _ULARGE_INTEGER, _ULARGE_INTEGER *, _ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@CExposedStream@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CExposedStream@@UEAAXPEAJ@Z
    virtual void Flush(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@CExposedStream@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CExposedStream@@UEAAKPEAJ@Z
    virtual unsigned long GetSize(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@CExposedStream@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CExposedStream@@QEAAJPEAVCPubStream@@PEAVCDFBasis@@PEAVCPerContext@@PEAVCSeekPointer@@@Z
    long Init(CPubStream *, CDFBasis *, CPerContext *, CSeekPointer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsModified@CExposedStream@@UEBAEXZ
    virtual unsigned char IsModified() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWriteable@CExposedStream@@UEBAEXZ
    virtual unsigned char IsWriteable() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CExposedStream@@UEAAJE@Z
    virtual long Lock(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockRegion@CExposedStream@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long LockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CExposedStream@@UEAAXEPEAPEAX@Z
    virtual void Map(unsigned char, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@CExposedStream@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CExposedStream@@UEAAXPEAVCPropertySetStream@@PEAJ@Z
    virtual void Open(CPropertySetStream *, long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExposedStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReOpen@CExposedStream@@UEAAXPEAPEAXPEAJ@Z
    virtual void ReOpen(void * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CExposedStream@@UEAAJPEAXKPEAK@Z
    virtual long Read(void *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExposedStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@CExposedStream@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CExposedStream@@UEAAJXZ
    virtual long Revert();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CExposedStream@@UEAAJT_LARGE_INTEGER@@KPEAT_ULARGE_INTEGER@@@Z
    virtual long Seek(_LARGE_INTEGER, unsigned long, _ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModified@CExposedStream@@UEAAXPEAJ@Z
    virtual void SetModified(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CExposedStream@@UEAAJT_ULARGE_INTEGER@@@Z
    virtual long SetSize(_ULARGE_INTEGER);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CExposedStream@@UEAAXKEPEAPEAXPEAJ@Z
    virtual void SetSize(unsigned long, unsigned char, void * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CExposedStream@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticReleaseMarshalData@CExposedStream@@SAJPEAUIStream@@K@Z
    static long StaticReleaseMarshalData(IStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CExposedStream@@UEAAJXZ
    virtual long Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockRegion@CExposedStream@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long UnlockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CExposedStream@@UEAAXEPEAPEAX@Z
    virtual void Unmap(unsigned char, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmarshal@CExposedStream@@SAJPEAUIStream@@KK_NAEBU_GUID@@PEAPEAX@Z
    static long Unmarshal(IStream *, unsigned long, unsigned long, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CExposedStream@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CExposedStream@@QEBAJXZ
    long Validate() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CExposedStream@@UEAAJPEBXKPEAK@Z
    virtual long Write(void const *, unsigned long, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExposedStream@@QEAA@XZ
    ~CExposedStream();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToWorker@CExposedStream@@AEAAJPEAUIStream@@T_ULARGE_INTEGER@@PEAT3@2PEAVCSafeSem@@@Z
    long CopyToWorker(IStream *, _ULARGE_INTEGER, _ULARGE_INTEGER *, _ULARGE_INTEGER *, CSafeSem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateWriteAccess@CExposedStream@@AEAAJXZ
    long ValidateWriteAccess();
};
