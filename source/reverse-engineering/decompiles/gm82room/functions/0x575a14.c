// rea decompile_all
// name: FUN_00575a14
// address: 0x575a14
// body: available
// range: 0x575a14-0x575a79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x575a36 (push 0x575a7a followed by fs-segment stack chaining); handler 0x575a7a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00575a14(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x575a2b;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_20 = &LAB_00575a7a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar3 = *(int *)(param_1 + 0x10);
  puStack_1c = &stack0xfffffffc;
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar2 = FUN_00575190(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar4 * 4),local_8);
      if (iVar2 != 0) break;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00575a81;
  puStack_20 = (undefined1 *)0x575a79;
  thunk_FUN_004072d8(&local_8,uStack_24,puVar1);
  return;
}
