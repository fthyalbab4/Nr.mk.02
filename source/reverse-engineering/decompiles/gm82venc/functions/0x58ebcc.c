// rea decompile_all
// name: FUN_0058ebcc
// address: 0x58ebcc
// body: available
// range: 0x58ebcc-0x58eeda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058ebcc(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_20;
  int local_1c;

  if (*(char *)(*(int *)PTR_DAT_0068939c + 0x40) == '\0') {
    iVar9 = 0;
    do {
      FUN_00562a38(iVar9);
      iVar9 = iVar9 + 1;
    } while (iVar9 != 8);
  }
  else {
    iVar9 = 0;
    do {
      iVar4 = FUN_00608fd8(*(undefined4 *)PTR_DAT_0068939c,iVar9);
      if (*(char *)(iVar4 + 4) != '\0') {
        iVar8 = 0;
        if (*(int *)(iVar4 + 0x40) < 100000) {
          cVar3 = FUN_00571eb0(*(int *)(iVar4 + 0x40));
          if (cVar3 == '\0') goto LAB_0058ee47;
          iVar5 = FUN_0060aa64(*(undefined4 *)PTR_DAT_0068939c,*(undefined4 *)(iVar4 + 0x40));
          if (-1 < iVar5 + -1) {
            local_20 = 0;
            do {
              iVar8 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,*(undefined4 *)(iVar4 + 0x40),
                                   local_20);
              if (*(char *)(iVar8 + 0x108) == '\0') break;
              iVar8 = 0;
              local_20 = local_20 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else {
          iVar5 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
          if (-1 < iVar5 + -1) {
            local_20 = 0;
            do {
              iVar8 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,local_20);
              if ((*(char *)(iVar8 + 0x108) == '\0') &&
                 (*(int *)(iVar8 + 4) == *(int *)(iVar4 + 0x40))) break;
              iVar8 = 0;
              local_20 = local_20 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        if (iVar8 != 0) {
          iVar8 = *(int *)(iVar4 + 8);
          local_1c = *(int *)(iVar4 + 0xc);
          iVar6 = FUN_004048b8();
          iVar7 = FUN_004048b8();
          iVar5 = *(int *)(iVar4 + 0x30);
          uVar1 = *(uint *)(iVar4 + 0x10);
          if (iVar5 * 2 < (int)uVar1) {
            if (iVar6 - iVar5 < *(int *)(iVar4 + 8)) {
              iVar8 = iVar6 - *(int *)(iVar4 + 0x30);
            }
            else if ((int)(*(int *)(iVar4 + 8) + uVar1) < iVar6 + iVar5) {
              iVar8 = (iVar6 + *(int *)(iVar4 + 0x30)) - uVar1;
            }
          }
          else {
            iVar8 = (int)uVar1 >> 1;
            if (iVar8 < 0) {
              iVar8 = iVar8 + (uint)((uVar1 & 1) != 0);
            }
            iVar8 = iVar6 - iVar8;
          }
          uVar2 = *(uint *)(iVar4 + 0x14);
          if (*(int *)(iVar4 + 0x34) * 2 < (int)uVar2) {
            if (iVar7 - *(int *)(iVar4 + 0x34) < *(int *)(iVar4 + 0xc)) {
              local_1c = iVar7 - *(int *)(iVar4 + 0x34);
            }
            else if ((int)(*(int *)(iVar4 + 0xc) + uVar2) < iVar7 + *(int *)(iVar4 + 0x34)) {
              local_1c = (iVar7 + *(int *)(iVar4 + 0x34)) - uVar2;
            }
          }
          else {
            local_1c = (int)uVar2 >> 1;
            if (local_1c < 0) {
              local_1c = local_1c + (uint)((uVar2 & 1) != 0);
            }
            local_1c = iVar7 - local_1c;
          }
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          if (*(int *)(*(int *)PTR_DAT_0068939c + 0xc) < (int)(uVar1 + iVar8)) {
            iVar8 = *(int *)(*(int *)PTR_DAT_0068939c + 0xc) - uVar1;
          }
          if (local_1c < 0) {
            local_1c = 0;
          }
          if (*(int *)(*(int *)PTR_DAT_0068939c + 0x10) < (int)(local_1c + uVar2)) {
            local_1c = *(int *)(*(int *)PTR_DAT_0068939c + 0x10) - uVar2;
          }
          if (-1 < *(int *)(iVar4 + 0x38)) {
            iVar5 = *(int *)(iVar4 + 8);
            if ((iVar8 < iVar5) && (*(int *)(iVar4 + 0x38) < iVar5 - iVar8)) {
              iVar8 = iVar5 - *(int *)(iVar4 + 0x38);
            }
            iVar5 = *(int *)(iVar4 + 8);
            if ((iVar5 < iVar8) && (*(int *)(iVar4 + 0x38) < iVar8 - iVar5)) {
              iVar8 = iVar5 + *(int *)(iVar4 + 0x38);
            }
          }
          if (-1 < *(int *)(iVar4 + 0x3c)) {
            iVar5 = *(int *)(iVar4 + 0xc);
            if ((local_1c < iVar5) && (*(int *)(iVar4 + 0x3c) < iVar5 - local_1c)) {
              local_1c = iVar5 - *(int *)(iVar4 + 0x3c);
            }
            iVar5 = *(int *)(iVar4 + 0xc);
            if ((iVar5 < local_1c) && (*(int *)(iVar4 + 0x3c) < local_1c - iVar5)) {
              local_1c = iVar5 + *(int *)(iVar4 + 0x3c);
            }
          }
          *(int *)(iVar4 + 8) = iVar8;
          *(int *)(iVar4 + 0xc) = local_1c;
        }
      }
LAB_0058ee47:
      iVar9 = iVar9 + 1;
    } while (iVar9 != 8);
    iVar9 = 0;
    do {
      iVar4 = FUN_00608fd8(*(undefined4 *)PTR_DAT_0068939c,iVar9);
      FUN_00562a38(iVar9);
      if (*(char *)(iVar4 + 4) != '\0') {
        FUN_00562968(iVar9);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 8);
  }
  return;
}
