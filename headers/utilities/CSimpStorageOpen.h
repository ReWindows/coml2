#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 11 member(s).
class CSimpStorageOpen {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CSimpStorageOpen@@UEAAJPEBGKKKPEAPEAUIStream@@@Z
    virtual long CreateStream(unsigned short const *, unsigned long, unsigned long, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumElements@CSimpStorageOpen@@UEAAJKPEAXKPEAPEAUIEnumSTATSTG@@@Z
    virtual long EnumElements(unsigned long, void *, unsigned long, IEnumSTATSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSimpStorageOpen@@QEAAJPEBGKPEAX@Z
    long Init(unsigned short const *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStream@CSimpStorageOpen@@UEAAJPEBGPEAXKKPEAPEAUIStream@@@Z
    virtual long OpenStream(unsigned short const *, void *, unsigned long, unsigned long, IStream * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSimpStorageOpen@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClass@CSimpStorageOpen@@UEAAJAEBU_GUID@@@Z
    virtual long SetClass(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CSimpStorageOpen@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateDirectory@CSimpStorageOpen@@QEAAJPEAEK@Z
    long ValidateDirectory(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateHeader@CSimpStorageOpen@@QEAAJAEAVCMSFHeader@@@Z
    long ValidateHeader(CMSFHeader &);
};
