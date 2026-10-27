// rea decompile_all
// name: FUN_00554bfc
// address: 0x554bfc
// body: available
// range: 0x554bfc-0x554fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00554bfc(int param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;

  iVar3 = *(int *)(*(int *)(param_1 + 0x1cc) + 0x18);
  local_4c = *param_2;
  local_48 = param_2[1];
  local_44 = param_2[2];
  local_40 = param_2[3];
  local_3c = param_2[4];
  iVar8 = param_2[5];
  if (local_4c < local_48) {
    piVar1 = (int *)(iVar3 + local_4c * 4);
    for (iVar5 = local_4c; iVar7 = local_44, iVar5 <= local_48; iVar5 = iVar5 + 1) {
      for (; iVar7 <= local_40; iVar7 = iVar7 + 1) {
        psVar6 = (short *)(*piVar1 + iVar7 * 0x40 + local_3c * 2);
        for (iVar4 = local_3c; iVar4 <= iVar8; iVar4 = iVar4 + 1) {
          sVar2 = *psVar6;
          psVar6 = psVar6 + 1;
          if (sVar2 != 0) {
            *param_2 = iVar5;
            local_4c = iVar5;
            goto LAB_00554cc7;
          }
        }
      }
      piVar1 = piVar1 + 1;
    }
  }
LAB_00554cc7:
  if (local_4c < local_48) {
    piVar1 = (int *)(iVar3 + local_48 * 4);
    for (iVar5 = local_48; iVar7 = local_44, local_4c <= iVar5; iVar5 = iVar5 + -1) {
      for (; iVar7 <= local_40; iVar7 = iVar7 + 1) {
        psVar6 = (short *)(*piVar1 + iVar7 * 0x40 + local_3c * 2);
        for (iVar4 = local_3c; iVar4 <= iVar8; iVar4 = iVar4 + 1) {
          sVar2 = *psVar6;
          psVar6 = psVar6 + 1;
          if (sVar2 != 0) {
            param_2[1] = iVar5;
            local_48 = iVar5;
            goto LAB_00554d46;
          }
        }
      }
      piVar1 = piVar1 + -1;
    }
  }
LAB_00554d46:
  iVar5 = local_44;
  if (local_44 < local_40) {
    for (; iVar5 <= local_40; iVar5 = iVar5 + 1) {
      piVar1 = (int *)(iVar3 + local_4c * 4);
      for (iVar7 = local_4c; iVar7 <= local_48; iVar7 = iVar7 + 1) {
        psVar6 = (short *)(*piVar1 + iVar5 * 0x40 + local_3c * 2);
        for (iVar4 = local_3c; iVar4 <= iVar8; iVar4 = iVar4 + 1) {
          sVar2 = *psVar6;
          psVar6 = psVar6 + 1;
          if (sVar2 != 0) {
            param_2[2] = iVar5;
            local_44 = iVar5;
            goto LAB_00554dbb;
          }
        }
        piVar1 = piVar1 + 1;
      }
    }
  }
LAB_00554dbb:
  iVar5 = local_40;
  if (local_44 < local_40) {
    for (; local_44 <= iVar5; iVar5 = iVar5 + -1) {
      piVar1 = (int *)(iVar3 + local_4c * 4);
      for (iVar7 = local_4c; iVar7 <= local_48; iVar7 = iVar7 + 1) {
        psVar6 = (short *)(*piVar1 + iVar5 * 0x40 + local_3c * 2);
        for (iVar4 = local_3c; iVar4 <= iVar8; iVar4 = iVar4 + 1) {
          sVar2 = *psVar6;
          psVar6 = psVar6 + 1;
          if (sVar2 != 0) {
            param_2[3] = iVar5;
            local_40 = iVar5;
            goto LAB_00554e30;
          }
        }
        piVar1 = piVar1 + 1;
      }
    }
  }
LAB_00554e30:
  iVar5 = local_3c;
  if (local_3c < iVar8) {
    for (; iVar5 <= iVar8; iVar5 = iVar5 + 1) {
      piVar1 = (int *)(iVar3 + local_4c * 4);
      for (iVar7 = local_4c; iVar7 <= local_48; iVar7 = iVar7 + 1) {
        psVar6 = (short *)(*piVar1 + local_44 * 0x40 + iVar5 * 2);
        for (iVar4 = local_44; iVar4 <= local_40; iVar4 = iVar4 + 1) {
          if (*psVar6 != 0) {
            param_2[4] = iVar5;
            local_3c = iVar5;
            goto LAB_00554e9f;
          }
          psVar6 = psVar6 + 0x20;
        }
        piVar1 = piVar1 + 1;
      }
    }
  }
LAB_00554e9f:
  iVar5 = iVar8;
  if (local_3c < iVar8) {
    for (; local_3c <= iVar5; iVar5 = iVar5 + -1) {
      piVar1 = (int *)(iVar3 + local_4c * 4);
      for (iVar7 = local_4c; iVar7 <= local_48; iVar7 = iVar7 + 1) {
        psVar6 = (short *)(*piVar1 + local_44 * 0x40 + iVar5 * 2);
        for (iVar4 = local_44; iVar4 <= local_40; iVar4 = iVar4 + 1) {
          if (*psVar6 != 0) {
            param_2[5] = iVar5;
            iVar8 = iVar5;
            goto LAB_00554f0e;
          }
          psVar6 = psVar6 + 0x20;
        }
        piVar1 = piVar1 + 1;
      }
    }
  }
LAB_00554f0e:
  iVar4 = (local_48 - local_4c) * 8;
  iVar5 = (iVar8 - local_3c) * 0x10;
  iVar7 = (local_40 - local_44) * 0xc;
  param_2[6] = iVar4 * iVar4 + iVar7 * iVar7 + iVar5 * iVar5;
  local_38 = 0;
  piVar1 = (int *)(iVar3 + local_4c * 4);
  for (; iVar3 = local_44, local_4c <= local_48; local_4c = local_4c + 1) {
    for (; iVar3 <= local_40; iVar3 = iVar3 + 1) {
      psVar6 = (short *)(*piVar1 + iVar3 * 0x40 + local_3c * 2);
      for (iVar5 = local_3c; iVar5 <= iVar8; iVar5 = iVar5 + 1) {
        if (*psVar6 != 0) {
          local_38 = local_38 + 1;
        }
        psVar6 = psVar6 + 1;
      }
    }
    piVar1 = piVar1 + 1;
  }
  param_2[7] = local_38;
  return;
}
