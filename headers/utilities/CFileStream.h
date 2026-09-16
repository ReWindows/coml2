#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 62 member(s).
class CFileStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFileStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileStream@@QEAA@QEAUIMalloc@@@Z
    CFileStream(IMalloc * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CFileStream@@QEAAXXZ
    void Delete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillAppend@CFileStream@@UEAAJPEBXKPEAK@Z
    virtual long FillAppend(void const *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillAt@CFileStream@@UEAAJT_ULARGE_INTEGER@@PEBXKPEAK@Z
    virtual long FillAt(_ULARGE_INTEGER, void const *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CFileStream@@UEAAJXZ
    virtual long Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushCache@CFileStream@@UEAAJXZ
    virtual long FlushCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFailureInfo@CFileStream@@UEAAJPEAK0@Z
    virtual long GetFailureInfo(unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocksSupported@CFileStream@@UEAAJPEAK@Z
    virtual long GetLocksSupported(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetName@CFileStream@@QEAAJPEAPEAG@Z
    long GetName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@CFileStream@@QEBAPEAU1@XZ
    CFileStream * GetNext() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectorSize@CFileStream@@UEAAKXZ
    virtual unsigned long GetSectorSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CFileStream@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSize(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTerminationStatus@CFileStream@@UEAAJPEAK@Z
    virtual long GetTerminationStatus(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromHandle@CFileStream@@QEAAJPEAX@Z
    long InitFromHandle(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitGlobal@CFileStream@@QEAAJKK@Z
    long InitGlobal(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitScratch@CFileStream@@QEAAJXZ
    long InitScratch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDpapiNgEncryptedFile@CFileStream@@UEBAHXZ
    virtual int IsDpapiNgEncryptedFile() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEncryptedFile@CFileStream@@UEAAHXZ
    virtual int IsEncryptedFile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockRegion@CFileStream@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long LockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFileStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAt@CFileStream@@UEAAJT_ULARGE_INTEGER@@PEAXKPEAK@Z
    virtual long ReadAt(_ULARGE_INTEGER, void *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFillSize@CFileStream@@UEAAJT_ULARGE_INTEGER@@@Z
    virtual long SetFillSize(_ULARGE_INTEGER);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CFileStream@@UEAAJT_ULARGE_INTEGER@@@Z
    virtual long SetSize(_ULARGE_INTEGER);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTempFileSourceFlb@CFileStream@@QEAAXPEAUIFileLockBytes@@@Z
    void SetTempFileSourceFlb(IFileLockBytes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTime@CFileStream@@QEAAJW4WHICHTIME@@U_FILETIME@@@Z
    long SetTime(int, _FILETIME);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CFileStream@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToFile@CFileStream@@UEAAJPEBG_KKPEAX@Z
    virtual long SwitchToFile(unsigned short const *, uint64_t, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Terminate@CFileStream@@UEAAJH@Z
    virtual long Terminate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TurnOffAllMappings@CFileStream@@QEAAXXZ
    void TurnOffAllMappings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockRegion@CFileStream@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long UnlockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmarshal@CFileStream@@SAJV?$BasedPtr@VCGlobalFileStream@@@@PEAPEAXK@Z
    static long Unmarshal(WindissectOpaque, void * *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAt@CFileStream@@UEAAJT_ULARGE_INTEGER@@PEBXKPEAK@Z
    virtual long WriteAt(_ULARGE_INTEGER, void const *, unsigned long, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileStream@@QEAA@XZ
    ~CFileStream();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckMapView@CFileStream@@AEAAJK@Z
    long CheckMapView(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTheFile@CFileStream@@AEAAHPEBG@Z
    int DeleteTheFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DupFileHandleToOthers@CFileStream@@AEAAJXZ
    long DupFileHandleToOthers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitWorker@CFileStream@@AEAAJPEBGKPEAX@Z
    long InitWorker(unsigned short const *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init_DupFileHandle@CFileStream@@AEAAJK@Z
    long Init_DupFileHandle(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init_MemoryMap@CFileStream@@AEAAJK@Z
    long Init_MemoryMap(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init_OpenOrCreate@CFileStream@@AEAAJPEAGKPEAX@Z
    long Init_OpenOrCreate(unsigned short *, unsigned long, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFileMapped@CFileStream@@AEAAHXZ
    int IsFileMapped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeFileMapAddressValid@CFileStream@@AEAAJK@Z
    long MakeFileMapAddressValid(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeFileMapAddressValidWorker@CFileStream@@AEAAJKK@Z
    long MakeFileMapAddressValidWorker(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeFileStub@CFileStream@@AEAAJXZ
    long MakeFileStub();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapView@CFileStream@@AEAAJ_KKK@Z
    long MapView(uint64_t, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAt_FromFile@CFileStream@@AEAAJ_KPEAXKPEAK@Z
    long ReadAt_FromFile(uint64_t, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAt_FromMap@CFileStream@@AEAAJKPEAXKPEAK@Z
    long ReadAt_FromMap(unsigned long, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekTo@CFileStream@@AEAA_K_K@Z
    uint64_t SeekTo(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSizeWorker@CFileStream@@AEAAJ_K@Z
    long SetSizeWorker(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TurnOffMapping@CFileStream@@AEAAJH@Z
    long TurnOffMapping(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAtWorker@CFileStream@@AEAAJT_ULARGE_INTEGER@@PEBXKPEAK@Z
    long WriteAtWorker(_ULARGE_INTEGER, void const *, unsigned long, unsigned long *);
};
