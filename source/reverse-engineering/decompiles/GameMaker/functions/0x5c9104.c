// rea decompile_all
// name: FUN_005c9104
// address: 0x5c9104
// body: available
// range: 0x5c9104-0x5c9194 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c9121 (push 0x5c9195 followed by fs-segment stack chaining); handler 0x5c9195 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c9104(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = (int *)0x0;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  local_20 = 0;
  puStack_30 = &LAB_005c9195;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_10);
  piVar2 = local_10;
  FUN_00429c6c(&local_20,param_2,0xfc);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_20,&local_c);
  FUN_0040b184(&local_8,local_c,&DAT_005c91a4);
  FUN_005c91b4(param_1,local_8);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005c919c;
  puStack_30 = (undefined1 *)0x5c9179;
  FUN_004249e8(&local_20,uStack_34,puVar1);
  puStack_30 = (undefined1 *)0x5c9181;
  FUN_0040b140(&local_10);
  puStack_30 = (undefined1 *)0x5c9194;
  FUN_00408e44(&local_c,&DAT_005c0e3c,2);
  return;
}
