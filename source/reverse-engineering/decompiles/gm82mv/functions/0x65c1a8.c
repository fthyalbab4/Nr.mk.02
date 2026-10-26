// rea decompile_all
// name: FUN_0065c1a8
// address: 0x65c1a8
// body: available
// range: 0x65c1a8-0x65c293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65c1f2 (push 0x65c294 followed by fs-segment stack chaining); handler 0x65c294 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065c1a8(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_34 [6];
  undefined4 local_1c [6];

  puVar2 = local_34;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  puStack_44 = (undefined1 *)0x65c1d9;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_44 = (undefined1 *)0x65c1e7;
  FUN_0040923c(local_34,&DAT_00615f70);
  puStack_48 = &LAB_0065c294;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  iVar1 = FUN_00409c34(*(undefined4 *)(param_1 + 8));
  if (iVar1 <= *(int *)(param_1 + 4)) {
    FUN_00409dfc(param_1 + 8,&DAT_00659114,1,*(int *)(param_1 + 4) + 0x10);
    FUN_00409dfc(param_1 + 0xc,&DAT_00659158,1,*(int *)(param_1 + 4) + 0x10);
  }
  FUN_00409360(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0x18,local_1c,&DAT_00615f70);
  FUN_00409360(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 4) * 0x18,local_34,&DAT_00615f70);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_0065c29b;
  puStack_48 = (undefined1 *)0x65c293;
  FUN_00409120(local_34,&DAT_00615f70,2);
  return;
}
