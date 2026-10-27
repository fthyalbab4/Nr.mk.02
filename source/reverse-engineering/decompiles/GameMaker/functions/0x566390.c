// rea decompile_all
// name: FUN_00566390
// address: 0x566390
// body: available
// range: 0x566390-0x566509 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5663af (push 0x56650a followed by fs-segment stack chaining); handler 0x56650a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00566390(int param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_18;
  int local_14;
  int local_10;
  int local_8;

  puStack_28 = (undefined1 *)0x5663a4;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_2c = &LAB_0056650a;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar4 = local_8;
  puStack_28 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_28 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_28 = &stack0xfffffffc;
    iVar4 = FUN_00407048(&local_8,local_8);
  }
  iVar6 = 0;
  if (iVar4 != 0) {
    iVar6 = *(int *)(iVar4 + -4);
  }
  if (3 < iVar6) {
    local_10 = -1;
    iVar6 = -1;
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar4 = FUN_00407048(&local_8,local_8);
    }
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = *(int *)(iVar4 + -4);
    }
    do {
      cVar3 = FUN_00565bb8(local_8,iVar5);
      iVar4 = iVar6;
      if ((cVar3 == '\x06') && (iVar4 = iVar5, local_10 < 0)) {
        iVar4 = iVar6;
        local_10 = iVar5;
      }
      iVar5 = iVar5 + -1;
      if (iVar5 < 1) {
        bVar1 = true;
      }
      else {
        local_14 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          local_14 = FUN_00407048(&local_8,local_8);
        }
        local_18 = local_14;
        if (local_14 != 0) {
          local_18 = *(int *)(local_14 + -4);
        }
        bVar1 = iVar5 < local_18 + -4;
      }
    } while ((!bVar1) && (iVar6 = iVar4, iVar4 < 0));
    if (iVar4 < 0) {
      iVar4 = local_10;
    }
    if (0 < iVar4) {
      iVar6 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar6 = FUN_00407048(&local_8,local_8);
      }
      iVar5 = 0;
      if (iVar6 != 0) {
        iVar5 = *(int *)(iVar6 + -4);
      }
      if (((iVar5 != iVar4) && (local_8 != 0)) && (*(short *)(local_8 + -10) != 2)) {
        FUN_00407048(&local_8,local_8);
      }
    }
  }
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00566511;
  puStack_2c = (undefined1 *)0x566509;
  thunk_FUN_00406e5c(&local_8,uStack_30,puVar2);
  return;
}
