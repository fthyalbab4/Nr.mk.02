// rea decompile_all
// name: FUN_0062a8d4
// address: 0x62a8d4
// body: available
// range: 0x62a8d4-0x62a94e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62a904 (push 0x62a94f followed by fs-segment stack chaining); handler 0x62a94f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062a8d4(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_FS_OFFSET;
  undefined4 *puStack_38;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c [6];

  puVar3 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_2c = (undefined1 *)0x62a8f9;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_30 = &LAB_0062a94f;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  puStack_2c = &stack0xfffffffc;
  if ((DAT_006887dc != 0) && (puStack_2c = &stack0xfffffffc, DAT_006887e0 != 0)) {
    puStack_38 = local_1c;
    puStack_2c = &stack0xfffffffc;
    FUN_00629740(DAT_006887e4,DAT_006887e8,param_1);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = (int)puStack_38;
  puStack_30 = &LAB_0062a956;
  iStack_34 = 0x62a94e;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
