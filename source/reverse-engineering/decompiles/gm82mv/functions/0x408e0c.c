// rea decompile_all
// name: FUN_00408e0c
// address: 0x408e0c
// body: available
// range: 0x408e0c-0x408fe9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x408e2c (push 0x408fea followed by fs-segment stack chaining); handler 0x408fea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408e0c(int *param_1,ushort param_2,char param_3)

{
  undefined1 *puVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *in_FS_OFFSET;
  bool bVar10;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_10;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_00408fea;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uVar2 = DAT_0068a8d0;
  if (*param_1 != 0) {
    uVar2 = *(ushort *)(*param_1 + -0xc);
  }
  if (param_2 == uVar2) {
    bVar10 = true;
    puStack_24 = &stack0xfffffffc;
  }
  else {
    iVar4 = *param_1;
    puVar1 = &stack0xfffffffc;
    if ((iVar4 != 0) && (puVar1 = &stack0xfffffffc, *(short *)(iVar4 + -10) != 1)) {
      iVar4 = FUN_004074b8(param_1,*param_1,0);
      puVar1 = puStack_24;
    }
    puStack_24 = puVar1;
    iVar8 = 0;
    if (iVar4 != 0) {
      iVar8 = *(int *)(iVar4 + -4);
    }
    bVar10 = iVar8 == 0;
  }
  if (!bVar10) {
    if (param_3 == '\0') {
      thunk_FUN_00407af8(param_1);
    }
    else {
      if (*param_1 == 0) {
        sVar3 = 1;
      }
      else {
        sVar3 = *(short *)(*param_1 + -10);
      }
      if (sVar3 == 1) {
        FUN_004083c0(&local_8,*param_1);
      }
      else {
        FUN_004081e8(&local_8,*param_1);
      }
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar4 = FUN_00407488(&local_8,local_8);
      }
      uVar9 = 0;
      if (iVar4 != 0) {
        uVar9 = *(undefined4 *)(iVar4 + -4);
      }
      uVar5 = (uint)param_2;
      uVar6 = FUN_00408220(local_8);
      iVar4 = FUN_0040740c(0,0,uVar6,uVar5,uVar9);
      FUN_00407c34(param_1,iVar4,0);
      if (0 < iVar4) {
        iVar4 = *param_1;
        if ((iVar4 != 0) && (*(short *)(iVar4 + -10) != 1)) {
          iVar4 = FUN_004074b8(param_1,*param_1,0);
        }
        uVar9 = 0;
        if (iVar4 != 0) {
          uVar9 = *(undefined4 *)(iVar4 + -4);
        }
        local_10 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          local_10 = FUN_00407488(&local_8,local_8);
        }
        if (local_10 != 0) {
          local_10 = *(int *)(local_10 + -4);
        }
        uVar5 = (uint)param_2;
        uVar6 = FUN_00408220(local_8);
        uVar7 = FUN_00407ae0(*param_1);
        FUN_0040740c(uVar7,uVar9,uVar6,uVar5,local_10);
      }
    }
    iVar4 = *param_1;
    if ((iVar4 != 0) && (*(short *)(iVar4 + -10) != 1)) {
      iVar4 = FUN_004074b8(param_1,*param_1,0);
    }
    iVar8 = 0;
    if (iVar4 != 0) {
      iVar8 = *(int *)(iVar4 + -4);
    }
    if (0 < iVar8) {
      *(ushort *)(*param_1 + -0xc) = param_2;
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00408ff1;
  puStack_28 = (undefined1 *)0x408fe9;
  thunk_FUN_004072d8(&local_8,uStack_2c,puVar1);
  return;
}
