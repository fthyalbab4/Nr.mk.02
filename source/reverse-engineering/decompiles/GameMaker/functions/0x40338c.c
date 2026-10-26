// rea decompile_all
// name: FUN_0040338c
// address: 0x40338c
// body: available
// range: 0x40338c-0x4033b6 inclusive
// range: 0x4033b8-0x4033dd inclusive
// range: 0x4033e0-0x403422 inclusive
// range: 0x403424-0x403450 inclusive
// range: 0x403454-0x4034ca inclusive
// range: 0x4034cc-0x4034ea inclusive
// range: 0x4034ec-0x4035b6 inclusive
// range: 0x4035b8-0x403611 inclusive
// range: 0x403614-0x403642 inclusive
// range: 0x403645-0x403692 inclusive
// range: 0x403694-0x4036a1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040338c(int param_1,uint param_2)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  LPCVOID lpAddress;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uStack_20;
  DWORD in_stack_ffffffe4;

  piVar1 = *(int **)(param_1 + -4);
  if (((uint)piVar1 & 7) == 0) {
    iVar3 = *piVar1;
    uVar6 = *(ushort *)(iVar3 + 2) - 4;
    if (uVar6 < param_2) {
      uVar6 = *(ushort *)(iVar3 + 2) + 0x1c + uVar6;
      iVar4 = FUN_00402e10(((uVar6 < param_2) - 1 & uVar6 - param_2) + param_2);
      if (iVar4 != 0) {
        if (0x40a2c < param_2) {
          *(uint *)(iVar4 + -8) = param_2;
        }
        (**(code **)(iVar3 + 0x1c))(param_1,iVar4,*(ushort *)(iVar3 + 2) - 4);
        FUN_00403194(param_1);
      }
      return iVar4;
    }
    if (uVar6 <= param_2 * 4 + 0x40) {
      return param_1;
    }
    iVar3 = FUN_00402e10(param_2);
    if (iVar3 != 0) {
      FUN_004029d4(param_1,iVar3,param_2);
      FUN_00403194(param_1);
    }
    return iVar3;
  }
  if (((uint)piVar1 & 5) != 0) {
    if (((uint)piVar1 & 3) != 0) {
      return 0;
    }
    uVar6 = (*(uint *)(param_1 + -4) & 0xfffffff0) - 0x14;
    if (uVar6 < param_2) {
      uVar9 = (uVar6 >> 2) + uVar6;
      uVar7 = param_2;
      if (param_2 < uVar9) {
        uVar7 = uVar9;
      }
      lpAddress = (LPCVOID)(param_1 + -0x10 + (*(uint *)(param_1 + -4) & 0xfffffff0));
      VirtualQuery(lpAddress,(PMEMORY_BASIC_INFORMATION)&stack0xffffffd4,0x1c);
      if ((in_stack_ffffffe4 == 0x10000) &&
         (uStack_20 = uStack_20 & 0xffff0000, param_2 - uVar6 < uStack_20)) {
        uVar6 = (uVar7 - uVar6) + 0xffff & 0xffff0000;
        if (uStack_20 < uVar6) {
          uVar6 = uStack_20;
        }
        pvVar2 = VirtualAlloc(lpAddress,uVar6,0x2000,4);
        if ((pvVar2 != (LPVOID)0x0) &&
           (pvVar2 = VirtualAlloc(lpAddress,uVar6,0x1000,4), pvVar2 != (LPVOID)0x0)) {
          *(uint *)(param_1 + -8) = param_2;
          *(uint *)(param_1 + -4) = uVar6 + *(int *)(param_1 + -4) | 8;
          return param_1;
        }
      }
      iVar3 = FUN_00402e10(uVar7);
      if (iVar3 != 0) {
        if (0x40a2c < uVar7) {
          *(uint *)(iVar3 + -8) = param_2;
        }
        FUN_004029a4(param_1,iVar3,*(undefined4 *)(param_1 + -8));
        FUN_00403194(param_1);
      }
    }
    else if (param_2 < uVar6 >> 1) {
      iVar3 = FUN_00402e10(param_2);
      if (iVar3 != 0) {
        if (0x40a2c < param_2) {
          *(uint *)(param_1 + -8) = param_2;
        }
        FUN_004029d4(param_1,iVar3,param_2);
        FUN_00403194(param_1);
      }
    }
    else {
      *(uint *)(param_1 + -8) = param_2;
      iVar3 = param_1;
    }
    return iVar3;
  }
  uVar7 = (uint)piVar1 & 0xfffffff0;
  iVar3 = uVar7 + param_1;
  uVar6 = uVar7 - 4;
  uVar9 = (uint)piVar1 & 0xf;
  if (param_2 <= uVar6) {
    if (uVar6 <= param_2 * 2) {
      return param_1;
    }
    if (param_2 < 0xb2c) {
      if (param_2 < 0x2cc) {
        iVar3 = FUN_00402e10(param_2);
        if (iVar3 != 0) {
          FUN_004029d4(param_1,iVar3,param_2);
          FUN_00403194(param_1);
        }
        return iVar3;
      }
      param_2 = 0xb2c;
      if (uVar6 < 0xb2d) {
        return param_1;
      }
    }
    uVar6 = (param_2 + 0xd3 & 0xffffff00) + 0x30;
    uVar7 = uVar7 - uVar6;
    if (DAT_00783055 != '\0') {
      while( true ) {
        do {
          LOCK();
          bVar10 = DAT_00783a3c == '\0';
          if (bVar10) {
            DAT_00783a3c = '\x01';
          }
          UNLOCK();
          if (bVar10) goto LAB_004034cc;
        } while (DAT_007838dd != '\0');
        Sleep(0);
        LOCK();
        bVar10 = DAT_00783a3c == '\0';
        if (bVar10) {
          DAT_00783a3c = '\x01';
        }
        UNLOCK();
        if (bVar10) break;
        Sleep(10);
      }
LAB_004034cc:
      uVar9 = *(uint *)(param_1 + -4) & 0xf;
    }
    *(uint *)(param_1 + -4) = uVar9 | uVar6;
    uVar9 = *(uint *)(iVar3 + -4);
    if ((uVar9 & 1) == 0) {
      *(uint *)(iVar3 + -4) = uVar9 | 8;
      iVar4 = iVar3;
    }
    else {
      uVar9 = uVar9 & 0xfffffff0;
      uVar7 = uVar7 + uVar9;
      iVar4 = iVar3 + uVar9;
      if (0xb2f < uVar9) {
        FUN_004029f0(iVar3);
      }
    }
    *(uint *)(iVar4 + -8) = uVar7;
    *(uint *)(param_1 + -4 + uVar6) = uVar7 + 3;
    if (0xb2f < uVar7) {
      FUN_00402a30(param_1 + uVar6,uVar7);
    }
    DAT_00783a3c = 0;
    return param_1;
  }
  if ((*(uint *)(iVar3 + -4) & 1) != 0) {
    uVar5 = *(uint *)(iVar3 + -4) & 0xfffffff0;
    uVar7 = uVar6 + uVar5;
    if (param_2 <= uVar7) {
      if (DAT_00783055 == '\0') {
LAB_004035d1:
        if (0xb2f < uVar5) {
          FUN_004029f0(iVar3);
        }
        uVar6 = (uVar6 >> 2) + uVar6;
        uVar6 = param_2 + 0xd3 + (uVar6 - param_2 & (uVar6 < param_2) - 1) & 0xffffff00;
        uVar5 = uVar6 + 0x30;
        uVar8 = (uVar7 + 4) - uVar5;
        if (uVar7 + 4 < uVar5 || uVar8 == 0) {
          *(uint *)(param_1 + uVar7) = *(uint *)(param_1 + uVar7) & 0xfffffff7;
          uVar5 = uVar7 + 4;
        }
        else {
          *(uint *)(param_1 + -4 + uVar7) = uVar8;
          *(uint *)(uVar6 + 0x2c + param_1) = uVar8 + 3;
          if (0xb2f < uVar8) {
            FUN_00402a30(uVar5 + param_1);
          }
        }
        *(uint *)(param_1 + -4) = uVar5 | uVar9;
        DAT_00783a3c = 0;
        return param_1;
      }
      while( true ) {
        do {
          LOCK();
          bVar10 = DAT_00783a3c == '\0';
          if (bVar10) {
            DAT_00783a3c = '\x01';
          }
          UNLOCK();
          if (bVar10) goto LAB_004035b8;
        } while (DAT_007838dd != '\0');
        uStack_20 = 0x403599;
        Sleep(0);
        LOCK();
        bVar10 = DAT_00783a3c == '\0';
        if (bVar10) {
          DAT_00783a3c = '\x01';
        }
        UNLOCK();
        if (bVar10) break;
        uStack_20 = 0x4035b3;
        Sleep(10);
      }
LAB_004035b8:
      uVar9 = *(uint *)(param_1 + -4) & 0xf;
      if ((*(uint *)(iVar3 + -4) & 1) != 0) {
        uVar5 = *(uint *)(iVar3 + -4) & 0xfffffff0;
        uVar7 = uVar6 + uVar5;
        if (param_2 <= uVar7) goto LAB_004035d1;
      }
      DAT_00783a3c = '\0';
    }
  }
  uVar7 = (uVar6 >> 2) + uVar6;
  iVar3 = FUN_00402e10();
  if (iVar3 == 0) {
    return 0;
  }
  if (0x40a2c < (uVar7 - param_2 & (uVar7 < param_2) - 1) + param_2) {
    *(uint *)(iVar3 + -8) = param_2;
  }
  FUN_004029a4(param_1,iVar3,uVar6);
  FUN_00403194(param_1);
  return iVar3;
}
