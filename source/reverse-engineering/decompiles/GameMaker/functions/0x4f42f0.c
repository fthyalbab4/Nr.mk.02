// rea decompile_all
// name: FUN_004f42f0
// address: 0x4f42f0
// body: available
// range: 0x4f42f0-0x4f4817 inclusive
// range: 0x4f481f-0x4f4878 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f47e8 (push 0x4f4818 followed by fs-segment stack chaining); handler 0x4f4818 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f42f0(int *param_1,UINT *param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  HWND pHVar5;
  HWND pHVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  int Y;
  int cx;
  UINT Msg;
  undefined4 uVar8;
  int cy;
  UINT wParam;
  UINT UVar9;
  undefined1 *puVar10;
  undefined1 local_40 [8];
  tagTRACKMOUSEEVENT local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 local_14 [8];
  UINT *local_c;
  int *local_8;

  puVar10 = &stack0xfffffffc;
  UVar9 = *param_2;
  local_c = param_2;
  local_8 = param_1;
  if (0x1ff < (int)UVar9) {
    if ((int)UVar9 < 0xb048) {
      if (UVar9 == 0xb047) {
        piVar3 = (int *)FUN_00513780(param_1,1);
        if ((piVar3 != (int *)0x0) && (piVar3 != local_8)) {
          FUN_004efb90(piVar3,0xb047,local_c[1]);
        }
      }
      else if (UVar9 - 0x200 < 0xf) {
        iVar4 = param_1[0x2b];
        piVar3 = *(int **)(iVar4 + 8);
        if ((piVar3 != (int *)0x0) && (uVar7 = (**(code **)(*piVar3 + 4))(), (uVar7 & 1) != 0)) {
          piVar3 = *(int **)(iVar4 + 8);
          (**(code **)(*piVar3 + 0x10))(piVar3,local_c);
        }
        if (*local_c == 0x200) {
          local_28 = (int)(short)local_c[2];
          local_24 = (int)*(short *)((int)local_c + 10);
          FUN_004ee09c(local_8,&local_28,local_14);
          iVar4 = FUN_004eb0c0();
          DAT_00778b64 = iVar4;
          if (iVar4 == 0) {
            iVar4 = FUN_004ec9b4(local_14,1);
          }
          if (iVar4 != local_8[0x93]) {
            if ((((local_8[0x93] != 0) && (DAT_00778b64 == 0)) ||
                ((DAT_00778b64 != 0 && (local_8[0x93] == DAT_00778b64)))) ||
               ((DAT_00778b64 != 0 && (*(int *)(DAT_00778b64 + 0x34) == local_8[0x93])))) {
              FUN_004efb90(local_8[0x93],0xb014,0);
            }
            if (local_8[0x93] != 0) {
              FUN_0044924c(local_8[0x93],local_8);
            }
            local_8[0x93] = iVar4;
            if (iVar4 != 0) {
              FUN_00448f68(iVar4,local_8);
            }
            if (((local_8[0x93] != 0) && (DAT_00778b64 == 0)) ||
               ((DAT_00778b64 != 0 && (local_8[0x93] == DAT_00778b64)))) {
              FUN_004efb90(local_8[0x93],0xb013,0);
            }
          }
          if ((char)local_8[0x92] == '\0') {
            *(undefined1 *)(local_8 + 0x92) = 1;
            local_38.dwFlags = 2;
            local_38.hwndTrack = (HWND)FUN_004f76a8(local_8);
            local_38.dwHoverTime = 0xffffffff;
            local_38.cbSize = 0x10;
            _TrackMouseEvent(&local_38);
          }
        }
        cVar1 = FUN_004f40d8(local_8,local_c);
        if (cVar1 != '\0') {
          if (local_c[3] != 0) {
            return;
          }
          cVar1 = FUN_004f7a54(local_8);
          if (cVar1 == '\0') {
            return;
          }
          UVar9 = local_c[2];
          wParam = local_c[1];
          Msg = *local_c;
          pHVar5 = (HWND)FUN_004f76a8(local_8);
          DefWindowProcW(pHVar5,Msg,wParam,UVar9);
          return;
        }
      }
      else if (UVar9 == 0x240) {
        iVar4 = param_1[0x2b];
        piVar3 = *(int **)(iVar4 + 8);
        if ((piVar3 != (int *)0x0) && (uVar7 = (**(code **)(*piVar3 + 4))(), (uVar7 & 2) != 0)) {
          piVar3 = *(int **)(iVar4 + 8);
          (**(code **)(*piVar3 + 0x10))(piVar3,local_c);
        }
      }
      else if (UVar9 == 0x2a3) {
        *(undefined1 *)(param_1 + 0x92) = 0;
        if (param_1[0x93] == 0) {
          FUN_004efb90(param_1,0xb014,0);
        }
        else {
          FUN_004efb90(param_1[0x93],0xb014,0);
        }
        local_8[0x93] = 0;
      }
    }
    else {
      if (UVar9 == 0xb04a) {
        if ((char)param_2[1] != '\0') {
          FUN_004f95a4(param_1,1);
        }
        uVar8 = *in_FS_OFFSET;
        *in_FS_OFFSET = &stack0xffffffac;
        (**(code **)(*local_8 + 0xc0))();
        *in_FS_OFFSET = uVar8;
        if ((char)local_c[1] != '\0') {
          FUN_004f95a4(local_8,0,puVar10);
        }
        return;
      }
      if (UVar9 == 0xb04e) {
        if (((*(byte *)(param_1 + 7) & 0x10) != 0) &&
           (iVar4 = FUN_00503a6c(), *(char *)(iVar4 + 5) != '\0')) {
          FUN_004f76a8(local_8);
          (**(code **)PTR_DAT_00782970)();
          UVar9 = 0x77;
          cy = 0;
          cx = 0;
          Y = 0;
          iVar4 = 0;
          pHVar6 = (HWND)0x0;
          pHVar5 = (HWND)FUN_004f76a8(local_8);
          SetWindowPos(pHVar5,pHVar6,iVar4,Y,cx,cy,UVar9);
        }
      }
      else if (UVar9 == 0xb051) {
        FUN_004f3144(param_1,param_2);
      }
    }
    goto LAB_004f4852;
  }
  if ((int)UVar9 < 0x22) {
    if (UVar9 == 0x21) {
      cVar1 = FUN_004f4198(param_1,param_2,0);
      if (cVar1 != '\0') {
        if (local_c[3] != 0) {
          return;
        }
        cVar1 = FUN_004f7a54(local_8);
        if (cVar1 == '\0') {
          return;
        }
        FUN_004efcbc(local_8,local_c);
        return;
      }
      goto LAB_004f4852;
    }
    if (UVar9 == 7) {
      piVar3 = (int *)FUN_00513780(param_1,1);
      if ((piVar3 != (int *)0x0) &&
         ((((*(byte *)(piVar3 + 7) & 0x10) == 0 || (piVar3[0xd] == 0)) &&
          (cVar1 = (**(code **)(*piVar3 + 0x10c))(piVar3,local_8), cVar1 == '\0')))) {
        return;
      }
      goto LAB_004f4852;
    }
    if (UVar9 != 8) {
      if (UVar9 == 0x1f) {
        pHVar5 = (HWND)FUN_004f76a8(param_1);
        pHVar6 = GetCapture();
        if (((pHVar5 == pHVar6) && (DAT_00778b64 != 0)) &&
           (*(int **)(DAT_00778b64 + 0x34) == local_8)) {
          FUN_004efb90(DAT_00778b64,0x1f,0);
        }
      }
      goto LAB_004f4852;
    }
    bVar2 = *(byte *)(param_1 + 0x15) & 0x20;
  }
  else {
    if (UVar9 == 0x84) {
      FUN_004efcbc(param_1,param_2);
      if (local_c[3] != 0xffffffff) {
        return;
      }
      UVar9 = local_c[2];
      local_18._0_2_ = (short)UVar9;
      local_20 = (int)(short)local_18;
      local_18._2_2_ = (short)(UVar9 >> 0x10);
      local_1c = (int)local_18._2_2_;
      local_18 = UVar9;
      FUN_004ee1d0(local_8,&local_20,local_40);
      iVar4 = FUN_004f4014(local_8,local_40,0);
      if (iVar4 == 0) {
        return;
      }
      local_c[3] = 1;
      return;
    }
    if (9 < UVar9 - 0x100) goto LAB_004f4852;
    bVar2 = FUN_004eefcc(param_1);
  }
  if (bVar2 != 0) {
    return;
  }
LAB_004f4852:
  FUN_004efcbc(local_8,local_c);
  if (*local_c == 0x128) {
    (**(code **)(*local_8 + 0x90))();
  }
  return;
}
