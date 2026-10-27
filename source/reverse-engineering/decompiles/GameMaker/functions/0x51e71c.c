// rea decompile_all
// name: FUN_0051e71c
// address: 0x51e71c
// body: available
// range: 0x51e71c-0x51e7bf inclusive
// range: 0x51e804-0x51ee9d inclusive
// range: 0x51eeb3-0x51eeb9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51e736 (push 0x51ee9e followed by fs-segment stack chaining); handler 0x51ee9e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051e71c(int param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  LRESULT LVar3;
  uint uVar4;
  HWND hWnd;
  HWND pHVar5;
  BOOL BVar6;
  undefined4 uVar7;
  undefined2 extraout_var;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *in_FS_OFFSET;
  byte bVar11;
  int aiStackY_1828 [1517];
  undefined1 *puVar12;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  int local_48 [4];
  int local_38;
  int local_2c;
  int local_28;
  int local_1c [4];
  int *local_c;
  int local_8;

  bVar11 = 0;
  puStack_5c = &stack0xfffffffc;
  puVar12 = &stack0xfffffffc;
  puStack_60 = &LAB_0051ee9e;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  param_2[3] = 0;
  iVar8 = *(int *)(*(int *)(param_1 + 0xb0) + 8);
  local_c = param_2;
  local_8 = param_1;
  if (-1 < iVar8 + -1) {
    iVar9 = 0;
    puStack_5c = &stack0xfffffffc;
    do {
      puVar2 = (undefined4 *)FUN_0043b048(*(undefined4 *)(local_8 + 0xb0),iVar9);
      cVar1 = (*(code *)*puVar2)(puVar2[1],local_c);
      if (cVar1 != '\0') {
        *in_FS_OFFSET = uStack_64;
        return;
      }
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_0051e590(local_8,local_c);
  iVar8 = *local_c;
  if (iVar8 < 0x54) {
    if (iVar8 == 0x53) {
LAB_0051ed5b:
      func_0x0051fe74(local_8,(short)local_c[1],local_c[2]);
      goto LAB_0051ee94;
    }
    if (iVar8 < 0x12) {
      if (iVar8 == 0x11) {
        local_c[3] = 1;
        goto LAB_0051ee94;
      }
      switch(iVar8) {
      case 0:
        FUN_00447d90(0);
        break;
      default:
        goto switchD_0051e7b9_caseD_1;
      case 5:
        if (local_c[1] == 1) {
          *(undefined1 *)(local_8 + 0x34) = 1;
        }
        break;
      case 7:
        PostMessageW(*(HWND *)(local_8 + 0x170),0xb01a,0,0);
        FUN_0051e68c();
        break;
      case 10:
        piVar10 = local_c + (uint)bVar11 * -2 + 1;
        local_48[3] = *local_c;
        local_48[(uint)bVar11 * -2 + 4] = *piVar10;
        local_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 5] = piVar10[(uint)bVar11 * -2 + 1];
        (local_48 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 5)[(uint)bVar11 * -2 + 1] =
             (piVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
        if (local_38 == 0) {
          FUN_0051e68c();
          if ((*(int *)(local_8 + 0xb4) == 0) && (DAT_00778d28 == '\0')) {
            uVar7 = FUN_005132b4(*(undefined4 *)(local_8 + 0x170));
            *(undefined4 *)(local_8 + 0xb4) = uVar7;
          }
          FUN_0051e208(local_8);
        }
        else {
          if ((DAT_00778d28 == '\0') && (FUN_0051e260(local_8), *(int *)(local_8 + 0xb4) != 0)) {
            FUN_00513378();
            *(undefined4 *)(local_8 + 0xb4) = 0;
          }
          FUN_0051e68c();
        }
        break;
      case 0xf:
        iVar8 = FUN_005130e4(*(undefined4 *)(local_8 + 0x170));
        if (iVar8 == 0) {
          FUN_0051e68c();
        }
        else {
          FUN_0051e6cc();
        }
        break;
      case 0x10:
        if (*(int *)(local_8 + 0x44) != 0) {
          FUN_0051a7e8();
        }
      }
      goto LAB_0051ee94;
    }
    if (iVar8 < 0x1d) {
      if (iVar8 == 0x1c) {
        FUN_0051e68c();
        piVar10 = local_c + (uint)bVar11 * -2 + 1;
        local_2c = *local_c;
        local_48[(uint)bVar11 * -2 + 8] = *piVar10;
        local_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9] = piVar10[(uint)bVar11 * -2 + 1];
        (local_48 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 9)[(uint)bVar11 * -2 + 1] =
             (piVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
        cVar1 = '\x01' - (local_28 == 0);
        *(char *)(local_8 + 0xa5) = cVar1;
        if (cVar1 == '\0') {
          FUN_0051e200(local_8,local_8,puVar12);
          PostMessageW(*(HWND *)(local_8 + 0x170),0xb001,0,0);
        }
        else {
          if ((*(char *)(local_8 + 0xd3) != '\0') && (*(char *)(local_8 + 0x34) != '\0')) {
            *(undefined1 *)(local_8 + 0x34) = 0;
          }
          FUN_0051e260(local_8);
          PostMessageW(*(HWND *)(local_8 + 0x170),0xb000,0,0);
        }
        goto LAB_0051ee94;
      }
      if (iVar8 == 0x14) {
        *local_c = 0x27;
        FUN_0051e68c();
        goto LAB_0051ee94;
      }
      if (iVar8 == 0x16) {
        piVar10 = local_c + (uint)bVar11 * -2 + 1;
        local_48[(uint)bVar11 * -2] = *piVar10;
        local_48[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] = piVar10[(uint)bVar11 * -2 + 1];
        (local_48 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
             (piVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
        local_48[2] = 0;
        if ((*(int *)(local_8 + 0x44) != 0) &&
           (*(char *)(*(int *)(local_8 + 0x44) + 0x29a) == '\x01')) {
          FUN_005205b8(local_8,CONCAT22(extraout_var,0x16),local_c[1],local_c[2]);
        }
        FUN_0051fac0(DAT_007882ec);
        if (local_48[0] != 0) {
          FUN_00406c64();
        }
        goto LAB_0051ee94;
      }
      if (iVar8 == 0x1a) {
        FUN_004fd6b0(*(undefined4 *)PTR_DAT_007827e4,local_c[1]);
        FUN_0051e610(local_8,local_c);
        FUN_0051e68c();
        goto LAB_0051ee94;
      }
    }
    else {
      if (iVar8 == 0x1d) {
        FUN_0051d568(DAT_007882f0);
        FUN_0051e68c();
        goto LAB_0051ee94;
      }
      if (iVar8 == 0x37) {
        iVar8 = FUN_0051eebc(local_8);
        local_c[3] = iVar8;
        goto LAB_0051ee94;
      }
    }
  }
  else if (iVar8 < 0xb018) {
    if (iVar8 == 0xb017) {
      iVar8 = *(int *)(local_8 + 0x44);
      if ((iVar8 != 0) && (iVar9 = FUN_004f76a8(iVar8), iVar9 != 0)) {
        pHVar5 = (HWND)FUN_004f76a8(iVar8);
        BVar6 = IsWindowEnabled(pHVar5);
        if (BVar6 != 0) {
          pHVar5 = (HWND)FUN_004f76a8(iVar8);
          BVar6 = IsWindowVisible(pHVar5);
          if (BVar6 != 0) {
            DAT_00778d14 = 0;
            pHVar5 = GetFocus();
            hWnd = (HWND)FUN_004f76a8(iVar8);
            SetFocus(hWnd);
            FUN_004efb90(iVar8,0x112,local_c[1],local_c[2]);
            SetFocus(pHVar5);
            DAT_00778d14 = 1;
            local_c[3] = 1;
          }
        }
      }
      goto LAB_0051ee94;
    }
    if (iVar8 < 0xb001) {
      if (iVar8 == 0xb000) {
        if (*(short *)(local_8 + 0x142) != 0) {
          (**(code **)(local_8 + 0x140))(*(undefined4 *)(local_8 + 0x144),local_8);
        }
        if ((*(int *)(DAT_007882ec + 0x44) != 0) && (*(char *)(DAT_007882ec + 0xd3) != '\0')) {
          pHVar5 = (HWND)FUN_004f76a8(*(int *)(DAT_007882ec + 0x44));
          BVar6 = IsWindowEnabled(pHVar5);
          if ((BVar6 == 0) &&
             (iVar8 = FUN_004f76a8(*(undefined4 *)(local_8 + 0x44)),
             iVar8 != *(int *)(local_8 + 0xd4))) {
            SetFocus(*(HWND *)(local_8 + 0xd4));
          }
        }
        *(undefined4 *)(local_8 + 0xd4) = 0;
        goto LAB_0051ee94;
      }
      if (iVar8 == 0x112) {
        if ((local_c[1] & 0xfff0U) == 0xf020) {
          FUN_0051eed8(local_8);
        }
        else if ((local_c[1] & 0xfff0U) == 0xf120) {
          FUN_0051efdc(local_8);
        }
        else {
          FUN_0051e68c();
        }
        goto LAB_0051ee94;
      }
      if (iVar8 - 0x132U < 7) {
        LVar3 = SendMessageW((HWND)local_c[2],iVar8 + 0xbc00,local_c[1],(LPARAM)local_c[2]);
        local_c[3] = LVar3;
        goto LAB_0051ee94;
      }
      if (iVar8 == 0x31a) {
        FUN_00503a6c();
        FUN_00503bd4();
        local_1c[0] = 0xb051;
        local_1c[1] = 0;
        local_1c[2] = 0;
        local_1c[3] = 0;
        iVar8 = FUN_0051c6a0(DAT_007882f0);
        if (-1 < iVar8 + -1) {
          iVar9 = 0;
          do {
            uVar7 = FUN_0051c68c(DAT_007882f0,iVar9);
            FUN_004f3144(uVar7,local_48 + 0xb);
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        goto LAB_0051ee94;
      }
    }
    else {
      if (iVar8 == 0xb001) {
        pHVar5 = GetLastActivePopup(*(HWND *)(local_8 + 0x170));
        *(HWND *)(local_8 + 0xd4) = pHVar5;
        if (*(short *)(local_8 + 0x13a) != 0) {
          (**(code **)(local_8 + 0x138))(*(undefined4 *)(local_8 + 0x13c),local_8);
        }
        goto LAB_0051ee94;
      }
      if (iVar8 == 0xb016) {
        cVar1 = FUN_0051f4bc(local_8,local_c);
        if (cVar1 != '\0') {
          local_c[3] = 1;
        }
        goto LAB_0051ee94;
      }
    }
  }
  else if (iVar8 < 0xb032) {
    if (iVar8 == 0xb031) {
      if (local_c[1] == 1) {
        local_c[3] = *(int *)(local_8 + 0xb8);
      }
      else {
        *(int *)(local_8 + 0xb8) = local_c[2];
      }
      goto LAB_0051ee94;
    }
    if (iVar8 == 0xb01a) {
      iVar8 = FUN_005130e4(*(undefined4 *)(local_8 + 0x170));
      if (((iVar8 == 0) && (pHVar5 = GetFocus(), pHVar5 == *(HWND *)(local_8 + 0x170))) &&
         (pHVar5 = (HWND)FUN_00513414(0), pHVar5 != (HWND)0x0)) {
        SetFocus(pHVar5);
      }
      goto LAB_0051ee94;
    }
    if (iVar8 == 0xb01f) goto LAB_0051ed5b;
    if (iVar8 == 0xb020) {
      if (local_c[1] == 0) {
        FUN_0051f758(local_8);
      }
      else {
        FUN_0051f7b8(local_8);
      }
      goto LAB_0051ee94;
    }
  }
  else {
    if (iVar8 - 0xb03fU < 2) {
      uVar4 = FUN_005212f0(local_8,iVar8,local_c[2]);
      local_c[3] = uVar4 & 0x7f;
      goto LAB_0051ee94;
    }
    if (iVar8 == 0xb056) {
      FUN_005205b8(local_8,CONCAT22(extraout_var,0xb056),local_c[1],local_c[2]);
      goto LAB_0051ee94;
    }
  }
switchD_0051e7b9_caseD_1:
  FUN_0051e68c();
LAB_0051ee94:
  *in_FS_OFFSET = uStack_64;
  return;
}
