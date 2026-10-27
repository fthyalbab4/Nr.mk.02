// rea decompile_all
// name: FUN_00566a98
// address: 0x566a98
// body: available
// range: 0x566a98-0x566d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x566acc (push 0x566d3c followed by fs-segment stack chaining); handler 0x566d3c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00566a98(int param_1,undefined4 param_2,undefined2 param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *in_FS_OFFSET;
  undefined4 *puStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined2 local_e;
  undefined4 local_c;
  int local_8;

  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  puStack_50 = (undefined1 *)0x566ac1;
  local_e = param_3;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_54 = &LAB_00566d3c;
  puStack_58 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_58;
  local_14 = 0;
  puStack_50 = &stack0xfffffffc;
  FUN_00407eb8(param_4,local_c);
  iVar5 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar5 = FUN_00407048(&local_8,local_8);
  }
  iVar7 = 0;
  if (iVar5 != 0) {
    iVar7 = *(int *)(iVar5 + -4);
  }
  if (0 < iVar7) {
    local_20 = 1;
    local_24 = iVar7;
    do {
      cVar3 = FUN_00565bb8(local_8,local_20);
      if ((byte)(cVar3 - 1U) < 2) {
        local_1c = FUN_00566728(local_8,local_20);
        local_34 = *param_4;
        local_18 = 0;
        if (local_34 != 0) {
          local_18 = *(int *)(local_34 + -4);
        }
        local_18 = local_18 + 1;
        iVar7 = local_14 + 1;
        iVar5 = 0;
        if (local_34 != 0) {
          iVar5 = *(int *)(local_34 + -4);
        }
        iVar2 = local_18;
        if (iVar7 <= iVar5) {
          local_28 = (iVar5 - iVar7) + 1;
          do {
            iVar5 = local_8;
            if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
              iVar5 = FUN_00407048(&local_8,local_8);
            }
            sVar4 = FUN_0056604c(*(undefined2 *)(iVar5 + -2 + local_20 * 2));
            iVar2 = iVar7;
            if (sVar4 == *(short *)(*param_4 + -2 + iVar7 * 2)) break;
            iVar7 = iVar7 + 1;
            local_28 = local_28 + -1;
            iVar2 = local_18;
          } while (local_28 != 0);
        }
        local_18 = iVar2;
        local_34 = *param_4;
        iVar5 = 0;
        if (local_34 != 0) {
          iVar5 = *(int *)(local_34 + -4);
        }
        if (iVar5 < local_18) {
          iVar5 = local_8;
          if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
            iVar5 = FUN_00407048(&local_8,local_8);
          }
          uVar6 = FUN_0056604c(*(undefined2 *)(iVar5 + -2 + local_20 * 2));
          FUN_00408034(&local_38,uVar6);
          FUN_004082dc(param_4,local_38);
        }
        puStack_58 = &local_3c;
        FUN_0056688c(local_8,*param_4,local_14 + 1);
        FUN_00407eb8(param_4,local_3c);
        local_14 = local_1c;
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  iVar5 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar5 = FUN_00407048(&local_8,local_8);
  }
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = *(undefined4 *)(iVar5 + -4);
  }
  iVar7 = FUN_00566728(local_8,uVar6);
  local_34 = *param_4;
  iVar5 = 0;
  if (local_34 != 0) {
    iVar5 = *(int *)(local_34 + -4);
  }
  if (iVar7 != iVar5) {
    local_2c = *param_4;
    iVar5 = 0;
    if (local_2c != 0) {
      iVar5 = *(int *)(local_2c + -4);
    }
    FUN_0056688c(local_8,*param_4,local_14 + 1,&local_40,local_e,iVar7 - local_14,iVar5 + 1);
    FUN_00407eb8(param_4,local_40);
  }
  local_30 = *param_4;
  iVar5 = 0;
  if (local_30 != 0) {
    iVar5 = *(int *)(local_30 + -4);
  }
  if (0 < iVar5) {
    local_1c = 1;
    local_24 = iVar5;
    do {
      if ((*(short *)(*param_4 + -2 + local_1c * 2) == 0x20) &&
         (cVar3 = FUN_00566864(local_8,local_1c + -1), cVar3 == '\0')) {
        iVar5 = thunk_FUN_004089c0(param_4);
        *(undefined2 *)(iVar5 + -2 + local_1c * 2) = local_e;
      }
      local_1c = local_1c + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  puVar1 = puStack_50;
  *in_FS_OFFSET = (int)puStack_58;
  puStack_50 = &LAB_00566d43;
  puStack_54 = (undefined1 *)0x566d33;
  thunk_FUN_00406e80(&local_40,3,puVar1);
  puStack_54 = (undefined1 *)0x566d3b;
  thunk_FUN_00406e5c(&local_8);
  return;
}
