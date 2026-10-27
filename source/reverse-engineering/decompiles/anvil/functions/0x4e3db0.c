// rea decompile_all
// name: FUN_004e3db0
// address: 0x4e3db0
// body: available
// range: 0x4e3db0-0x4e43a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e3db0(int param_1,int param_2)

{
  HWND pHVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  BOOL BVar8;
  int iVar9;
  int iStack_20;
  int iStack_1c;
  int iStack_18;

  FUN_004e0630(param_1,param_2);
  FUN_004e7800(param_1,param_2);
  if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 0x1d4) == 0)) {
    iVar9 = 0;
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      if (((*(byte *)(param_1 + 900) & 8) == 0) || (*(char *)(param_1 + 0x348) != '\0')) {
        if (*(char *)(param_1 + 0x29e) == '\0') {
          cVar3 = *(char *)(param_1 + 0x348);
        }
        else {
          cVar3 = '\0';
        }
      }
      else {
        cVar3 = '\x01';
      }
    }
    else {
      cVar3 = '\x02';
    }
    iVar7 = *(int *)(param_1 + 0x358);
    if ((iVar7 == 0) && (*(int *)(param_1 + 0x35c) == 0)) {
      if (cVar3 == '\0') {
        if (*(char *)(DAT_0068f2e8 + 0xd3) == '\0') {
          pHVar1 = *(HWND *)(DAT_0068f2e8 + 0x170);
          *(HWND *)(param_2 + 0x1c) = pHVar1;
          uVar5 = GetWindowLongW(pHVar1,-0x14);
          SetWindowLongW(pHVar1,-0x14,uVar5 & 0xffffff7f);
        }
        else if ((*(char *)(param_1 + 0x370) == '\0') && (param_1 != *(int *)(DAT_0068f2e8 + 0x44)))
        {
          if ((*(int *)(DAT_0068f2e8 + 0x44) == 0) ||
             (cVar3 = FUN_004c4988(*(int *)(DAT_0068f2e8 + 0x44)), cVar3 == '\0')) {
            *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(DAT_0068f2e8 + 0x170);
          }
          else {
            iVar7 = FUN_004ed2a0(DAT_0068f2e8);
            *(int *)(param_2 + 0x1c) = iVar7;
            iVar4 = FUN_004c45dc(*(undefined4 *)(DAT_0068f2e8 + 0x44));
            if (iVar7 == iVar4) {
              uVar6 = FUN_004e3700(*(undefined4 *)(DAT_0068f2e8 + 0x44));
              iVar7 = FUN_00438f2c(uVar6,param_1);
              if (iVar7 < 0) {
                uVar6 = FUN_004e3700(*(undefined4 *)(DAT_0068f2e8 + 0x44));
                FUN_00438d04(uVar6,param_1);
              }
              FUN_00446174(param_1,*(undefined4 *)(DAT_0068f2e8 + 0x44));
            }
          }
        }
        else {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
      }
      else if (cVar3 == '\x01') {
        if (*(char *)(param_1 + 0x370) == '\0') {
          uVar6 = FUN_004ed254(DAT_0068f2e8);
          *(undefined4 *)(param_2 + 0x1c) = uVar6;
        }
        else {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        if ((*(int *)(param_2 + 0x1c) != 0) &&
           (((iVar7 = FUN_004df298(*(undefined4 *)(param_2 + 0x1c)), iVar7 != 0 ||
             (BVar8 = IsWindowVisible(*(HWND *)(param_2 + 0x1c)), BVar8 == 0)) ||
            (BVar8 = IsWindowEnabled(*(HWND *)(param_2 + 0x1c)), BVar8 == 0)))) {
          *(undefined4 *)(param_2 + 0x1c) = 0;
        }
        if ((*(HWND *)(param_2 + 0x1c) != (HWND)0x0) &&
           (uVar5 = GetWindowLongW(*(HWND *)(param_2 + 0x1c),-0x14), (uVar5 & 0x80) == 0x80)) {
          uVar6 = FUN_004e3d40(*(undefined4 *)(param_2 + 0x1c));
          *(undefined4 *)(param_2 + 0x1c) = uVar6;
        }
        iVar7 = *(int *)(param_2 + 0x1c);
        if (((iVar7 == 0) || (*(int *)(DAT_0068f2ec + 0x68) == 0)) ||
           (iVar7 != *(int *)(*(int *)(DAT_0068f2ec + 0x68) + 600))) {
          if (iVar7 == 0) {
            if (*(char *)(DAT_0068f2e8 + 0xd3) == '\0') {
              pHVar1 = *(HWND *)(DAT_0068f2e8 + 0x170);
              *(HWND *)(param_2 + 0x1c) = pHVar1;
              uVar5 = GetWindowLongW(pHVar1,-0x14);
              SetWindowLongW(pHVar1,-0x14,uVar5 & 0xffffff7f);
            }
            else if ((*(char *)(param_1 + 0x370) == '\0') &&
                    (param_1 != *(int *)(DAT_0068f2e8 + 0x44))) {
              if ((*(int *)(DAT_0068f2e8 + 0x44) == 0) ||
                 (cVar3 = FUN_004c4988(*(int *)(DAT_0068f2e8 + 0x44)), cVar3 == '\0')) {
                *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(DAT_0068f2e8 + 0x170);
              }
              else {
                iVar7 = FUN_004ed2a0(DAT_0068f2e8);
                *(int *)(param_2 + 0x1c) = iVar7;
                iVar4 = FUN_004c45dc(*(undefined4 *)(DAT_0068f2e8 + 0x44));
                if (iVar7 == iVar4) {
                  uVar6 = FUN_004e3700(*(undefined4 *)(DAT_0068f2e8 + 0x44));
                  iVar7 = FUN_00438f2c(uVar6,param_1);
                  if (iVar7 < 0) {
                    uVar6 = FUN_004e3700(*(undefined4 *)(DAT_0068f2e8 + 0x44));
                    FUN_00438d04(uVar6,param_1);
                  }
                  FUN_00446174(param_1,*(undefined4 *)(DAT_0068f2e8 + 0x44));
                }
              }
            }
            else {
              *(undefined4 *)(param_2 + 0x1c) = 0;
            }
          }
        }
        else {
          iVar9 = *(int *)(DAT_0068f2ec + 0x68);
        }
      }
      else if (cVar3 == '\x02') {
        if ((*(int *)(param_1 + 0x34c) == 0) || ((*(byte *)(param_1 + 0x1c) & 0x10) != 0)) {
          uVar6 = FUN_004ed2a0(DAT_0068f2e8);
          *(undefined4 *)(param_2 + 0x1c) = uVar6;
        }
        else {
          uVar6 = FUN_004c45dc(*(int *)(param_1 + 0x34c));
          *(undefined4 *)(param_2 + 0x1c) = uVar6;
          iVar9 = *(int *)(param_1 + 0x34c);
        }
        iVar7 = *(int *)(param_2 + 0x1c);
        if (((iVar7 == 0) || (*(int *)(DAT_0068f2e8 + 0x44) == 0)) ||
           (iVar7 != *(int *)(*(int *)(DAT_0068f2e8 + 0x44) + 600))) {
          if (iVar7 == 0) {
            pHVar1 = *(HWND *)(DAT_0068f2e8 + 0x170);
            *(HWND *)(param_2 + 0x1c) = pHVar1;
            if (*(char *)(DAT_0068f2e8 + 0xd3) == '\0') {
              uVar5 = GetWindowLongW(pHVar1,-0x14);
              SetWindowLongW(pHVar1,-0x14,uVar5 & 0xffffff7f);
            }
          }
        }
        else {
          iVar9 = *(int *)(DAT_0068f2e8 + 0x44);
        }
      }
    }
    else if (*(int *)(param_1 + 0x35c) == 0) {
      uVar6 = FUN_004c45dc(iVar7);
      *(undefined4 *)(param_2 + 0x1c) = uVar6;
      iVar9 = iVar7;
    }
    else {
      *(int *)(param_2 + 0x1c) = *(int *)(param_1 + 0x35c);
    }
    if (iVar9 == 0) {
      if (*(int *)(param_2 + 0x1c) != *(int *)(DAT_0068f2e8 + 0x170)) {
        *(int *)(param_1 + 0x35c) = *(int *)(param_2 + 0x1c);
      }
    }
    else {
      uVar6 = FUN_004e3700(iVar9);
      iVar7 = FUN_00438f2c(uVar6,param_1);
      if (iVar7 < 0) {
        uVar6 = FUN_004e3700(iVar9);
        FUN_00438d04(uVar6,param_1);
      }
      FUN_00446174(param_1,iVar9);
      *(int *)(param_1 + 0x358) = iVar9;
    }
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xbffcffff;
  }
  *(undefined4 *)(param_2 + 0x24) = 8;
  if (((*(byte *)(param_1 + 0x1c) & 0x10) == 0) || (*(int *)(param_1 + 0x34) != 0)) {
    if ((((*(byte *)(param_1 + 0x1c) & 0x10) == 0) || (*(int *)(param_1 + 0x34) == 0)) &&
       ((byte)(*(char *)(param_1 + 0x29f) - 1U) < 2)) {
      *(undefined4 *)(param_2 + 0xc) = 0x80000000;
      *(undefined4 *)(param_2 + 0x10) = 0x80000000;
    }
    iVar9 = param_2 + 0x24;
    FUN_00406268(param_1,param_2 + 4,param_2 + 8);
    bVar2 = *(byte *)(param_1 + 0x299);
    if ((*(char *)(param_1 + 0x29e) == '\x01') && ((bVar2 == 0 || (bVar2 == 3)))) {
      bVar2 = 2;
    }
    if ((((bVar2 == 2) || (bVar2 == 5)) &&
        (((*(byte *)(param_1 + 0x1c) & 0x10) == 0 || (*(int *)(param_1 + 0x34) == 0)))) &&
       ((*(char *)(param_1 + 0x29f) == '\x01' || (*(char *)(param_1 + 0x29f) == '\x03')))) {
      *(undefined4 *)(param_2 + 0x14) = 0x80000000;
      *(undefined4 *)(param_2 + 0x18) = 0x80000000;
    }
    if (bVar2 < 3) {
      if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
        if (*(char *)(param_1 + 0x29a) == '\x01') {
          if ((*(char *)(DAT_0068f2e8 + 0xd3) == '\0') || (*(char *)(param_1 + 0x370) == '\0')) {
            *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x20000000;
          }
          else {
            *(undefined1 *)(DAT_0068f2e8 + 0xdc) = 1;
          }
        }
        else if (*(char *)(param_1 + 0x29a) == '\x02') {
          *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x1000000;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x29a) = 0;
    }
    if ((*(byte *)(param_1 + 0x1d) & 2) != 0) {
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xff3fffff;
    }
    if (*(char *)(param_1 + 0x29e) == '\x01') {
      *(undefined **)(param_2 + 0x28) = &DAT_0040e5e4;
    }
    FUN_00406268(param_1,param_2 + 4,param_2 + 8);
    if ((*(char *)(DAT_0068f2e8 + 0xd3) != '\0') &&
       ((*(char *)(param_1 + 0x370) != '\0' ||
        (((((*(byte *)(param_1 + 0x1c) & 0x10) != 0 || ((*(byte *)(param_1 + 0x55) & 0x20) != 0)) &&
          (*(char *)(param_1 + 0x29e) != '\x01')) && (param_1 == *(int *)(DAT_0068f2e8 + 0x44)))))))
    {
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40000;
    }
    cVar3 = FUN_004e1c20(param_1);
    if ((cVar3 != '\0') && (*(char *)(param_1 + 0x29a) == '\x02')) {
      FUN_0040c354(0,0,*(undefined4 *)(param_1 + 0x2d0),&stack0xffffffdc,
                   *(undefined4 *)(param_1 + 0x2d4));
      BVar8 = AdjustWindowRectEx((LPRECT)&stack0xffffffdc,*(DWORD *)(param_2 + 4),
                                 -(uint)(*(int *)(param_1 + 0x2b4) != 0),*(DWORD *)(param_2 + 8));
      if (BVar8 != 0) {
        *(int *)(param_2 + 0x14) = iStack_1c - iVar9;
        *(int *)(param_2 + 0x18) = iStack_18 - iStack_20;
      }
    }
  }
  else {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0xcf0000;
  }
  return;
}
