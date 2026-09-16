#pragma once
#include "../windissect_forwards.h"

// Reconstructed from coml2.dll by Windissect. 43 member(s).
class CPropertySetStream {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPropertySetStream@@QEAA@GPEAVIMappedStream@@PEAVPMemoryAllocator@@@Z
    CPropertySetStream(unsigned short, IMappedStream *, PMemoryAllocator *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicatePropertyName@CPropertySetStream@@QEBAPEAGPEBGPEAJ@Z
    unsigned short * DuplicatePropertyName(unsigned short const *, long *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumeratePropids@CPropertySetStream@@QEAAEPEAK00PEAJ@Z
    unsigned char EnumeratePropids(unsigned long *, unsigned long *, unsigned long *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CPropertySetStream@@QEAAPEBUtagSERIALIZEDPROPERTYVALUE@@KPEAKPEAJ@Z
    tagSERIALIZEDPROPERTYVALUE const * GetValue(unsigned long, unsigned long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CPropertySetStream@@QEAAXPEBU_GUID@@0KPEAKGKPEAJ@Z
    void Open(_GUID const *, _GUID const *, unsigned long, unsigned long *, unsigned short, unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryPropertyNames@CPropertySetStream@@QEAAEKPEBKQEAPEAGPEAJ@Z
    unsigned char QueryPropertyNames(unsigned long, unsigned long const *, unsigned short * * const, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryPropertySet@CPropertySetStream@@QEBAXPEAUtagSTATPROPSETSTG@@PEAJ@Z
    void QueryPropertySet(tagSTATPROPSETSTG *, long *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryPropid@CPropertySetStream@@QEAAKPEBGPEAJ@Z
    unsigned long QueryPropid(unsigned short const *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReOpen@CPropertySetStream@@QEAAKPEAJ@Z
    unsigned long ReOpen(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyNames@CPropertySetStream@@QEAAXKPEBKQEBQEBGPEAJ@Z
    void SetPropertyNames(unsigned long, unsigned long const *, unsigned short const * const * const, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CPropertySetStream@@QEAAXKPEAPEAU_INDIRECTPROPERTY@@QEBUtagPROPVARIANT@@PEAUtagPROPERTY_INFORMATION@@PEAGPEAJ@Z
    void SetValue(unsigned long, _INDIRECTPROPERTY * *, tagPROPVARIANT const * const, tagPROPERTY_INFORMATION *, unsigned short *, long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompactChunk@CPropertySetStream@@AEAAXPEBUCStreamChunk@@JK@Z
    void _CompactChunk(CStreamChunk const *, long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompactStream@CPropertySetStream@@AEAAXPEBVCStreamChunkList@@@Z
    void _CompactStream(CStreamChunkList const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComparePropertyNames@CPropertySetStream@@AEBAEPEBX0HKPEAJ@Z
    unsigned char _ComparePropertyNames(void const *, void const *, int, unsigned long, long *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeMinimumSize@CPropertySetStream@@AEAAKKPEAJ@Z
    unsigned long _ComputeMinimumSize(unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CountFreePropertyOffsets@CPropertySetStream@@AEAAKPEAJ@Z
    unsigned long _CountFreePropertyOffsets(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Create@CPropertySetStream@@AEAAXPEBU_GUID@@0KGW4tagLOADSTATE@@KPEAJ@Z
    void _Create(_GUID const *, _GUID const *, unsigned long, unsigned short, int, unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUserDefinedSection@CPropertySetStream@@AEAAEW4tagLOADSTATE@@KPEAJ@Z
    unsigned char _CreateUserDefinedSection(int, unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteMovePropertyOffsets@CPropertySetStream@@AEAAXPEBUtagPROPERTY_INFORMATION@@KPEAJ@Z
    void _DeleteMovePropertyOffsets(tagPROPERTY_INFORMATION const *, unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DictionaryEntryLength@CPropertySetStream@@AEBAKPEFBUtagENTRY@@@Z
    unsigned long _DictionaryEntryLength(tagENTRY & volatile *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DictionaryLength@CPropertySetStream@@AEBAKPEBUtagDICTIONARY@@KPEAJ@Z
    unsigned long _DictionaryLength(tagDICTIONARY const *, unsigned long, long *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixDocPartsElements@CPropertySetStream@@AEAAEW4tagPATCHOP@@KPEAXPEFBXPEAK@Z
    unsigned char _FixDocPartsElements(int, unsigned long, void *, void & volatile *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixDocPartsVector@CPropertySetStream@@AEAAEW4tagPATCHOP@@PEAUtagSERIALIZEDPROPERTYVALUE@@PEAK@Z
    unsigned char _FixDocPartsVector(int, tagSERIALIZEDPROPERTYVALUE *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixHeadingPairElements@CPropertySetStream@@AEAAEW4tagPATCHOP@@KPEAUtagSERIALIZEDPROPERTYVALUE@@PEFBU3@PEAK@Z
    unsigned char _FixHeadingPairElements(int, unsigned long, tagSERIALIZEDPROPERTYVALUE *, tagSERIALIZEDPROPERTYVALUE & volatile *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixHeadingPairVector@CPropertySetStream@@AEAAEW4tagPATCHOP@@PEAUtagSERIALIZEDPROPERTYVALUE@@PEAK@Z
    unsigned char _FixHeadingPairVector(int, tagSERIALIZEDPROPERTYVALUE *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixPackedPropertySet@CPropertySetStream@@AEAAXPEAJ@Z
    void _FixPackedPropertySet(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixSummaryInformation@CPropertySetStream@@AEAAXPEAKPEAJ@Z
    void _FixSummaryInformation(unsigned long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixUnalignedUDPropSet@CPropertySetStream@@AEAAXPEAKPEAJ@Z
    void _FixUnalignedUDPropSet(unsigned long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAndValidateSectionHeader@CPropertySetStream@@AEAAJPEAPEAUtagPROPERTYSECTIONHEADER@@@Z
    long _GetAndValidateSectionHeader(tagPROPERTYSECTIONHEADER * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSectionHeader@CPropertySetStream@@AEAAPEAUtagPROPERTYSECTIONHEADER@@KPEAJ@Z
    tagPROPERTYSECTIONHEADER * _GetSectionHeader(unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitSection@CPropertySetStream@@AEAAXPEAUtagFORMATIDOFFSET@@KH@Z
    void _InitSection(tagFORMATIDOFFSET *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertMovePropertyOffsets@CPropertySetStream@@AEAAXPEBUtagPROPERTY_INFORMATION@@KKKPEAJ@Z
    void _InsertMovePropertyOffsets(tagPROPERTY_INFORMATION const *, unsigned long, unsigned long, unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsLocalizationSettable@CPropertySetStream@@AEAAEPEAJ@Z
    unsigned char _IsLocalizationSettable(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadHeader@CPropertySetStream@@AEAA?AW4tagLOADSTATE@@PEBU_GUID@@EPEAJ@Z
    int _LoadHeader(_GUID const *, unsigned char, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadProperty@CPropertySetStream@@AEAAPEAUtagSERIALIZEDPROPERTYVALUE@@KPEAKPEAJ@Z
    tagSERIALIZEDPROPERTYVALUE * _LoadProperty(unsigned long, unsigned long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadPropertyOffsetPointers@CPropertySetStream@@AEAAPEAUtagPROPERTYSECTIONHEADER@@PEAPEAUtagPROPERTYIDOFFSET@@0PEAJ@Z
    tagPROPERTYSECTIONHEADER * _LoadPropertyOffsetPointers(tagPROPERTYIDOFFSET * *, tagPROPERTYIDOFFSET * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MultiByteToWideChar@CPropertySetStream@@AEBAXPEBDKGPEAPEAGPEAJ@Z
    void _MultiByteToWideChar(char const *, unsigned long, unsigned short, unsigned short * *, long *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NextDictionaryEntry@CPropertySetStream@@AEBAPEFAUtagENTRY@@PEFBU2@@Z
    tagENTRY & const * _NextDictionaryEntry(tagENTRY & volatile *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PatchSectionOffsets@CPropertySetStream@@AEAAXJ@Z
    void _PatchSectionOffsets(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PropertyNameLength@CPropertySetStream@@AEBAGPEBXPEAK@Z
    unsigned short _PropertyNameLength(void const *, unsigned long *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchForCodePage@CPropertySetStream@@AEAAXPEAJ@Z
    void _SearchForCodePage(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePropertyOffsets@CPropertySetStream@@AEAAXPEBVCStreamChunkList@@PEAJ@Z
    void _UpdatePropertyOffsets(CStreamChunkList const *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WideCharToMultiByte@CPropertySetStream@@AEAAXPEBGHGPEAPEADPEAJ@Z
    void _WideCharToMultiByte(unsigned short const *, int, unsigned short, char * *, long *);
};
