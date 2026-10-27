// rea decompile_all
// name: FUN_0062aa60
// address: 0x62aa60
// body: available
// range: 0x62aa60-0x62ab12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62aaa0 (push 0x62ab13 followed by fs-segment stack chaining); handler 0x62ab13 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062aa60(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_34 [24];
  undefined4 local_1c [6];

  puVar3 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_54 = (undefined1 *)0x62aa87;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_54 = (undefined1 *)0x62aa95;
  FUN_00408ff8(&local_44,&DAT_00628dc0);
  puStack_58 = &LAB_0062ab13;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_54 = &stack0xfffffffc;
  if ((DAT_006887dc != 0) && (puStack_54 = &stack0xfffffffc, DAT_006887e0 != 0)) {
    local_40 = 1;
    puStack_54 = &stack0xfffffffc;
    local_44 = param_1;
    local_3c = param_2;
    FUN_00409360(local_34,local_1c,&DAT_00615f70);
    uStack_60 = 1;
    FUN_006293bc(DAT_006887e4,DAT_006887e8,&local_44);
  }
  puVar1 = puStack_58;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_0062ab1a;
  uStack_5c = 0x62ab04;
  FUN_004090d0(&local_44,&DAT_00628dc0,puVar1);
  uStack_5c = 0x62ab12;
  FUN_004090d0(local_1c,&DAT_00615f70);
  return;
}
