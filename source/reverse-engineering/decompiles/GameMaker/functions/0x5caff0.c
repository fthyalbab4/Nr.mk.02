// rea decompile_all
// name: FUN_005caff0
// address: 0x5caff0
// body: available
// range: 0x5caff0-0x5cb0ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cb00c (push 0x5cb0ae followed by fs-segment stack chaining); handler 0x5cb0ae lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005caff0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  undefined4 *puStack_34;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  puStack_2c = &LAB_005cb0ae;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  FUN_005ca7f8(param_1);
  FUN_005caf28(param_1,&local_8);
  if (local_8 == 0) {
    FUN_005cae94(param_1,&local_1c);
    (**(code **)(*local_1c + 0x14))(local_1c,&local_18);
    puStack_34 = (undefined4 *)0x5cb06d;
    (**(code **)(*local_18 + 0x18))(local_18,param_2);
  }
  else {
    puStack_34 = &local_c;
    FUN_005cae94(param_1,&local_14);
    (**(code **)(*local_14 + 0x14))(local_14,&local_10);
    (**(code **)(*local_10 + 100))(local_10,local_8,param_2);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = (int)puStack_34;
  puStack_2c = &LAB_005cb0b5;
  iStack_30 = 0x5cb082;
  FUN_0040b140(&local_1c,puStack_34,puVar1);
  iStack_30 = 0x5cb08a;
  FUN_0040b140(&local_18);
  iStack_30 = 0x5cb092;
  FUN_0040b140(&local_14);
  iStack_30 = 0x5cb09a;
  FUN_0040b140(&local_10);
  iStack_30 = 0x5cb0ad;
  FUN_00408e44(&local_c,&DAT_005c0e3c,2);
  return;
}
