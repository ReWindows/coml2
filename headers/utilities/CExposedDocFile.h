#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 63 member(s).
class CExposedDocFile {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CExposedDocFile@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExposedDocFile@@QEAA@PEAVCPubDocFile@@PEAVCDFBasis@@PEAVCPerContext@@@Z
    CExposedDocFile(CPubDocFile *, CDFBasis *, CPerContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CExposedDocFile@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CExposedDocFile@@UEAAJKPEBU_GUID@@PEAPEAGPEAUIStorage@@@Z
    virtual long CopyTo(unsigned long, _GUID const *, unsigned short * *, IStorage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStorage@CExposedDocFile@@UEAAJPEBGKKKPEAPEAUIStorage@@@Z
    virtual long CreateStorage(unsigned short const *, unsigned long, unsigned long, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CExposedDocFile@@UEAAJPEBGKKKPEAPEAUIStream@@@Z
    virtual long CreateStream(unsigned short const *, unsigned long, unsigned long, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyElement@CExposedDocFile@@UEAAJPEBG@Z
    virtual long DestroyElement(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@CExposedDocFile@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumElements@CExposedDocFile@@UEAAJKPEAXKPEAPEAUIEnumSTATSTG@@@Z
    virtual long EnumElements(unsigned long, void *, unsigned long, IEnumSTATSTG * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@CExposedDocFile@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@CExposedDocFile@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HaveWriteAccess@CExposedDocFile@@UEAAJXZ
    virtual long HaveWriteAccess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CExposedDocFile@@UEAAJK@Z
    virtual long Lock(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@CExposedDocFile@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveElementTo@CExposedDocFile@@UEAAJPEBGPEAUIStorage@@0K@Z
    virtual long MoveElementTo(unsigned short const *, IStorage *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStorage@CExposedDocFile@@UEAAJPEBGPEAUIStorage@@KPEAPEAGKPEAPEAU2@@Z
    virtual long OpenStorage(unsigned short const *, IStorage *, unsigned long, unsigned short * *, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStream@CExposedDocFile@@UEAAJPEBGPEAXKKPEAPEAUIStream@@@Z
    virtual long OpenStream(unsigned short const *, void *, unsigned long, unsigned long, IStream * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CExposedDocFile@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CExposedDocFile@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@CExposedDocFile@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWriteAccess@CExposedDocFile@@UEAAJXZ
    virtual long ReleaseWriteAccess();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenameElement@CExposedDocFile@@UEAAJPEBG0@Z
    virtual long RenameElement(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CExposedDocFile@@UEAAJXZ
    virtual long Revert();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClass@CExposedDocFile@@UEAAJAEBU_GUID@@@Z
    virtual long SetClass(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementTimes@CExposedDocFile@@UEAAJPEBGPEBU_FILETIME@@11@Z
    virtual long SetElementTimes(unsigned short const *, _FILETIME const *, _FILETIME const *, _FILETIME const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateBits@CExposedDocFile@@UEAAJKK@Z
    virtual long SetStateBits(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CExposedDocFile@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticReleaseMarshalData@CExposedDocFile@@SAJPEAUIStream@@K@Z
    static long StaticReleaseMarshalData(IStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToFile@CExposedDocFile@@UEAAJPEAG@Z
    virtual long SwitchToFile(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CExposedDocFile@@UEAAJXZ
    virtual long Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmarshal@CExposedDocFile@@SAJPEAUIStream@@KK_NAEBU_GUID@@PEAPEAX@Z
    static long Unmarshal(IStream *, unsigned long, unsigned long, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CExposedDocFile@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CExposedDocFile@@QEBAJXZ
    long Validate() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForWriteAccess@CExposedDocFile@@UEAAJK@Z
    virtual long WaitForWriteAccess(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExposedDocFile@@QEAA@XZ
    ~CExposedDocFile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateReasonableMaxStreamSize@CExposedDocFile@@AEAAJPEA_K0@Z
    long CalculateReasonableMaxStreamSize(uint64_t *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCopyTo@CExposedDocFile@@AEAAJXZ
    long CheckCopyTo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertInternalStream@CExposedDocFile@@AEAAJPEAV1@@Z
    long ConvertInternalStream(CExposedDocFile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyDocFileToIStorage@CExposedDocFile@@AEAAJPEAVPDocFile@@PEAUIStorage@@PEAPEAGKPEA_K3@Z
    long CopyDocFileToIStorage(PDocFile *, IStorage *, unsigned short * *, unsigned long, uint64_t *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySStreamToIStream@CExposedDocFile@@AEAAJPEAVPSStream@@PEAUIStream@@PEA_K2@Z
    long CopySStreamToIStream(PSStream *, IStream *, uint64_t *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEntry@CExposedDocFile@@AEAAJPEBVCDfName@@KKPEAPEAX@Z
    long CreateEntry(CDfName const *, unsigned long, unsigned long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeCopyFlags@CExposedDocFile@@CAKKPEBU_GUID@@@Z
    static unsigned long MakeCopyFlags(unsigned long, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveElementWorker@CExposedDocFile@@AEAAJPEBGPEAUIStorage@@0K@Z
    long MoveElementWorker(unsigned short const *, IStorage *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenEntry@CExposedDocFile@@AEAAJPEBVCDfName@@KKPEAPEAX@Z
    long OpenEntry(CDfName const *, unsigned long, unsigned long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateWriteAccess@CExposedDocFile@@AEAAJXZ
    long ValidateWriteAccess();
};
