// rea decompile_all
// name: FUN_005010ac
// address: 0x5010ac
// body: available
// range: 0x5010ac-0x501122 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5010c8 (push 0x501123 followed by fs-segment stack chaining); handler 0x501123 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005010ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined2 local_18 [2];
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_00501123;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_18[0] = *(undefined2 *)(param_4 + -6);
  local_14 = 9;
  local_c = 0x11;
  local_10 = param_1;
  FUN_00417c88(L"%s: %s",local_18,1,&local_8);
  piVar1 = *(int **)(*(int *)(param_4 + -4) + 0x2ac);
  (**(code **)(*piVar1 + 0x3c))(piVar1,local_8,param_2);
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0050112a;
  puStack_28 = (undefined1 *)0x501122;
  thunk_FUN_004072d8(&local_8,uStack_2c,puVar2);
  return;
}
