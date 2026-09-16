#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 12 member(s).
class PDocFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDocFile@PDocFile@@QEAAJPEBVCDfName@@KKPEAPEAV1@@Z
    long CreateDocFile(CDfName const *, unsigned long, unsigned long, PDocFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromUpdate@PDocFile@@SAJPEAVCUpdate@@PEAV1@K@Z
    static long CreateFromUpdate(CUpdate *, PDocFile *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyEntry@PDocFile@@QEAAJPEBVCDfName@@H@Z
    long DestroyEntry(CDfName const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExcludeEntries@PDocFile@@SAJPEAV1@PEAPEAG@Z
    static long ExcludeEntries(PDocFile *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindGreaterEntry@PDocFile@@QEAAJPEBVCDfName@@PEAUSIterBuffer@@PEAUtagSTATSTG@@@Z
    long FindGreaterEntry(CDfName const *, SIterBuffer *, tagSTATSTG *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClass@PDocFile@@QEAAJPEAU_GUID@@@Z
    long GetClass(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocFile@PDocFile@@QEAAJPEBVCDfName@@KPEAPEAV1@@Z
    long GetDocFile(CDfName const *, unsigned long, PDocFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateBits@PDocFile@@QEAAJPEAK@Z
    long GetStateBits(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@PDocFile@@QEAAJPEBVCDfName@@KPEAPEAVPSStream@@@Z
    long GetStream(CDfName const *, unsigned long, PSStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEntry@PDocFile@@QEAAJPEBVCDfName@@PEAUSEntryBuffer@@@Z
    long IsEntry(CDfName const *, SEntryBuffer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClass@PDocFile@@QEAAJAEBU_GUID@@@Z
    long SetClass(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStateBits@PDocFile@@QEAAJKK@Z
    long SetStateBits(unsigned long, unsigned long);
};
