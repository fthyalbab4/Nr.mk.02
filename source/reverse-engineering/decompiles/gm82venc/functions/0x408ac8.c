// rea decompile_all
// name: FUN_00408ac8
// address: 0x408ac8
// body: available
// range: 0x408ac8-0x408be5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x408aec (push 0x408be6 followed by fs-segment stack chaining); handler 0x408be6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408ac8(int param_1,int *param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_c;
  int local_8;

  puStack_24 = (undefined1 *)0x408ae1;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_28 = &LAB_00408be6;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar2 = local_8;
  puStack_24 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_24 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_24 = &stack0xfffffffc;
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (0 < iVar3) {
    iVar2 = *param_2;
    if ((iVar2 != 0) && (*(short *)(iVar2 + -10) != 2)) {
      iVar2 = FUN_00407488(param_2,*param_2);
    }
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + -4);
    }
    if (param_3 < 1) {
      local_c = 0;
    }
    else {
      local_c = param_3 + -1;
      if (iVar4 < param_3 + -1) {
        local_c = iVar4;
      }
    }
    bVar5 = *param_2 == local_8;
    if (iVar3 + iVar4 < 0) {
      FUN_00405ea4();
    }
    FUN_00408520(param_2,iVar3 + iVar4);
    if (local_c < iVar4) {
      FUN_00404514(*param_2 + local_c * 2,*param_2 + (local_c + iVar3) * 2,(iVar4 - local_c) * 2);
    }
    if (bVar5) {
      FUN_00404514(*param_2,*param_2 + local_c * 2,iVar3 * 2);
    }
    else {
      FUN_00404514(local_8,*param_2 + local_c * 2,iVar3 * 2);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00408bed;
  puStack_28 = (undefined1 *)0x408be5;
  thunk_FUN_004072d8(&local_8,uStack_2c,puVar1);
  return;
}
