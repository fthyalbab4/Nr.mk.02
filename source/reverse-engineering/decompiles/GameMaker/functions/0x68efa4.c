// rea decompile_all
// name: FUN_0068efa4
// address: 0x68efa4
// body: available
// range: 0x68efa4-0x68f3c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068efa4(int param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar10;
  int iVar11;
  int iVar12;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar13;
  float local_34;
  int local_28;
  int local_24;

  iVar2 = *param_3;
  iVar3 = param_3[1];
  iVar4 = FUN_00462a64(param_2);
  FUN_0045b850(*(undefined4 *)(iVar4 + 0x44),0xffffff);
  iVar4 = FUN_00462a64(param_2);
  FUN_0045b954(*(undefined4 *)(iVar4 + 0x44),0xe);
  iVar4 = FUN_00462a64(param_2);
  FUN_0045b9a4(*(undefined4 *)(iVar4 + 0x44),1);
  if (*(char *)(*(int *)(param_1 + 0x61c) + 0x1c) == '\0') {
    uVar5 = FUN_00404878();
    if (extraout_EDX_01 == 0) {
      if (uVar5 < 8) {
        return;
      }
    }
    else if (extraout_EDX_01 < 0) {
      return;
    }
    uVar5 = FUN_00404878();
    if (extraout_EDX_02 == 0) {
      if (uVar5 < 8) {
        return;
      }
    }
    else if (extraout_EDX_02 < 0) {
      return;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x61c) + 0x18);
    fVar1 = *(float *)(param_1 + 0x165c);
    local_34 = 0.0;
    iVar13 = FUN_00410538();
    iVar11 = FUN_00410538();
    for (; local_34 < (float)iVar11; local_34 = local_34 + (float)iVar4 * fVar1) {
      iVar7 = FUN_00410538();
      piVar9 = (int *)FUN_00462a64(param_2);
      (**(code **)(*piVar9 + 0x5c))(piVar9,iVar7 - iVar2,-iVar3);
      iVar7 = FUN_00410538();
      piVar9 = (int *)FUN_00462a64(param_2);
      (**(code **)(*piVar9 + 0x58))(piVar9,iVar7 - iVar2,iVar13 - iVar3);
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x61c) + 0x14);
    fVar1 = *(float *)(param_1 + 0x165c);
    for (local_34 = 0.0; local_34 < (float)iVar13; local_34 = local_34 + (float)iVar4 * fVar1) {
      piVar9 = (int *)FUN_00462a64(param_2);
      iVar7 = FUN_00404878();
      (**(code **)(*piVar9 + 0x5c))(piVar9,-iVar2,iVar7 - iVar3);
      piVar9 = (int *)FUN_00462a64(param_2);
      FUN_00404878();
      (**(code **)(*piVar9 + 0x58))(piVar9,iVar11 - iVar2,iVar7 - iVar3);
    }
  }
  else {
    uVar5 = FUN_00404878();
    if (extraout_EDX == 0) {
      if (uVar5 < 8) {
        return;
      }
    }
    else if (extraout_EDX < 0) {
      return;
    }
    uVar5 = FUN_00404878();
    if (extraout_EDX_00 == 0) {
      if (uVar5 < 8) {
        return;
      }
    }
    else if (extraout_EDX_00 < 0) {
      return;
    }
    uVar5 = FUN_00410538();
    uVar6 = FUN_00410538();
    local_28 = FUN_00410538();
    if (-1 < local_28 + -1) {
      iVar4 = 0;
      do {
        local_24 = FUN_00410538();
        if (-1 < local_24 + -1) {
          iVar13 = 0;
          do {
            iVar7 = FUN_00410538();
            iVar7 = iVar7 - iVar2;
            iVar8 = FUN_00410538();
            iVar8 = iVar8 - iVar3;
            piVar9 = (int *)FUN_00462a64(param_2);
            iVar10 = (int)uVar6 >> 1;
            iVar11 = iVar10;
            if (iVar10 < 0) {
              iVar11 = iVar10 + (uint)((uVar6 & 1) != 0);
            }
            (**(code **)(*piVar9 + 0x5c))(piVar9,iVar7,iVar8 - iVar11,param_1,iVar4,iVar13);
            piVar9 = (int *)FUN_00462a64(param_2);
            iVar12 = (int)uVar5 >> 1;
            iVar11 = iVar12;
            if (iVar12 < 0) {
              iVar11 = iVar12 + (uint)((uVar5 & 1) != 0);
            }
            (**(code **)(*piVar9 + 0x58))(piVar9,iVar11 + iVar7,iVar8);
            piVar9 = (int *)FUN_00462a64(param_2);
            iVar11 = iVar10;
            if (iVar10 < 0) {
              iVar11 = iVar10 + (uint)((uVar6 & 1) != 0);
            }
            (**(code **)(*piVar9 + 0x58))(piVar9,iVar7,iVar11 + iVar8);
            piVar9 = (int *)FUN_00462a64(param_2);
            if (iVar12 < 0) {
              iVar12 = iVar12 + (uint)((uVar5 & 1) != 0);
            }
            (**(code **)(*piVar9 + 0x58))(piVar9,iVar7 - iVar12,iVar8);
            piVar9 = (int *)FUN_00462a64(param_2);
            if (iVar10 < 0) {
              iVar10 = iVar10 + (uint)((uVar6 & 1) != 0);
            }
            (**(code **)(*piVar9 + 0x58))(piVar9,iVar7,iVar8 - iVar10);
            iVar13 = iVar13 + 1;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
        }
        iVar4 = iVar4 + 1;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
  }
  return;
}
