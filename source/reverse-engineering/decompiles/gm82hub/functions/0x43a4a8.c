// rea decompile_all
// name: FUN_0043a4a8
// address: 0x43a4a8
// body: available
// range: 0x43a4a8-0x43a5bf inclusive
// range: 0x43a5d5-0x43a5ea inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43a4c7 (push 0x43a5eb followed by fs-segment stack chaining); handler 0x43a5eb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43a545 (push 0x43a5c0 followed by fs-segment stack chaining); handler 0x43a5c0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a4a8(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  bool bVar6;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_0043a5eb;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x43a4d8;
  local_c = param_2;
  local_8 = param_1;
  FUN_00408194(param_2,*(undefined4 *)(param_1 + 0x14));
  puStack_34 = (undefined1 *)0x43a4e4;
  piVar2 = (int *)FUN_00406268(local_8);
  if ((*local_c == 0) && (piVar2 != (int *)0x0)) {
    bVar6 = *(int *)(*piVar2 + -0x48) == 0;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    puStack_34 = (undefined1 *)0x43a515;
    iVar3 = FUN_0042ba48(*(undefined4 *)(*piVar2 + -0x48));
    if ((iVar3 != 0) && (*(short *)(iVar3 + 8) != 0)) {
      puStack_34 = (undefined1 *)0x43a537;
      local_10 = FUN_00404324(*(short *)(iVar3 + 8) * 4);
      puStack_38 = &LAB_0043a5c0;
      uStack_3c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_3c;
      puStack_34 = &stack0xfffffffc;
      FUN_0042bde8(*(undefined4 *)(*piVar2 + -0x48),local_10);
      iVar3 = (int)*(short *)(iVar3 + 8);
      if (-1 < iVar3 + -1) {
        iVar5 = 0;
        do {
          local_14 = *(undefined4 **)(local_10 + iVar5 * 4);
          if (**(char **)*local_14 == '\a') {
            iVar4 = FUN_0042be6c(piVar2,*(undefined4 *)(local_10 + iVar5 * 4));
            if (iVar4 == local_8) {
              FUN_0042b9f8(*(undefined4 *)(local_10 + iVar5 * 4),&local_18);
              FUN_00408194(local_8 + 0x14,local_18);
            }
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      puVar1 = puStack_34;
      *in_FS_OFFSET = uStack_3c;
      puStack_34 = &DAT_0043a5c7;
      puStack_38 = (undefined1 *)0x43a5bf;
      FUN_00404340(local_10,uStack_3c,puVar1);
      return;
    }
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0043a5f2;
  puStack_2c = (undefined1 *)0x43a5ea;
  thunk_FUN_004072d8(&local_18,uStack_30,puVar1);
  return;
}
