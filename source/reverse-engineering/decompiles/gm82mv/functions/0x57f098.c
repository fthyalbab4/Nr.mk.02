// rea decompile_all
// name: FUN_0057f098
// address: 0x57f098
// body: available
// range: 0x57f098-0x57f21c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57f0c1 (push 0x57f21d followed by fs-segment stack chaining); handler 0x57f21d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057f098(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  double local_1c;
  double local_14;
  undefined4 local_8;

  local_28 = 0;
  puStack_3c = (undefined1 *)0x57f0b6;
  local_24 = param_2;
  local_20 = param_3;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_2);
  puStack_40 = &LAB_0057f21d;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  FUN_0057ebcc(local_24,local_8,&local_28);
  FUN_00404874();
  local_1c = (double)in_ST0;
  FUN_00404864();
  local_14 = (double)in_ST1;
  iVar2 = local_28;
  if ((local_28 != 0) && (*(short *)(local_28 + -10) != 1)) {
    iVar2 = FUN_004074b8(&local_28,local_28,0);
  }
  local_2c = 0;
  if (iVar2 != 0) {
    local_2c = *(int *)(iVar2 + -4);
  }
  if (0 < local_2c) {
    iVar2 = 1;
    do {
      iVar3 = local_28;
      if ((local_28 != 0) && (*(short *)(local_28 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_28,local_28,0);
      }
      FUN_0057eed0(*(undefined1 *)(iVar3 + -1 + iVar2));
      iVar3 = local_28;
      if ((local_28 != 0) && (*(short *)(local_28 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_28,local_28,0);
      }
      FUN_0057e544(local_8,*(undefined1 *)(iVar3 + -1 + iVar2));
      iVar3 = local_28;
      if ((local_28 != 0) && (*(short *)(local_28 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_28,local_28,0);
      }
      FUN_0057e544(local_8,*(undefined1 *)(iVar3 + -1 + iVar2));
      iVar2 = iVar2 + 1;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0057f224;
  puStack_40 = (undefined1 *)0x57f214;
  FUN_004072d8(&local_28,uStack_44,puVar1);
  puStack_40 = (undefined1 *)0x57f21c;
  thunk_FUN_004072d8(&local_24);
  return;
}
