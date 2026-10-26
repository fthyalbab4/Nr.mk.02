// rea decompile_all
// name: FUN_004b5a08
// address: 0x4b5a08
// body: available
// range: 0x4b5a08-0x4b5a9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b5a2d (push 0x4b5afc followed by fs-segment stack chaining); handler 0x4b5afc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b5a55 (push 0x4b5a9f followed by fs-segment stack chaining); handler 0x4b5a9f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b5a08(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_FS_OFFSET;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_28 = (undefined1 *)0x4b5a22;
  local_8 = param_2;
  FUN_00409d44(param_2);
  puStack_2c = &LAB_004b5afc;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puStack_34 = (undefined1 *)0x4b5a3c;
  puStack_28 = &stack0xfffffffc;
  uVar2 = FUN_00409a18(local_8);
  puStack_34 = (undefined1 *)0x4b5a47;
  iVar3 = FUN_0043f234(param_1);
  puStack_38 = &LAB_004b5a9f;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_00409be0(&local_c,&DAT_004108f8,1,uVar2);
  (**(code **)(*param_1 + 0xc))(param_1,local_c,uVar2);
  puVar1 = puStack_34;
  *in_FS_OFFSET = iStack_3c;
  puStack_34 = &LAB_004b5aa6;
  puStack_38 = (undefined1 *)(iVar3 >> 0x1f);
  iStack_3c = iVar3;
  FUN_0043f254(param_1,puStack_38,puVar1);
  return;
}
