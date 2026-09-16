#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 4 member(s).
class SerializedPropertyReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advance@SerializedPropertyReader@@QEAAJK@Z
    long Advance(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DwordAlignPointer@SerializedPropertyReader@@QEAAJXZ
    long DwordAlignPointer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadArrayWorkerNoSwap@SerializedPropertyReader@@AEAAJPEAXKK@Z
    long ReadArrayWorkerNoSwap(void *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadWorkerNoSwap@SerializedPropertyReader@@AEAAJPEAXK@Z
    long ReadWorkerNoSwap(void *, unsigned long);
};
