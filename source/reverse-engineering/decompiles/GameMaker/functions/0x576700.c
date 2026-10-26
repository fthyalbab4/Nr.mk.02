// rea decompile_all
// name: FUN_00576700
// address: 0x576700
// body: available
// range: 0x576700-0x576794 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x576722 (push 0x576795 followed by fs-segment stack chaining); handler 0x576795 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00576700(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  uStack_c = 0;
  uStack_10 = 0;
  uStack_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_00576795;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  local_8 = param_2;
  if (param_2 != 0) {
    FUN_00429c10(&local_18,param_3 - *(int *)(param_1 + 0x2a0),0xfc);
    iVar2 = FUN_00577720(*(undefined4 *)(param_1 + 0x37c),&local_18,0);
    if ((iVar2 == 0) || (puVar1 = puStack_28, *(char *)(iVar2 + 0xc) == '\0')) {
      iVar2 = FUN_00573168(*(undefined4 *)(param_1 + 0x398));
      FUN_005769f4(param_1,*(undefined4 *)(iVar2 + 0x280),1);
      puVar1 = puStack_28;
    }
  }
  puStack_28 = puVar1;
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0057679c;
  puStack_2c = (undefined1 *)0x576794;
  FUN_004249e8(&local_18,uStack_30,puVar1);
  return;
}
