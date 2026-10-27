// rea decompile_all
// name: FUN_0046072c
// address: 0x46072c
// body: available
// range: 0x46072c-0x4607eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x460776 (push 0x4607ec followed by fs-segment stack chaining); handler 0x4607ec lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046072c(int param_1,undefined4 param_2)

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

  puStack_7c = (undefined1 *)0x460740;
  FUN_00460698(param_1);
  puStack_7c = (undefined1 *)0x46074f;
  FUN_0043f488(param_2,local_6c,100);
  if (local_44 != 0x464d4520) {
    puStack_7c = (undefined1 *)0x46075d;
    FUN_0045d0fc();
  }
  puStack_7c = (undefined1 *)0x460765;
  local_8 = (BYTE *)FUN_0040431c(local_3c);
  iVar1 = *(int *)(param_1 + 0x28);
  puStack_80 = &LAB_004607ec;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  puStack_7c = &stack0xfffffffc;
  FUN_0040450c(local_6c,local_8,100);
  FUN_0043f488(param_2,local_8 + 100,local_3c - 100);
  pHVar3 = SetEnhMetaFileBits(local_3c,local_8);
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar3;
  if (pHVar3 == (HENHMETAFILE)0x0) {
    FUN_0045d0fc();
  }
  puVar2 = puStack_7c;
  *(undefined2 *)(iVar1 + 0x18) = 0;
  *(int *)(iVar1 + 0xc) = local_4c - local_54;
  *(int *)(iVar1 + 0x10) = local_48 - local_50;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *in_FS_OFFSET = uStack_84;
  puStack_7c = &LAB_004607f3;
  puStack_80 = (undefined1 *)0x4607eb;
  FUN_00404338(local_8,local_3c,puVar2);
  return;
}
