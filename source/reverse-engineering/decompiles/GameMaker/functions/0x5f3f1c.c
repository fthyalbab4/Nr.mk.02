// rea decompile_all
// name: FUN_005f3f1c
// address: 0x5f3f1c
// body: available
// range: 0x5f3f1c-0x5f4047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f3f3e (push 0x5f4048 followed by fs-segment stack chaining); handler 0x5f4048 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f3f1c(undefined4 param_1,int param_2)

{
  int *in_FS_OFFSET;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_24 = (undefined1 *)0x5f3f33;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_28 = &LAB_005f4048;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_005e07ec(&local_8,&DAT_005f4064,1,&local_c,1);
  FUN_005e2640(local_c,0xffffffff);
  FUN_005e07ec(&local_8,&DAT_005f4064,1,&local_10,1);
  FUN_005e2640(local_10,0xffffffff);
  puVar2 = &local_14;
  FUN_005e07ec(&local_8,&DAT_005f4064,1,puVar2,1);
  FUN_005e2640(local_14,0xffffffff);
  puVar1 = &local_18;
  FUN_005e07ec(&local_8,&DAT_005f4064,1,puVar1,1);
  FUN_005e2640(local_18,0xffffffff);
  *in_FS_OFFSET = (int)puVar1;
  thunk_FUN_00406e80(&local_18,5,puVar2,&LAB_005f404f);
  return;
}
