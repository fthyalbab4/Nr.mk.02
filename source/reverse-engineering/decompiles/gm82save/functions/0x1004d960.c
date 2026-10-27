// rea decompile_all
// name: FUN_1004d960
// address: 0x1004d960
// body: available
// range: 0x1004d960-0x1004dac1 inclusive
// range: 0x1004dad0-0x1004e144 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1004d960(int param_1,undefined8 *param_2,char param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 *local_124;
  double local_120;
  double local_110;
  double local_e0;

  uVar2 = *(uint *)(param_1 + 4);
  uVar12 = *(uint *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  if (uVar12 < uVar2) {
    uVar5 = (uVar12 << 4) / uVar2;
    uVar6 = 0x10;
  }
  else {
    if (uVar12 == 0) {
      FUN_10136ca0(&DAT_101417cc);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar6 = (uVar2 << 4) / uVar12;
    uVar5 = 0x10;
  }
  uVar18 = uVar2 * uVar12 * 4;
  uVar8 = 8 - (uVar5 >> 1);
  iVar9 = 0x400;
  dVar24 = (double)((ulonglong)uVar6 | 0x4330000000000000) - 4503599627370496.0;
  dVar25 = (double)((ulonglong)uVar2 | 0x4330000000000000) - 4503599627370496.0;
  dVar23 = (double)((ulonglong)uVar5 | 0x4330000000000000) - 4503599627370496.0;
  dVar22 = (double)((ulonglong)uVar12 | 0x4330000000000000) - 4503599627370496.0;
  uVar15 = 8 - (uVar6 >> 1);
  uVar12 = 0;
  local_124 = param_2;
  do {
    uVar16 = 0xf - uVar12;
    if (param_3 == '\0') {
      uVar16 = uVar12;
    }
    if (uVar16 < uVar5 + uVar8 && uVar8 <= uVar16) {
      dVar19 = ((double)(int)(uVar16 - uVar8) / dVar23) * dVar22;
      dVar26 = floor(dVar19);
      if (dVar26 <= 0.0) {
        dVar26 = 0.0;
      }
      if (4294967295.0 <= dVar26) {
        dVar26 = 4294967295.0;
      }
      iVar13 = ((int)(dVar26 - 2147483648.0) & (int)dVar26 >> 0x1f | (int)dVar26) * uVar2;
      dVar26 = floor((0.5 / dVar23) * dVar22 + dVar19);
      uVar16 = 0;
      if (dVar26 <= 0.0) {
        dVar26 = 0.0;
      }
      if (4294967295.0 <= dVar26) {
        dVar26 = 4294967295.0;
      }
      iVar14 = ((int)(dVar26 - 2147483648.0) & (int)dVar26 >> 0x1f | (int)dVar26) * uVar2;
      iVar17 = 0x100;
      do {
        while (uVar16 < uVar15 || uVar15 + uVar6 <= uVar16) {
LAB_1004dc24:
          *(undefined4 *)((int)local_124 + uVar16 * 4) = 0;
          uVar16 = uVar16 + 1;
          iVar17 = iVar17 + -0x10;
          if (iVar17 == 0) goto LAB_1004daff;
        }
        dVar20 = ((double)(int)(((uVar6 >> 1) - 8) + uVar16) / dVar24) * dVar25;
        dVar26 = floor(dVar20);
        dVar19 = 0.0;
        if (dVar26 <= 0.0) {
          dVar26 = 0.0;
        }
        if (4294967295.0 <= dVar26) {
          dVar26 = 4294967295.0;
        }
        uVar7 = (int)(dVar26 - 2147483648.0) & (int)dVar26 >> 0x1f | (int)dVar26;
        iVar10 = iVar13 + uVar7;
        uVar11 = iVar10 * 4;
        if (uVar18 <= iVar10 * 4 + 3U) {
LAB_1004e120:
          FUN_10136a50(uVar11,uVar11 + 4,uVar18,&DAT_1013fb3c);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        bVar1 = *(byte *)(iVar3 + 3 + uVar11);
        if (bVar1 == 0) {
          local_120 = 0.0;
          dVar26 = 0.0;
          local_110 = 0.0;
          local_e0 = 0.0;
        }
        else {
          dVar19 = (double)bVar1;
          local_120 = 1.0;
          local_e0 = (double)*(byte *)(iVar3 + uVar11);
          local_110 = (double)*(byte *)(iVar3 + 1 + uVar11);
          dVar26 = (double)*(byte *)(iVar3 + 2 + uVar11);
        }
        iVar10 = uVar7 + iVar14;
        uVar11 = iVar10 * 4;
        if (uVar18 <= iVar10 * 4 + 3U) goto LAB_1004e120;
        bVar1 = *(byte *)(iVar3 + 3 + uVar11);
        if (bVar1 != 0) {
          local_120 = local_120 + 1.0;
          local_e0 = local_e0 + (double)*(byte *)(iVar3 + uVar11);
          local_110 = local_110 + (double)*(byte *)(iVar3 + 1 + uVar11);
          dVar26 = dVar26 + (double)*(byte *)(iVar3 + 2 + uVar11);
          dVar19 = dVar19 + (double)bVar1;
        }
        dVar20 = floor(dVar20 + (0.5 / dVar24) * dVar25);
        if (dVar20 <= 0.0) {
          dVar20 = 0.0;
        }
        if (4294967295.0 <= dVar20) {
          dVar20 = 4294967295.0;
        }
        uVar7 = (int)(dVar20 - 2147483648.0) & (int)dVar20 >> 0x1f | (int)dVar20;
        iVar10 = iVar13 + uVar7;
        uVar11 = iVar10 * 4;
        if (uVar18 <= iVar10 * 4 + 3U) goto LAB_1004e120;
        bVar1 = *(byte *)(iVar3 + 3 + uVar11);
        if (bVar1 != 0) {
          local_120 = local_120 + 1.0;
          local_e0 = local_e0 + (double)*(byte *)(iVar3 + uVar11);
          dVar26 = dVar26 + (double)*(byte *)(iVar3 + 2 + uVar11);
          local_110 = local_110 + (double)*(byte *)(iVar3 + 1 + uVar11);
          dVar19 = dVar19 + (double)bVar1;
        }
        iVar10 = uVar7 + iVar14;
        uVar11 = iVar10 * 4;
        if (uVar18 <= iVar10 * 4 + 3U) goto LAB_1004e120;
        bVar1 = *(byte *)(iVar3 + 3 + uVar11);
        if (bVar1 != 0) {
          local_120 = local_120 + 1.0;
          local_e0 = local_e0 + (double)*(byte *)(iVar3 + uVar11);
          local_110 = local_110 + (double)*(byte *)(iVar3 + 1 + uVar11);
          dVar26 = dVar26 + (double)*(byte *)(iVar3 + 2 + uVar11);
          dVar19 = dVar19 + (double)bVar1;
        }
        if ((local_120 == 0.0) && (!NAN(local_120))) goto LAB_1004dc24;
        dVar27 = floor(local_e0 / local_120);
        dVar20 = 0.0;
        if (0.0 <= dVar27) {
          dVar20 = dVar27;
        }
        dVar27 = 255.0;
        if (dVar20 <= 255.0) {
          dVar27 = dVar20;
        }
        *(char *)((int)local_124 + uVar16 * 4) = (char)(int)dVar27;
        dVar28 = floor(local_110 / local_120);
        dVar20 = 0.0;
        if (0.0 <= dVar28) {
          dVar20 = dVar28;
        }
        dVar28 = 255.0;
        if (dVar20 <= 255.0) {
          dVar28 = dVar20;
        }
        *(char *)((int)local_124 + uVar16 * 4 + 1) = (char)(int)dVar28;
        dVar20 = floor(dVar26 / local_120);
        dVar26 = 0.0;
        if (0.0 <= dVar20) {
          dVar26 = dVar20;
        }
        dVar20 = 255.0;
        if (dVar26 <= 255.0) {
          dVar20 = dVar26;
        }
        *(char *)((int)local_124 + uVar16 * 4 + 2) = (char)(int)dVar20;
        dVar26 = (dVar19 * 0.25) / 255.0;
        if ((dVar26 != 1.0) || (NAN(dVar26))) {
          dVar21 = 1.0 - dVar26;
          dVar27 = (double)((int)dVar27 & 0xff) * dVar26 + dVar21 * (double)(param_4 & 0xff);
          dVar19 = 0.0;
          if (0.0 <= dVar27) {
            dVar19 = dVar27;
          }
          dVar27 = 255.0;
          if (dVar19 <= 255.0) {
            dVar27 = dVar19;
          }
          *(char *)((int)local_124 + uVar16 * 4) = (char)(int)dVar27;
          dVar27 = (double)((int)dVar28 & 0xff) * dVar26 + dVar21 * (double)(param_4 >> 8 & 0xff);
          dVar19 = 0.0;
          if (0.0 <= dVar27) {
            dVar19 = dVar27;
          }
          dVar27 = 255.0;
          if (dVar19 <= 255.0) {
            dVar27 = dVar19;
          }
          dVar19 = (double)((int)dVar20 & 0xff) * dVar26 + dVar21 * (double)(param_4 >> 0x10 & 0xff)
          ;
          *(char *)((int)local_124 + uVar16 * 4 + 1) = (char)(int)dVar27;
          dVar26 = 0.0;
          if (0.0 <= dVar19) {
            dVar26 = dVar19;
          }
          dVar19 = 255.0;
          if (dVar26 <= 255.0) {
            dVar19 = dVar26;
          }
          *(char *)((int)local_124 + uVar16 * 4 + 2) = (char)(int)dVar19;
        }
        *(undefined1 *)((int)local_124 + uVar16 * 4 + 3) = 0xff;
        uVar16 = uVar16 + 1;
        iVar17 = iVar17 + -0x10;
      } while (iVar17 != 0);
    }
    else {
      local_124[7] = 0;
      local_124[6] = 0;
      local_124[5] = 0;
      local_124[4] = 0;
      local_124[3] = 0;
      local_124[2] = 0;
      local_124[1] = 0;
      *local_124 = 0;
    }
LAB_1004daff:
    local_124 = local_124 + 8;
    iVar9 = iVar9 + -0x40;
    uVar12 = uVar12 + 1;
    if (iVar9 == 0) {
      return;
    }
  } while( true );
}
