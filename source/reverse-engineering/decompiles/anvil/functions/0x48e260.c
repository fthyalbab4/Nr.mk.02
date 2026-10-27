// rea decompile_all
// name: FUN_0048e260
// address: 0x48e260
// body: available
// range: 0x48e260-0x48e2f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48e285 (push 0x48e354 followed by fs-segment stack chaining); handler 0x48e354 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48e2ad (push 0x48e2f7 followed by fs-segment stack chaining); handler 0x48e2f7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048e260(int *param_1,undefined4 param_2)

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
  puStack_28 = (undefined1 *)0x48e27a;
  local_8 = param_2;
  FUN_00409e6c(param_2);
  puStack_2c = &LAB_0048e354;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puStack_34 = (undefined1 *)0x48e294;
  puStack_28 = &stack0xfffffffc;
  uVar2 = FUN_00409c34(local_8);
  puStack_34 = (undefined1 *)0x48e29f;
  iVar3 = FUN_0043c834(param_1);
  puStack_38 = &LAB_0048e2f7;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_00409dfc(&local_c,&DAT_00410758,1,uVar2);
  (**(code **)(*param_1 + 0xc))(param_1,local_c,uVar2);
  puVar1 = puStack_34;
  *in_FS_OFFSET = iStack_3c;
  puStack_34 = &LAB_0048e2fe;
  puStack_38 = (undefined1 *)(iVar3 >> 0x1f);
  iStack_3c = iVar3;
  FUN_0043c854(param_1,puStack_38,puVar1);
  return;
}
