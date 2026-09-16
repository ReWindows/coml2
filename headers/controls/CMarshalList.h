#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 5 member(s).
class CMarshalList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMarshal@CMarshalList@@QEAAXPEAV1@@Z
    void AddMarshal(CMarshalList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMarshal@CMarshalList@@QEBAPEAV1@KPEAX@Z
    CMarshalList * FindMarshal(unsigned long, void *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNextMarshal@CMarshalList@@QEAAXPEAV1@@Z
    void SetNextMarshal(CMarshalList *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMarshalList@@IEAA@XZ
    CMarshalList();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMarshalList@@IEAA@XZ
    ~CMarshalList();
};
