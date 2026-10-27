// rea decompile_all
// name: FUN_00507a80
// address: 0x507a80
// body: available
// range: 0x507a80-0x507b54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x507aa3 (push 0x507b72 followed by fs-segment stack chaining); handler 0x507b72 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x507ab9 (push 0x507b55 followed by fs-segment stack chaining); handler 0x507b55 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00507a80(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  HIMAGELIST himlSrc;
  HIMAGELIST himlDst;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int iDst;
  int iSrc;
  UINT uFlags;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00507b72;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x507aae;
  local_8 = param_1;
  FUN_00508acc(param_1);
  puStack_2c = &LAB_00507b55;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  iVar2 = FUN_00507098(local_8);
  if (iVar2 < param_2) {
    FUN_0040b75c(PTR_PTR_00781b10,&local_c);
    FUN_0041beb8(&PTR_LAB_0042f068,1,local_c);
    FUN_00406618();
  }
  if (param_4 == -1) {
    FUN_00506d84(local_8,param_3,param_5);
  }
  else {
    FUN_00506e50(local_8,param_3,param_4);
  }
  iVar2 = FUN_00507098(local_8);
  iVar2 = iVar2 + -2;
  if (param_2 - iVar2 == 0 || param_2 < iVar2) {
    iVar3 = (param_2 - iVar2) + -1;
    do {
      uFlags = 1;
      iSrc = iVar2 + 1;
      himlSrc = (HIMAGELIST)FUN_00506bcc(local_8);
      iDst = iVar2;
      himlDst = (HIMAGELIST)FUN_00506bcc(local_8);
      ImageList_Copy(himlDst,iDst,himlSrc,iSrc,uFlags);
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00507b5c;
  puStack_2c = (undefined1 *)0x507b54;
  FUN_00508ad0(local_8,uStack_30,puVar1);
  return;
}
