// rea decompile_all
// name: FUN_0052a9c8
// address: 0x52a9c8
// body: available
// range: 0x52a9c8-0x52ac23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052a9c8(int param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined2 local_18;
  int local_14;

  cVar2 = FUN_00527f54(param_1);
  if ((cVar2 == '\0') && (*(char *)(param_1 + 0x34) != '\0')) {
    cVar2 = FUN_0052b664(*(undefined4 *)(param_1 + 0x38));
    local_30 = 0;
    uVar4 = FUN_005281b8(param_1,3);
    local_28 = (uVar4 & 0xffff) - 1;
    local_2c = 0;
    uVar4 = FUN_005281b8(param_1,4);
    uVar4 = uVar4 & 0xffff;
    local_24 = uVar4 - 1;
    bVar1 = true;
    while ((local_30 <= local_28 && (bVar1))) {
      uVar9 = uVar4;
      iVar10 = local_2c;
      if (-1 < local_24) {
        do {
          cVar3 = FUN_00529008(param_1,local_30,iVar10);
          if (cVar3 != cVar2) {
            bVar1 = false;
            break;
          }
          uVar9 = uVar9 - 1;
          iVar10 = iVar10 + 1;
        } while (uVar9 != 0);
      }
      if (bVar1) {
        local_30 = local_30 + 1;
      }
    }
    bVar1 = true;
    while ((local_30 <= local_28 && (bVar1))) {
      uVar9 = uVar4;
      iVar10 = local_2c;
      if (-1 < local_24) {
        do {
          cVar3 = FUN_00529008(param_1,local_28,iVar10);
          if (cVar3 != cVar2) {
            bVar1 = false;
            break;
          }
          uVar9 = uVar9 - 1;
          iVar10 = iVar10 + 1;
        } while (uVar9 != 0);
      }
      if (bVar1) {
        local_28 = local_28 + -1;
      }
    }
    if (local_30 <= local_28) {
      bVar1 = true;
      while ((local_2c <= local_24 && (bVar1))) {
        if (local_30 <= local_28) {
          iVar5 = (local_28 - local_30) + 1;
          iVar10 = local_30;
          do {
            cVar3 = FUN_00529008(param_1,iVar10,local_2c);
            if (cVar3 != cVar2) {
              bVar1 = false;
              break;
            }
            iVar10 = iVar10 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (bVar1) {
          local_2c = local_2c + 1;
        }
      }
      bVar1 = true;
      while ((local_2c <= local_24 && (bVar1))) {
        if (local_30 <= local_28) {
          iVar5 = (local_28 - local_30) + 1;
          iVar10 = local_30;
          do {
            cVar3 = FUN_00529008(param_1,iVar10,local_24);
            if (cVar3 != cVar2) {
              bVar1 = false;
              break;
            }
            iVar10 = iVar10 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (bVar1) {
          local_24 = local_24 + -1;
        }
      }
    }
    if ((local_28 < local_30) || (local_24 < local_2c)) {
      FUN_00527f04(param_1);
    }
    else {
      iVar8 = (local_28 - local_30) + 1;
      iVar5 = (local_24 - local_2c) + 1;
      uVar6 = (undefined4)((longlong)iVar8 * (longlong)iVar5);
      iVar7 = FUN_00404324(uVar6,(int)((ulonglong)((longlong)iVar8 * (longlong)iVar5) >> 0x20));
      uVar4 = FUN_005281b8(param_1,3);
      iVar11 = (uVar4 & 0xffff) * local_2c + *(int *)(param_1 + 0x18) + local_30;
      iVar10 = iVar5;
      local_14 = iVar7;
      if (-1 < local_24 - local_2c) {
        do {
          FUN_00404514(iVar11,local_14,iVar8);
          uVar4 = FUN_005281b8(param_1,3);
          iVar11 = iVar11 + (uVar4 & 0xffff);
          iVar10 = iVar10 + -1;
          local_14 = local_14 + iVar8;
        } while (iVar10 != 0);
      }
      FUN_00528100(param_1);
      *(int *)(param_1 + 0x18) = iVar7;
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
      *(short *)(param_1 + 0x25) = *(short *)(param_1 + 0x25) + (short)local_30;
      *(short *)(param_1 + 0x27) = *(short *)(param_1 + 0x27) + (short)local_2c;
      *(short *)(param_1 + 0x29) = (short)iVar8;
      local_18 = (undefined2)iVar5;
      *(undefined2 *)(param_1 + 0x2b) = local_18;
      FUN_0052815c(param_1);
      FUN_00528174(param_1);
    }
  }
  return;
}
