// rea decompile_all
// name: FUN_005024dc
// address: 0x5024dc
// body: available
// range: 0x5024dc-0x502715 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50250e (push 0x502716 followed by fs-segment stack chaining); handler 0x502716 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005024dc(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;

  puStack_4c = &stack0xfffffffc;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_8 = 0;
  puStack_50 = &LAB_00502716;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  local_c = param_3;
  FUN_00408194(param_3,0);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x280) + 0x14))();
  if (param_2 < iVar2) {
    FUN_005027e8(param_1,&local_8);
    iVar2 = (**(code **)(**(int **)(param_1 + 0x280) + 0x18))(*(int **)(param_1 + 0x280),param_2);
    if (param_2 == 0) {
      FUN_00417124(local_8,&local_24);
      FUN_00408678(local_c,local_24,&LAB_00502730);
    }
    else if (iVar2 == *(int *)(param_1 + 0x2f8)) {
      (**(code **)(**(int **)(param_1 + 0x280) + 0xc))(*(int **)(param_1 + 0x280),param_2,&local_28)
      ;
      FUN_00500354(local_8,local_28,local_c);
    }
    else if (iVar2 == *(int *)(param_1 + 0x300)) {
      FUN_00408194(local_c,local_8);
    }
    else {
      local_10 = 0;
      FUN_00417124(local_8,&local_2c);
      local_30 = local_2c;
      uVar3 = 0;
      if (local_2c != 0) {
        uVar3 = *(undefined4 *)(local_2c + -4);
      }
      FUN_00408a54(&local_8,1,uVar3);
      iVar2 = 0;
      while (iVar4 = iVar2, param_2 + 1 != local_10) {
        iVar4 = iVar2 + 1;
        local_14 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          local_14 = FUN_00407488(&local_8,local_8);
        }
        local_18 = local_14;
        if (local_14 != 0) {
          local_18 = *(int *)(local_14 + -4);
        }
        if (local_18 < iVar4) break;
        local_1c = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          local_1c = FUN_00407488(&local_8,local_8);
        }
        if ((*(ushort *)(local_1c + -2 + iVar4 * 2) < 0xd800) ||
           (0xdfff < *(ushort *)(local_1c + -2 + iVar4 * 2))) {
          local_20 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            local_20 = FUN_00407488(&local_8,local_8);
          }
          iVar2 = iVar4;
          if (*(short *)(local_20 + -2 + iVar4 * 2) == 0x5c) {
            local_10 = local_10 + 1;
          }
        }
        else {
          iVar2 = iVar2 + 2;
        }
      }
      FUN_00408984(local_8,1,iVar4 + -1,&local_34);
      uVar3 = local_34;
      FUN_005027e8(param_1,&local_3c);
      FUN_00417124(local_3c,&local_38);
      FUN_00408678(local_c,local_38,uVar3);
    }
  }
  puVar1 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_0050271d;
  puStack_50 = (undefined1 *)0x502700;
  thunk_FUN_004072fc(&local_3c,3,puVar1);
  puStack_50 = (undefined1 *)0x50270d;
  thunk_FUN_004072fc(&local_2c,3);
  puStack_50 = (undefined1 *)0x502715;
  thunk_FUN_004072d8(&local_8);
  return;
}
