// rea decompile_all
// name: FUN_0057edc8
// address: 0x57edc8
// body: available
// range: 0x57edc8-0x57eebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57edf1 (push 0x57eec0 followed by fs-segment stack chaining); handler 0x57eec0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057edc8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;

  local_18 = 0;
  puStack_2c = (undefined1 *)0x57ede6;
  local_14 = param_2;
  local_10 = param_3;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_2);
  puStack_30 = &LAB_0057eec0;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_0057ebcc(local_14,local_8,&local_18);
  iVar2 = local_18;
  if ((local_18 != 0) && (*(short *)(local_18 + -10) != 1)) {
    iVar2 = FUN_004074b8(&local_18,local_18,0);
  }
  local_1c = 0;
  if (iVar2 != 0) {
    local_1c = *(int *)(iVar2 + -4);
  }
  if (0 < local_1c) {
    iVar2 = 1;
    do {
      iVar3 = local_18;
      if ((local_18 != 0) && (*(short *)(local_18 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_18,local_18,0);
      }
      FUN_0057ec88(*(undefined1 *)(iVar3 + -1 + iVar2));
      iVar3 = local_18;
      if ((local_18 != 0) && (*(short *)(local_18 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_18,local_18,0);
      }
      FUN_0057e544(local_8,*(undefined1 *)(iVar3 + -1 + iVar2));
      iVar2 = iVar2 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0057eec7;
  puStack_30 = (undefined1 *)0x57eeb7;
  FUN_004072d8(&local_18,uStack_34,puVar1);
  puStack_30 = (undefined1 *)0x57eebf;
  thunk_FUN_004072d8(&local_14);
  return;
}
