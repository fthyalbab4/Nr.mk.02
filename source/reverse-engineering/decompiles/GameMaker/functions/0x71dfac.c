// rea decompile_all
// name: FUN_0071dfac
// address: 0x71dfac
// body: available
// range: 0x71dfac-0x71e132 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71dfd8 (push 0x71e133 followed by fs-segment stack chaining); handler 0x71e133 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071dfac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_20 = 0;
  local_c = 0;
  puStack_30 = (undefined1 *)0x71dfcd;
  local_10 = param_1;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_34 = &LAB_0071e133;
  puStack_38 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_38;
  puStack_30 = &stack0xfffffffc;
  iVar2 = FUN_004ad490(param_3);
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    local_14 = iVar2;
    do {
      FUN_0040839c(&local_c,local_8,&DAT_0071e150);
      iVar2 = FUN_004ad3b4(param_3,iVar4);
      local_1c = *(int *)(iVar2 + 8);
      iVar2 = 0;
      if (local_1c != 0) {
        iVar2 = *(int *)(local_1c + -4);
      }
      if (0 < iVar2) {
        iVar5 = 1;
        local_18 = iVar2;
        do {
          iVar2 = FUN_004ad3b4(param_3,iVar4);
          if (*(short *)(*(int *)(iVar2 + 8) + -2 + iVar5 * 2) == 0x2f) {
            puStack_38 = &DAT_0071e150;
            FUN_00408480(&local_c,3);
          }
          else {
            iVar2 = FUN_004ad3b4(param_3,iVar4);
            if (*(short *)(*(int *)(iVar2 + 8) + -2 + iVar5 * 2) == 0x5c) {
              puStack_38 = &DAT_0071e160;
              FUN_00408480(&local_c,3);
            }
            else {
              iVar2 = FUN_004ad3b4(param_3,iVar4);
              FUN_00408034(&local_20,*(undefined2 *)(*(int *)(iVar2 + 8) + -2 + iVar5 * 2));
              FUN_004082dc(&local_c,local_20);
            }
          }
          iVar5 = iVar5 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      iVar2 = FUN_004ad3b4(param_3,iVar4);
      if (*(int *)(*(int *)(iVar2 + 0xc) + 4) == 3) {
        FUN_0052f168(local_10,local_c);
        iVar2 = FUN_004ad3b4(param_3,iVar4);
        FUN_0052f12c(local_10,*(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xc));
      }
      else {
        uVar3 = FUN_004ad3b4(param_3,iVar4);
        FUN_0071dfac(local_10,local_c,uVar3);
      }
      iVar4 = iVar4 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = puStack_38;
  puStack_30 = &LAB_0071e13a;
  puStack_34 = (undefined1 *)0x71e125;
  thunk_FUN_00406e5c(&local_20,puStack_38,puVar1);
  puStack_34 = (undefined1 *)0x71e132;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
