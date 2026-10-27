// rea decompile_all
// name: FUN_0059023c
// address: 0x59023c
// body: available
// range: 0x59023c-0x59029e inclusive
// range: 0x5902b0-0x5902c9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59025b (push 0x5902ca followed by fs-segment stack chaining); handler 0x5902ca lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x590279 (push 0x59029f followed by fs-segment stack chaining); handler 0x59029f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059023c(undefined4 param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x590250;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_005902ca;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x59026a;
  puStack_1c = &stack0xfffffffc;
  cVar3 = FUN_00416b0c(local_8);
  if (cVar3 != '\0') {
    puStack_2c = &LAB_0059029f;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    piVar1 = *(int **)(*(int *)(DAT_0084f024 + 0x388) + 0x2c0);
    puStack_28 = &stack0xfffffffc;
    (**(code **)(*piVar1 + 0x68))(piVar1,local_8);
    *in_FS_OFFSET = uStack_30;
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005902d1;
  puStack_20 = (undefined1 *)0x5902c9;
  thunk_FUN_004072d8(&local_8,uStack_24,puVar2);
  return;
}
