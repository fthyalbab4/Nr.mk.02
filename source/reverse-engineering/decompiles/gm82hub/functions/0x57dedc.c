// rea decompile_all
// name: FUN_0057dedc
// address: 0x57dedc
// body: available
// range: 0x57dedc-0x57e4a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57df00 (push 0x57e4a9 followed by fs-segment stack chaining); handler 0x57e4a9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057dedc(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  BOOL BVar4;
  DWORD DVar5;
  uint uVar6;
  int iVar7;
  UINT UVar8;
  UINT UVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_100;
  undefined1 *puStack_fc;
  undefined1 *puStack_f8;
  undefined4 local_ec;
  MAT2 local_e8;
  _GLYPHMETRICS local_d8;
  tagTEXTMETRICW local_c4;
  int local_7c;
  UINT local_78;
  int local_74;
  undefined1 local_6d;
  byte *local_6c;
  undefined1 *local_68;
  byte *local_64;
  undefined1 *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  byte *local_3c;
  int *local_38;
  HDC local_30;
  DWORD local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_c;
  undefined4 local_8;

  puStack_f8 = &stack0xfffffffc;
  local_ec = 0;
  local_8 = 0;
  puStack_fc = &LAB_0057e4a9;
  uStack_100 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_100;
  local_c = param_1;
  iVar2 = FUN_00405fac(&DAT_0057de3c,1);
  iVar7 = iVar2;
  if (iVar2 != 0) {
    iVar7 = iVar2 + 8;
  }
  FUN_0040b280(&local_8,iVar7);
  *(undefined4 *)(iVar2 + 0xc) = local_c;
  local_24 = FUN_00462804(&PTR_FUN_00458e94,1);
  FUN_00464480(local_24,6);
  uVar3 = FUN_0057e4b8(*(undefined4 *)(iVar2 + 0xc));
  iVar7 = FUN_00463124(local_24);
  (**(code **)(**(int **)(iVar7 + 0x40) + 8))(*(int **)(iVar7 + 0x40),uVar3);
  FUN_00405fdc(uVar3);
  FUN_00463124(local_24);
  local_30 = (HDC)FUN_0045d4ec();
  FUN_00404f38(&local_d8,0x14,0);
  BVar4 = GetTextMetricsW(local_30,&local_c4);
  if (BVar4 != 0) {
    local_e8.eM11.value = 1;
    local_e8.eM11.fract = 0;
    local_e8.eM12.value = 0;
    local_e8.eM12.fract = 0;
    local_e8.eM21.value = 0;
    local_e8.eM21.fract = 0;
    local_e8.eM22.value = 1;
    local_e8.eM22.fract = 0;
    local_2c = 0x100000;
    local_40 = 99999;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x1834) = 0xffffffff;
    UVar9 = *(UINT *)(*(int *)(iVar2 + 0xc) + 0x18);
    iVar7 = *(int *)(*(int *)(iVar2 + 0xc) + 0x1c);
    if ((int)UVar9 <= iVar7) {
      local_74 = (iVar7 - UVar9) + 1;
      do {
        DVar5 = GetGlyphOutlineW(local_30,UVar9,6,&local_d8,0,(LPVOID)0x0,&local_e8);
        if ((int)local_2c < (int)DVar5) {
          local_2c = DVar5;
        }
        if (UVar9 == 0x20) {
          if (local_d8.gmCellIncX == 0) {
            if (local_c4.tmAveCharWidth < local_c4.tmMaxCharWidth) {
              local_40 = local_c4.tmAveCharWidth;
            }
            else {
              local_40 = local_c4.tmMaxCharWidth;
            }
          }
          else {
            local_40 = (int)local_d8.gmCellIncX;
          }
        }
        iVar7 = *(int *)(iVar2 + 0xc);
        *(UINT *)(iVar7 + 0x824 + UVar9 * 4) = local_d8.gmBlackBoxX;
        *(UINT *)(iVar7 + 0xc24 + UVar9 * 4) =
             (local_c4.tmAscent - local_d8.gmptGlyphOrigin.y) + local_d8.gmBlackBoxY;
        if (local_d8.gmptGlyphOrigin.x < 0) {
          local_7c = local_d8.gmptGlyphOrigin.x;
        }
        else {
          local_7c = 0;
        }
        *(int *)(iVar7 + 0x1024 + UVar9 * 4) = local_d8.gmCellIncX - local_7c;
        *(LONG *)(iVar7 + 0x1424 + UVar9 * 4) = local_d8.gmptGlyphOrigin.x;
        *(undefined4 *)(iVar7 + 0x24 + UVar9 * 4) = 0;
        *(undefined4 *)(iVar7 + 0x424 + UVar9 * 4) = 0;
        if (*(int *)(iVar7 + 0x1834) < *(int *)(*(int *)(iVar2 + 0xc) + 0xc24 + UVar9 * 4)) {
          *(undefined4 *)(iVar7 + 0x1834) =
               *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xc24 + UVar9 * 4);
        }
        if (DVar5 == 0) {
          iVar7 = *(int *)(iVar2 + 0xc);
          *(undefined4 *)(iVar7 + 0x1024 + UVar9 * 4) = 0;
          *(undefined4 *)(iVar7 + 0x1424 + UVar9 * 4) = 0;
          *(undefined4 *)(iVar7 + 0x824 + UVar9 * 4) = 0;
          *(undefined4 *)(iVar7 + 0xc24 + UVar9 * 4) = 0;
        }
        UVar9 = UVar9 + 1;
        local_74 = local_74 + -1;
      } while (local_74 != 0);
    }
    if (*(int *)(*(int *)(iVar2 + 0xc) + 0xca4) == 0) {
      *(LONG *)(*(int *)(iVar2 + 0xc) + 0xca4) = local_c4.tmHeight;
    }
    if (*(int *)(*(int *)(iVar2 + 0xc) + 0x8a4) == 0) {
      if (local_40 == 0) {
        GetGlyphOutlineW(local_30,0x20,6,&local_d8,0,(LPVOID)0x0,&local_e8);
        if (local_d8.gmCellIncX == 0) {
          if (local_c4.tmAveCharWidth < local_c4.tmMaxCharWidth) {
            local_40 = local_c4.tmAveCharWidth;
          }
          else {
            local_40 = local_c4.tmMaxCharWidth;
          }
        }
        else {
          local_40 = (int)local_d8.gmCellIncX;
        }
        *(int *)(*(int *)(iVar2 + 0xc) + 0x8a4) = local_40;
      }
      *(int *)(*(int *)(iVar2 + 0xc) + 0x8a4) = local_40;
      *(int *)(*(int *)(iVar2 + 0xc) + 0x10a4) = local_40;
    }
    local_28 = (*(int *)(*(int *)(iVar2 + 0xc) + 0x1c) + 1) - *(int *)(*(int *)(iVar2 + 0xc) + 0x18)
    ;
    local_38 = (int *)FUN_0057fdb0(&PTR_LAB_0057d074,
                                   CONCAT31((int3)((uint)*(int *)(iVar2 + 0xc) >> 8),1));
    if (-1 < local_28 + -1) {
      local_74 = local_28;
      iVar7 = 0;
      do {
        if (*(int *)(*(int *)(iVar2 + 0xc) + 0x824 + iVar7 * 4) *
            *(int *)(*(int *)(iVar2 + 0xc) + 0xc24 + iVar7 * 4) != 1) {
          FUN_0057ff7c(local_38,*(int *)(*(int *)(iVar2 + 0xc) + 0x18) + iVar7);
        }
        iVar7 = iVar7 + 1;
        local_74 = local_74 + -1;
      } while (local_74 != 0);
    }
    iVar7 = iVar2;
    if (iVar2 != 0) {
      iVar7 = iVar2 + 0x10;
    }
    FUN_005806f0(&PTR_FUN_0057dc50,iVar7,&local_ec);
    FUN_00580590(local_38,local_ec);
    *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x1824) = 0x800;
    *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x1828) = 0x800;
    local_54 = 2;
    local_58 = 2;
    FUN_0057da44(*(undefined4 *)(iVar2 + 0xc),local_38,2,2);
    FUN_00409dfc(*(int *)(iVar2 + 0xc) + 0x182c,&DAT_0057c1dc,1,
                 *(int *)(*(int *)(iVar2 + 0xc) + 0x1828) * *(int *)(*(int *)(iVar2 + 0xc) + 0x1824)
                );
    local_3c = (byte *)FUN_00404324(local_2c);
    local_4c = 0;
    local_50 = 0;
    local_5c = 0;
    local_6d = 0;
    if (-1 < local_38[2] + -1) {
      local_48 = 0;
      local_74 = local_38[2];
      do {
        UVar9 = FUN_0057fc84(local_38,local_48);
        if (*(int *)(*(int *)(iVar2 + 0xc) + 0x1824) <=
            *(int *)(*(int *)(iVar2 + 0xc) + 0x824 + UVar9 * 4) + local_4c) {
          local_4c = 0;
          local_50 = local_50 + local_5c + local_58;
          local_5c = 0;
        }
        FUN_00404f38(local_3c,local_2c,0);
        GetGlyphOutlineW(local_30,UVar9,6,&local_d8,local_2c,local_3c,&local_e8);
        iVar7 = *(int *)(iVar2 + 0xc);
        if (local_5c < *(int *)(iVar7 + 0xc24 + UVar9 * 4)) {
          local_5c = *(int *)(*(int *)(iVar2 + 0xc) + 0xc24 + UVar9 * 4);
        }
        *(int *)(iVar7 + 0x24 + UVar9 * 4) = local_4c;
        *(int *)(iVar7 + 0x424 + UVar9 * 4) = local_50;
        if (UVar9 != 0x20) {
          local_44 = *(int *)(*(int *)(iVar2 + 0xc) + 0x824 + UVar9 * 4) + 3U & 0xfffffffc;
          local_60 = (undefined1 *)
                     (*(int *)(iVar7 + 0x182c) +
                     ((local_c4.tmAscent - local_d8.gmptGlyphOrigin.y) + local_50) *
                     *(int *)(iVar7 + 0x1824) + local_4c);
          local_64 = local_3c;
          if (-1 < (int)(local_d8.gmBlackBoxY - 1)) {
            local_78 = local_d8.gmBlackBoxY;
            do {
              local_68 = local_60;
              local_6c = local_64;
              UVar8 = local_d8.gmBlackBoxX;
              if (-1 < (int)(local_d8.gmBlackBoxX - 1)) {
                do {
                  uVar6 = (uint)*local_6c * 4;
                  if (0xff < uVar6) {
                    uVar6 = 0xff;
                  }
                  *local_68 = (char)uVar6;
                  local_68 = local_68 + 1;
                  local_6c = local_6c + 1;
                  UVar8 = UVar8 - 1;
                } while (UVar8 != 0);
              }
              local_60 = local_60 + *(int *)(*(int *)(iVar2 + 0xc) + 0x1824);
              local_64 = local_64 + local_44;
              local_78 = local_78 - 1;
            } while (local_78 != 0);
          }
        }
        local_4c = *(int *)(*(int *)(iVar2 + 0xc) + 0x824 + UVar9 * 4) + local_4c + local_54;
        local_48 = local_48 + 1;
        local_74 = local_74 + -1;
      } while (local_74 != 0);
    }
    FUN_00404340(local_3c);
    (**(code **)(*local_38 + -4))(local_38,1);
    FUN_00405fdc(local_24);
  }
  puVar1 = puStack_f8;
  *in_FS_OFFSET = uStack_100;
  puStack_f8 = &LAB_0057e4b0;
  puStack_fc = (undefined1 *)0x57e4a0;
  FUN_0040b268(&local_ec,uStack_100,puVar1);
  puStack_fc = (undefined1 *)0x57e4a8;
  FUN_0040b268(&local_8);
  return;
}
