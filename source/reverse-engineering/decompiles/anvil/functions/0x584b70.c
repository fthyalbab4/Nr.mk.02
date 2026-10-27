// rea decompile_all
// name: FUN_00584b70
// address: 0x584b70
// body: available
// range: 0x584b70-0x584c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x584ba8 (push 0x584c60 followed by fs-segment stack chaining); handler 0x584c60 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00584b70(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_24 [7];
  undefined4 local_8;

  puVar3 = local_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_30 = (undefined1 *)0x584b8f;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_30 = (undefined1 *)0x584b9d;
  FUN_0040923c(local_24,&DAT_00615f70);
  puStack_34 = &LAB_00584c60;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  iVar2 = FUN_00409c34(DAT_0084efec);
  if (DAT_00686b04 <= iVar2) {
    FUN_00409dfc(&DAT_0084efec,&DAT_00584b1c,1,DAT_00686b04 + 10);
    FUN_00409dfc(&DAT_0084eff0,&DAT_00584b48,1,DAT_00686b04 + 10);
  }
  DAT_00686b04 = DAT_00686b04 + 1;
  FUN_00408194(DAT_0084efec + -4 + DAT_00686b04 * 4,local_8);
  FUN_00409360(DAT_0084eff0 + -0x18 + DAT_00686b04 * 0x18,local_24,&DAT_00615f70);
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00584c67;
  puStack_34 = (undefined1 *)0x584c57;
  FUN_004090d0(local_24,&DAT_00615f70,puVar1);
  puStack_34 = (undefined1 *)0x584c5f;
  thunk_FUN_004072d8(&local_8);
  return;
}
