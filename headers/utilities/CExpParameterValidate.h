#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 11 member(s).
class CExpParameterValidate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CExpParameterValidate@@SAJPEAPEAUIEnumSTATSTG@@@Z
    static long Clone(IEnumSTATSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStorage@CExpParameterValidate@@SAJPEBGKKKPEAPEAUIStorage@@@Z
    static long CreateStorage(unsigned short const *, unsigned long, unsigned long, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStream@CExpParameterValidate@@SAJPEBGKKKPEAPEAUIStream@@@Z
    static long CreateStream(unsigned short const *, unsigned long, unsigned long, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumElements@CExpParameterValidate@@SAJKPEAXKPEAPEAUIEnumSTATSTG@@@Z
    static long EnumElements(unsigned long, void *, unsigned long, IEnumSTATSTG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveElementTo@CExpParameterValidate@@SAJPEBGPEAUIStorage@@0K@Z
    static long MoveElementTo(unsigned short const *, IStorage *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@CExpParameterValidate@@SAJKPEAUtagSTATSTG@@PEAK@Z
    static long Next(unsigned long, tagSTATSTG *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStorage@CExpParameterValidate@@SAJPEBGPEAUIStorage@@KPEAPEAGKPEAPEAU2@@Z
    static long OpenStorage(unsigned short const *, IStorage *, unsigned long, unsigned short * *, unsigned long, IStorage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStream@CExpParameterValidate@@SAJPEBGPEAXKKPEAPEAUIStream@@@Z
    static long OpenStream(unsigned short const *, void *, unsigned long, unsigned long, IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CExpParameterValidate@@SAJPEAXKPEAK@Z
    static long Read(void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CExpParameterValidate@@SAJT_LARGE_INTEGER@@KPEAT_ULARGE_INTEGER@@@Z
    static long Seek(_LARGE_INTEGER, unsigned long, _ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CExpParameterValidate@@SAJPEAUtagSTATSTG@@K@Z
    static long Stat(tagSTATSTG *, unsigned long);
};
