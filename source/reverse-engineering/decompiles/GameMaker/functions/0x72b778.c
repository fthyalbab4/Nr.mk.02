// rea decompile_all
// name: FUN_0072b778
// address: 0x72b778
// body: available
// range: 0x72b778-0x72bff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72b7af (push 0x72bff4 followed by fs-segment stack chaining); handler 0x72bff4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072b778(int param_1,HDC param_2,int *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte *pbVar3;
  char cVar4;
  short sVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  DWORD *pDVar10;
  BITMAPINFO *pBVar11;
  int iVar12;
  uint uVar13;
  undefined4 *in_FS_OFFSET;
  byte bVar14;
  undefined4 uStack_f0;
  undefined1 *puStack_ec;
  undefined1 *puStack_e8;
  undefined4 local_d4;
  undefined4 local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  uint local_c4;
  undefined4 uStack_c0;
  BITMAPINFO local_bc;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  byte *local_7c;
  byte *local_78;
  uint local_74;
  uint local_70;
  double local_6c;
  double local_64;
  char local_59;
  uint local_58;
  uint local_54;
  int local_50;
  void *local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  byte *local_34;
  int local_30;
  byte local_29;
  undefined4 local_28;
  int local_24;
  int local_20;
  HBITMAP local_1c;
  HGDIOBJ local_18;
  void *local_14;
  HDC local_10;
  HDC local_c;
  int local_8;

  bVar14 = 0;
  puStack_e8 = &stack0xfffffffc;
  local_d4 = 0;
  local_d0 = 0;
  local_90 = *param_3;
  local_8c = param_3[1];
  local_88 = param_3[2];
  local_84 = param_3[3];
  puStack_ec = &LAB_0072bff4;
  uStack_f0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_f0;
  puVar6 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if ((local_88 != local_90) && (puVar6 = &stack0xfffffffc, local_84 != local_8c)) {
    FUN_0072b758(&local_90);
    local_54 = local_88 - local_90;
    local_58 = local_84 - local_8c;
    local_20 = FUN_0072b6bc(local_8);
    if ((*(uint *)(local_20 + 0x458) == local_54) && (*(uint *)(local_20 + 0x45c) == local_58)) {
      local_59 = '\0';
    }
    else {
      local_59 = '\x01';
    }
    if (local_59 == '\0') {
      local_64 = 1.0;
      local_6c = 1.0;
    }
    else {
      local_64 = (double)local_54 / (double)*(uint *)(local_20 + 0x458);
      local_c4 = local_58;
      uStack_c0 = 0;
      local_cc = *(uint *)(local_20 + 0x45c);
      uStack_c8 = 0;
      local_6c = (double)local_58 / (double)local_cc;
    }
    FUN_00404f08(&local_bc,0x2c,0);
    DAT_0077f738 = local_54;
    _DAT_0077f73c = -local_58;
    pDVar10 = &DAT_0077f734;
    pBVar11 = &local_bc;
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      (pBVar11->bmiHeader).biSize = *pDVar10;
      pDVar10 = pDVar10 + (uint)bVar14 * -2 + 1;
      pBVar11 = (BITMAPINFO *)((int)pBVar11 + ((uint)bVar14 * -2 + 1) * 4);
    }
    local_10 = CreateCompatibleDC((HDC)0x0);
    if (local_10 == (HDC)0x0) {
      FUN_0040b75c(PTR_PTR_00781754,&local_d0);
      FUN_0072b474(local_8,&PTR_LAB_00722e48,local_d0);
    }
    local_1c = CreateDIBSection(local_10,&local_bc,0,&local_14,(HANDLE)0x0,0);
    if ((local_1c == (HBITMAP)0x0) || (local_14 == (void *)0x0)) {
      if (local_1c != (HBITMAP)0x0) {
        DeleteObject(local_1c);
      }
      DeleteDC(local_10);
      FUN_0040b75c(PTR_PTR_00781754,&local_d4);
      FUN_0072b474(local_8,&PTR_LAB_00722e48,local_d4);
    }
    local_18 = SelectObject(local_10,local_1c);
    BitBlt(local_10,0,0,local_54,local_58,local_c,local_90,local_8c,0xcc0020);
    local_40 = *(int *)(local_20 + 0x458);
    local_38 = (local_bc.bmiHeader.biBitCount * local_54 + 0x1f & 0xffffffe0) >> 3;
    local_3c = ((uint)*(ushort *)(local_20 + 0x2f) * *(int *)(local_20 + 0x458) + 0x1f & 0xffffffe0)
               >> 3;
    local_4c = local_14;
    iVar9 = *(int *)(local_20 + 0x454);
    local_48 = *(int *)(local_20 + 0x468) * (*(int *)(local_20 + 0x45c) + -1) +
               *(int *)(local_20 + 0x450);
    sVar5 = *(short *)(local_20 + 0x2f);
    local_44 = local_48;
    if (((sVar5 == 1) || (sVar5 == 4)) || (sVar5 == 8)) {
      if (*(char *)(local_20 + 0x461) == '\x04') {
        if (0 < (int)local_58) {
          local_70 = local_58;
          local_50 = 1;
          do {
            if (-1 < (int)(local_54 - 1)) {
              local_74 = local_54;
              iVar12 = 0;
              do {
                local_7c = (byte *)((int)local_4c + iVar12 * 4);
                local_80 = local_20 + 0x21;
                iVar7 = iVar12;
                if (local_59 != '\0') {
                  iVar7 = FUN_00404884();
                }
                local_7c[2] = (byte)((ulonglong)
                                     ((uint)*(byte *)(local_44 + iVar7) *
                                      (uint)*(byte *)(iVar9 + iVar7) + 0x7f +
                                     (uint)(byte)~*(byte *)(iVar9 + iVar7) * (uint)local_7c[2]) /
                                    0xff);
                local_7c[1] = (byte)((ulonglong)
                                     ((uint)*(byte *)(local_44 + iVar7) *
                                      (uint)*(byte *)(iVar9 + iVar7) + 0x7f +
                                     (uint)(byte)~*(byte *)(iVar9 + iVar7) * (uint)local_7c[1]) /
                                    0xff);
                *local_7c = (byte)((ulonglong)
                                   ((uint)*(byte *)(local_44 + iVar7) *
                                    (uint)*(byte *)(iVar9 + iVar7) + 0x7f +
                                   (uint)(byte)~*(byte *)(iVar9 + iVar7) * (uint)*local_7c) / 0xff);
                local_7c[3] = ~(byte)(((uint)(byte)~*(byte *)(iVar9 + iVar7) *
                                       (uint)(byte)~local_7c[3] + 0x7f) / 0xff);
                iVar12 = iVar12 + 1;
                local_74 = local_74 - 1;
              } while (local_74 != 0);
            }
            local_4c = (void *)((int)local_4c + local_38);
            iVar9 = local_50;
            if (local_59 != '\0') {
              iVar9 = FUN_00404884();
            }
            local_44 = local_48 - local_3c * iVar9;
            iVar9 = *(int *)(local_20 + 0x454) + local_40 * iVar9;
            local_50 = local_50 + 1;
            local_70 = local_70 - 1;
          } while (local_70 != 0);
          local_70 = 0;
        }
      }
      else {
        local_24 = FUN_007272ec(*(undefined4 *)(local_8 + 0x138),&PTR_LAB_00725b10);
        local_28 = FUN_007272ec(*(undefined4 *)(local_8 + 0x138),&PTR_LAB_00725940);
        if (0 < (int)local_58) {
          local_70 = local_58;
          local_50 = 1;
          do {
            uVar13 = 0;
            do {
              local_30 = 0;
              uVar8 = uVar13;
              if (local_59 != '\0') {
                uVar8 = FUN_00404884();
              }
              local_34 = (byte *)(local_44 + uVar8);
              do {
                cVar4 = *(char *)(local_20 + 0x460);
                if (cVar4 == '\x01') {
                  uVar8 = uVar13 & 0x80000007;
                  if ((int)uVar8 < 0) {
                    uVar8 = (uVar8 - 1 | 0xfffffff8) + 1;
                  }
                  local_29 = *local_34 >> (7U - (char)uVar8 & 0x1f) & 1;
                }
                else if ((cVar4 == '\x02') || (cVar4 == '\x04')) {
                  uVar8 = uVar13 & 0x80000001;
                  if ((int)uVar8 < 0) {
                    uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
                  }
                  local_29 = *local_34 >> (('\x01' - (char)uVar8) * '\x04' & 0x1fU) & 0xf;
                }
                else {
                  local_29 = *local_34;
                }
                pbVar3 = (byte *)((int)local_4c + uVar13 * 4);
                bVar14 = *(byte *)(local_24 + 0x15 + (uint)local_29);
                uVar8 = FUN_0072aa0c(local_28,local_29);
                pbVar3[2] = (byte)((uVar8 >> 0x10 & 0xff) * (uint)bVar14 + 0xff +
                                   (0xff - (uint)bVar14) * (uint)pbVar3[2] >> 8);
                uVar8 = FUN_0072aa0c(local_28,local_29);
                pbVar3[1] = (byte)((uVar8 >> 8 & 0xff) * (uint)bVar14 + 0xff +
                                   (0xff - (uint)bVar14) * (uint)pbVar3[1] >> 8);
                uVar8 = FUN_0072aa0c(local_28,local_29);
                *pbVar3 = (byte)((uVar8 & 0xff) * (uint)bVar14 + 0xff +
                                 (0xff - (uint)bVar14) * (uint)*pbVar3 >> 8);
                uVar13 = uVar13 + 1;
                local_30 = local_30 + (uint)*(ushort *)(local_20 + 0x2f);
              } while (local_30 < 8);
            } while ((int)uVar13 < (int)local_54);
            local_4c = (void *)((int)local_4c + local_38);
            iVar9 = local_50;
            if (local_59 != '\0') {
              iVar9 = FUN_00404884();
            }
            local_44 = local_48 - local_3c * iVar9;
            local_50 = local_50 + 1;
            local_70 = local_70 - 1;
          } while (local_70 != 0);
        }
      }
    }
    else if ((sVar5 == 0x18) && (0 < (int)local_58)) {
      local_70 = local_58;
      local_50 = 1;
      do {
        if (-1 < (int)(local_54 - 1)) {
          local_74 = local_54;
          iVar12 = 0;
          do {
            iVar7 = iVar12;
            if (local_59 != '\0') {
              iVar7 = FUN_00404884();
            }
            if (*(char *)(iVar9 + iVar7) != '\0') {
              if (*(char *)(iVar9 + iVar7) == -1) {
                puVar1 = (undefined2 *)((int)local_4c + iVar12 * 4);
                puVar2 = (undefined2 *)(local_44 + iVar7 * 3);
                *puVar1 = *puVar2;
                *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
                *(undefined1 *)((int)local_4c + iVar12 * 4 + 3) = 0xff;
              }
              else {
                local_78 = (byte *)((int)local_4c + iVar12 * 4);
                local_78[2] = (byte)((ulonglong)
                                     ((uint)*(byte *)(local_44 + iVar7 * 3 + 2) *
                                      (uint)*(byte *)(iVar9 + iVar7) + 0x7f +
                                     (uint)(byte)~*(byte *)(iVar9 + iVar7) * (uint)local_78[2]) /
                                    0xff);
                local_78[1] = (byte)((ulonglong)
                                     ((uint)*(byte *)(local_44 + iVar7 * 3 + 1) *
                                      (uint)*(byte *)(iVar9 + iVar7) + 0x7f +
                                     (uint)(byte)~*(byte *)(iVar9 + iVar7) * (uint)local_78[1]) /
                                    0xff);
                *local_78 = (byte)((ulonglong)
                                   ((uint)*(byte *)(local_44 + iVar7 * 3) *
                                    (uint)*(byte *)(iVar9 + iVar7) + 0x7f +
                                   (uint)(byte)~*(byte *)(iVar9 + iVar7) * (uint)*local_78) / 0xff);
                local_78[3] = ~(byte)(((uint)(byte)~*(byte *)(iVar9 + iVar7) *
                                       (uint)(byte)~local_78[3] + 0x7f) / 0xff);
              }
            }
            iVar12 = iVar12 + 1;
            local_74 = local_74 - 1;
          } while (local_74 != 0);
        }
        local_4c = (void *)((int)local_4c + local_38);
        iVar9 = local_50;
        if (local_59 != '\0') {
          iVar9 = FUN_00404884();
        }
        local_44 = local_48 - local_3c * iVar9;
        iVar9 = *(int *)(local_20 + 0x454) + local_40 * iVar9;
        local_50 = local_50 + 1;
        local_70 = local_70 - 1;
      } while (local_70 != 0);
      local_70 = 0;
    }
    BitBlt(local_c,local_90,local_8c,local_54,local_58,local_10,0,0,0xcc0020);
    SelectObject(local_10,local_18);
    DeleteObject(local_1c);
    DeleteDC(local_10);
    puVar6 = puStack_e8;
  }
  puStack_e8 = puVar6;
  puVar6 = puStack_e8;
  *in_FS_OFFSET = uStack_f0;
  puStack_e8 = &LAB_0072bffb;
  puStack_ec = (undefined1 *)0x72bff3;
  thunk_FUN_00406e80(&local_d4,2,puVar6);
  return;
}
