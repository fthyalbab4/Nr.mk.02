// rea decompile_all
// name: FUN_00460dec
// address: 0x460dec
// body: available
// range: 0x460dec-0x460eab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x460e36 (push 0x460eac followed by fs-segment stack chaining); handler 0x460eac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00460dec(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  HENHMETAFILE pHVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined1 local_6c [24];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  UINT local_3c;
  BYTE *local_8;

  puStack_7c = (undefined1 *)0x460e00;
  FUN_00460d58(param_1);
  puStack_7c = (undefined1 *)0x460e0f;
  FUN_0043ca88(param_2,local_6c,100);
  if (local_44 != 0x464d4520) {
    puStack_7c = (undefined1 *)0x460e1d;
    FUN_0045d7bc();
  }
  puStack_7c = (undefined1 *)0x460e25;
  local_8 = (BYTE *)FUN_00404324(local_3c);
  iVar1 = *(int *)(param_1 + 0x28);
  puStack_80 = &LAB_00460eac;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  puStack_7c = &stack0xfffffffc;
  FUN_00404514(local_6c,local_8,100);
  FUN_0043ca88(param_2,local_8 + 100,local_3c - 100);
  pHVar3 = SetEnhMetaFileBits(local_3c,local_8);
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar3;
  if (pHVar3 == (HENHMETAFILE)0x0) {
    FUN_0045d7bc();
  }
  puVar2 = puStack_7c;
  *(undefined2 *)(iVar1 + 0x18) = 0;
  *(int *)(iVar1 + 0xc) = local_4c - local_54;
  *(int *)(iVar1 + 0x10) = local_48 - local_50;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *in_FS_OFFSET = uStack_84;
  puStack_7c = &LAB_00460eb3;
  puStack_80 = (undefined1 *)0x460eab;
  FUN_00404340(local_8,local_3c,puVar2);
  return;
}
