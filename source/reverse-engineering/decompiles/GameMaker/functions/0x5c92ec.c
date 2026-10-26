// rea decompile_all
// name: FUN_005c92ec
// address: 0x5c92ec
// body: available
// range: 0x5c92ec-0x5c9371 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c9313 (push 0x5c9372 followed by fs-segment stack chaining); handler 0x5c9372 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c92ec(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;

  puStack_30 = &stack0xfffffffc;
  uStack_8 = 0;
  local_10 = 0;
  local_14 = (int *)0x0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  local_24 = 0;
  puStack_34 = &LAB_005c9372;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_c = param_3;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_14);
  piVar2 = local_14;
  FUN_00429c6c(&local_24,param_2,0xfc);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_24,&local_10);
  FUN_0040b184(local_c,local_10,&DAT_005c9380);
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_005c9379;
  puStack_34 = (undefined1 *)0x5c9361;
  FUN_004249e8(&local_24,uStack_38,puVar1);
  puStack_34 = (undefined1 *)0x5c9369;
  FUN_0040b140(&local_14);
  puStack_34 = (undefined1 *)0x5c9371;
  FUN_0040b140(&local_10);
  return;
}
