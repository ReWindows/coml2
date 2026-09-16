// Flat C exports observed in coml2.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef COML2_C_H
#define COML2_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: StgCreateDocfileOnILockBytes (ABI unverified)
// Export: StgOpenStorageOnILockBytes (ABI unverified)
// Export: StgOpenStorage (ABI unverified)
// Export: StgIsStorageFile (ABI unverified)
// Export: StgOpenStorageEx (ABI unverified)
// Export: StgCreateDocfile (ABI unverified)
// Export: StgCreatePropSetStg (ABI unverified)
// Export: StgCreatePropStg (ABI unverified)
// Export: WriteClassStg (ABI unverified)
// Export: ReadClassStg (ABI unverified)
// Export: ReadClassStm (ABI unverified)
// Export: WriteClassStm (ABI unverified)
// Export: Coml2DllGetClassObject (ABI unverified)
// Export: DllGetClassObject (ABI unverified)
// Export: CreateILockBytesOnHGlobal (ABI unverified)
// Export: StgCreateStorageEx (ABI unverified)
// Export: GetConvertStg (ABI unverified)
// Export: #ordinal11 (ABI unverified)
// Export: DfGetClass (ABI unverified)
// Export: StgIsStorageILockBytes (ABI unverified)
// Export: StgSetTimes (ABI unverified)
// Export: FmtIdToPropStgName (ABI unverified)
// Export: PropStgNameToFmtId (ABI unverified)
// Export: StgOpenPropStg (ABI unverified)
// Export: #ordinal7 (ABI unverified)
// Export: StgOpenStorageOnHandle (ABI unverified)
// Export: #ordinal5 (ABI unverified)
// Export: StgConvertPropertyToVariant (ABI unverified)
// Export: #ordinal4 (ABI unverified)
// Export: StgConvertVariantToProperty (ABI unverified)
// Export: #ordinal6 (ABI unverified)
// Export: StgPropertyLengthAsVariant (ABI unverified)
// Export: #ordinal8 (ABI unverified)
// Export: StgPropVariantChangeType (ABI unverified)
// Export: #ordinal3 (ABI unverified)
// Export: StgGetIFillLockBytesOnFile (ABI unverified)
// Export: #ordinal2 (ABI unverified)
// Export: StgGetIFillLockBytesOnILockBytes (ABI unverified)
// Export: #ordinal1 (ABI unverified)
// Export: StgOpenAsyncDocfileOnIFillLockBytes (ABI unverified)
// Export: GetHGlobalFromILockBytes (ABI unverified)
// Export: #ordinal12 (ABI unverified)
// Export: GetDocumentBitStg (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // COML2_C_H
