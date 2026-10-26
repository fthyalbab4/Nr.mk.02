// rea decompile_all
// name: FUN_005a809c
// address: 0x5a809c
// body: available
// range: 0x5a809c-0x5a86a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a80c3 (push 0x5a86a6 followed by fs-segment stack chaining); handler 0x5a86a6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_005a809c(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  LPWSTR lpWideCharStr;
  DWORD DVar5;
  int iVar6;
  LONG LVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_e8;
  undefined1 *puStack_e4;
  undefined1 *puStack_e0;
  undefined4 local_d0;
  MAT2 local_cc;
  _GLYPHMETRICS local_bc;
  tagTEXTMETRICW local_a8;
  UINT local_60;
  undefined1 local_59;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  LPVOID local_40;
  int *local_3c;
  HDC local_34;
  DWORD local_30;
  undefined4 local_2c;
  UINT local_24;
  int local_10 [2];
  ushort *local_8;

  puStack_e0 = &stack0xfffffffc;
  local_d0 = 0;
  local_8 = (ushort *)0x0;
  local_10[1] = 0;
  puStack_e4 = &LAB_005a86a6;
  uStack_e8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_e8;
  iVar2 = FUN_00405a4c(&DAT_005a7ffc,1);
  iVar6 = iVar2;
  if (iVar2 != 0) {
    iVar6 = iVar2 + 8;
  }
  FUN_0040b158(local_10 + 1,iVar6);
  *(undefined4 *)(iVar2 + 0xc) = param_1;
  local_2c = FUN_00462144(&PTR_FUN_004587d4,1);
  FUN_00463dc0(local_2c,6);
  uVar3 = FUN_005a86b4(*(undefined4 *)(iVar2 + 0xc));
  iVar6 = FUN_00462a64(local_2c);
  (**(code **)(**(int **)(iVar6 + 0x40) + 8))(*(int **)(iVar6 + 0x40),uVar3);
  FUN_00405a7c(uVar3);
  FUN_00462a64(local_2c);
  local_34 = (HDC)FUN_0045ce2c();
  FUN_00404f08(&local_bc,0x14,0);
  BVar4 = GetTextMetricsW(local_34,&local_a8);
  if (BVar4 != 0) {
    local_cc.eM11.value = 1;
    local_cc.eM11.fract = 0;
    local_cc.eM12.value = 0;
    local_cc.eM12.fract = 0;
    local_cc.eM21.value = 0;
    local_cc.eM21.fract = 0;
    local_cc.eM22.value = 1;
    local_cc.eM22.fract = 0;
    iVar6 = *(int *)(*(int *)(iVar2 + 0xc) + 0x1c);
    if (iVar6 == 0) {
      local_24 = 1;
    }
    else if (iVar6 == 1) {
      local_24 = 4;
    }
    else if (iVar6 == 2) {
      local_24 = 5;
    }
    else if (iVar6 == 3) {
      local_24 = 6;
    }
    else {
      local_24 = 1;
    }
    local_30 = 0x100000;
    local_44 = 99999;
    local_60 = FUN_005a7888(*(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x18));
    FUN_00408244(&local_8,1);
    iVar6 = *(int *)(*(int *)(iVar2 + 0xc) + 0x10);
    iVar8 = *(int *)(*(int *)(iVar2 + 0xc) + 0x14);
    if (iVar6 <= iVar8) {
      iVar8 = (iVar8 - iVar6) + 1;
      local_10[0] = iVar6;
      do {
        if (local_10[0] == 0) {
          *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x1820) = 0;
        }
        else {
          iVar6 = 1;
          lpWideCharStr = (LPWSTR)FUN_00407f44(local_8);
          MultiByteToWideChar(local_60,0,(LPCSTR)local_10,1,lpWideCharStr,iVar6);
          *(uint *)(*(int *)(iVar2 + 0xc) + 0x1820 + local_10[0] * 4) = (uint)*local_8;
        }
        DVar5 = GetGlyphOutlineW(local_34,*(UINT *)(*(int *)(iVar2 + 0xc) + 0x1820 + local_10[0] * 4
                                                   ),local_24,&local_bc,0,(LPVOID)0x0,&local_cc);
        if ((int)local_30 < (int)DVar5) {
          local_30 = DVar5;
        }
        if (local_10[0] == 0x20) {
          if (local_bc.gmCellIncX == 0) {
            if (local_a8.tmAveCharWidth < local_a8.tmMaxCharWidth) {
              local_44 = local_a8.tmAveCharWidth;
            }
            else {
              local_44 = local_a8.tmMaxCharWidth;
            }
          }
          else {
            local_44 = (int)local_bc.gmCellIncX;
          }
        }
        *(UINT *)(*(int *)(iVar2 + 0xc) + 0x820 + local_10[0] * 4) = local_bc.gmBlackBoxX;
        *(UINT *)(*(int *)(iVar2 + 0xc) + 0xc20 + local_10[0] * 4) =
             (local_a8.tmAscent - local_bc.gmptGlyphOrigin.y) + local_bc.gmBlackBoxY;
        LVar7 = local_bc.gmptGlyphOrigin.x;
        if (-1 < local_bc.gmptGlyphOrigin.x) {
          LVar7 = 0;
        }
        *(int *)(*(int *)(iVar2 + 0xc) + 0x1020 + local_10[0] * 4) = local_bc.gmCellIncX - LVar7;
        *(LONG *)(*(int *)(iVar2 + 0xc) + 0x1420 + local_10[0] * 4) = local_bc.gmptGlyphOrigin.x;
        *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x20 + local_10[0] * 4) = 0;
        *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x420 + local_10[0] * 4) = 0;
        if (DVar5 == 0) {
          *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x1020 + local_10[0] * 4) = 0;
          *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x1420 + local_10[0] * 4) = 0;
          *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x820 + local_10[0] * 4) = 0;
          *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xc20 + local_10[0] * 4) = 0;
        }
        local_10[0] = local_10[0] + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (*(int *)(*(int *)(iVar2 + 0xc) + 0xca0) == 0) {
      *(LONG *)(*(int *)(iVar2 + 0xc) + 0xca0) = local_a8.tmHeight;
    }
    if (*(int *)(*(int *)(iVar2 + 0xc) + 0x8a0) == 0) {
      if (local_44 == 0) {
        GetGlyphOutlineW(local_34,0x20,local_24,&local_bc,0,(LPVOID)0x0,&local_cc);
        if (local_bc.gmCellIncX == 0) {
          if (local_a8.tmAveCharWidth < local_a8.tmMaxCharWidth) {
            local_44 = local_a8.tmAveCharWidth;
          }
          else {
            local_44 = local_a8.tmMaxCharWidth;
          }
        }
        else {
          local_44 = (int)local_bc.gmCellIncX;
        }
        *(int *)(*(int *)(iVar2 + 0xc) + 0x8a0) = local_44;
      }
      *(int *)(*(int *)(iVar2 + 0xc) + 0x8a0) = local_44;
      *(int *)(*(int *)(iVar2 + 0xc) + 0x10a0) = local_44;
    }
    iVar6 = (*(int *)(*(int *)(iVar2 + 0xc) + 0x14) + 1) - *(int *)(*(int *)(iVar2 + 0xc) + 0x10);
    local_3c = (int *)FUN_005a8c68(&PTR_LAB_005a6fd0,1);
    if (-1 < iVar6 + -1) {
      local_10[0] = 0;
      do {
        if (*(int *)(*(int *)(iVar2 + 0xc) + 0x820 + local_10[0] * 4) *
            *(int *)(*(int *)(iVar2 + 0xc) + 0xc20 + local_10[0] * 4) != 1) {
          FUN_005a8e34(local_3c,*(int *)(*(int *)(iVar2 + 0xc) + 0x10) + local_10[0]);
        }
        local_10[0] = local_10[0] + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = iVar2;
    if (iVar2 != 0) {
      iVar6 = iVar2 + 0x10;
    }
    FUN_005a95a8(&PTR_FUN_005a7e10,iVar6,&local_d0);
    FUN_005a9448(local_3c,local_d0);
    iVar6 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar6 + 0x1c20) = 0x800;
    *(undefined4 *)(iVar6 + 0x1c24) = 0x800;
    local_50 = 2;
    local_54 = 2;
    FUN_005a7a44(iVar6,local_3c,2,2);
    iVar6 = *(int *)(iVar2 + 0xc);
    FUN_00409be0(iVar6 + 0x1c28,&DAT_005a65a4,1,*(int *)(iVar6 + 0x1c24) * *(int *)(iVar6 + 0x1c20))
    ;
    local_40 = (LPVOID)FUN_0040431c(local_30);
    iVar8 = 0;
    local_4c = 0;
    local_58 = 0;
    local_59 = 0;
    iVar6 = local_3c[2];
    if (-1 < iVar6 + -1) {
      local_48 = 0;
      do {
        local_10[0] = FUN_005a8b3c(local_3c,local_48);
        if (*(int *)(*(int *)(iVar2 + 0xc) + 0x1c20) <=
            *(int *)(*(int *)(iVar2 + 0xc) + 0x820 + local_10[0] * 4) + iVar8) {
          iVar8 = 0;
          local_4c = local_4c + local_58 + local_54;
          local_58 = 0;
        }
        FUN_00404f08(local_40,local_30,0);
        GetGlyphOutlineW(local_34,*(UINT *)(*(int *)(iVar2 + 0xc) + 0x1820 + local_10[0] * 4),
                         local_24,&local_bc,local_30,local_40,&local_cc);
        if (local_58 < *(int *)(*(int *)(iVar2 + 0xc) + 0xc20 + local_10[0] * 4)) {
          local_58 = *(int *)(*(int *)(iVar2 + 0xc) + 0xc20 + local_10[0] * 4);
        }
        *(int *)(*(int *)(iVar2 + 0xc) + 0x20 + local_10[0] * 4) = iVar8;
        *(int *)(*(int *)(iVar2 + 0xc) + 0x420 + local_10[0] * 4) = local_4c;
        if (local_10[0] != 0x20) {
          FUN_005a7b54(*(undefined4 *)(iVar2 + 0xc),local_24,local_4c,local_40,&local_a8,&local_bc,
                       local_10[0],iVar8);
        }
        iVar8 = iVar8 + *(int *)(*(int *)(iVar2 + 0xc) + 0x820 + local_10[0] * 4) + local_50;
        local_48 = local_48 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_00404338(local_40);
    (**(code **)(*local_3c + -4))(local_3c,1);
    FUN_00405a7c(local_2c);
  }
  puVar1 = puStack_e0;
  *in_FS_OFFSET = uStack_e8;
  puStack_e0 = &LAB_005a86ad;
  puStack_e4 = (undefined1 *)0x5a8695;
  FUN_0040b140(&local_d0,uStack_e8,puVar1);
  puStack_e4 = (undefined1 *)0x5a869d;
  FUN_0040b140(local_10 + 1);
  puStack_e4 = (undefined1 *)0x5a86a5;
  thunk_FUN_00406e5c(&local_8);
  return;
}
