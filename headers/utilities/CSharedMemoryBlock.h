#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 6 member(s).
class CSharedMemoryBlock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CSharedMemoryBlock@@QEAAJK@Z
    long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSharedMemoryBlock@@QEAAJPEBGKK@Z
    long Init(unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitUnMarshal@CSharedMemoryBlock@@QEAAJPEAXKK@Z
    long InitUnMarshal(void *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Sync@CSharedMemoryBlock@@QEAAJXZ
    long Sync();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseMapping@CSharedMemoryBlock@@AEAAXXZ
    void CloseMapping();
};
