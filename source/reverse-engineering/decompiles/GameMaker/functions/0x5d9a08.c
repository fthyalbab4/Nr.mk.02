// rea decompile_all
// name: FUN_005d9a08
// address: 0x5d9a08
// body: available
// range: 0x5d9a08-0x5d9aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d9a2f (push 0x5d9ad8 followed by fs-segment stack chaining); handler 0x5d9ad8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d9a3d (push 0x5d9ac7 followed by fs-segment stack chaining); handler 0x5d9ac7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d9a6a (push 0x5d9aa4 followed by fs-segment stack chaining); handler 0x5d9aa4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d9a08(int param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  LPVOID pvVar4;
  SIZE_T SVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  iVar1 = *(int *)(param_1 + 0x27c);
  puStack_20 = &LAB_005d9ad8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_2c = &LAB_005d9ac7;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  if (iVar1 == 0) {
    FUN_005d7ba4(param_1);
    puVar2 = puStack_28;
    puVar3 = puStack_1c;
  }
  puStack_1c = puVar3;
  puStack_28 = puVar2;
  pvVar4 = GlobalLock(*(HGLOBAL *)(param_1 + 0x27c));
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  SVar5 = GlobalSize(*(HGLOBAL *)(param_1 + 0x27c));
  (**(code **)(*param_2 + 0x10))(param_2,pvVar4,SVar5);
  *in_FS_OFFSET = uStack_3c;
  uStack_3c = 0x5d9aa3;
  GlobalUnlock(*(HGLOBAL *)(param_1 + 0x27c));
  return;
}
