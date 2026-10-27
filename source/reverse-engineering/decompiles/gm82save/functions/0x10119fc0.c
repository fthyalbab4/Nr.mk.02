// rea decompile_all
// name: FUN_10119fc0
// address: 0x10119fc0
// body: available
// range: 0x10119fc0-0x1011a120 inclusive
// range: 0x1011a130-0x1011a3eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10119fc0(undefined1 *param_1,uint *param_2,char *param_3,byte param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint local_20;
  uint local_1c;

  iVar18 = *(int *)(param_3 + 0xc);
  bVar9 = 2;
  if (*param_3 == '\0') {
    bVar9 = param_4 ^ 1;
  }
  pbVar10 = *(byte **)(param_3 + 8);
  pbVar2 = pbVar10 + iVar18;
  bVar6 = true;
  pbVar13 = pbVar10;
LAB_1011a010:
  do {
    do {
      bVar5 = !bVar6;
      bVar6 = true;
    } while (bVar5);
    if (pbVar13 == pbVar2) {
      if (bVar9 == 0) goto LAB_1011a0e8;
      if (bVar9 != 2) {
        iVar7 = 0;
        break;
      }
      bVar6 = false;
      goto LAB_1011a0a0;
    }
    bVar3 = *pbVar13;
    uVar16 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      pbVar1 = pbVar13 + 1;
      if (bVar3 < 0xe0) {
        pbVar13 = pbVar13 + 2;
        uVar16 = (uVar16 & 0x1f) << 6 | *pbVar1 & 0x3f;
      }
      else {
        uVar19 = pbVar13[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (bVar3 < 0xf0) {
          pbVar13 = pbVar13 + 3;
          uVar16 = uVar19 | (uVar16 & 0x1f) << 0xc;
        }
        else {
          pbVar1 = pbVar13 + 3;
          pbVar13 = pbVar13 + 4;
          uVar16 = *pbVar1 & 0x3f | uVar19 << 6 | (uVar16 & 7) << 0x12;
        }
        bVar6 = false;
        if (0xffff < uVar16) goto LAB_1011a010;
      }
    }
    else {
      pbVar13 = pbVar13 + 1;
    }
    bVar6 = true;
    if (uVar16 == 0) {
      *param_1 = 2;
      *(undefined ***)(param_1 + 4) = &PTR_s_nul_byte_found_in_provided_data_10156ac8;
      return;
    }
  } while( true );
LAB_1011a0c0:
  if (iVar18 != iVar7) goto code_r0x1011a0c4;
  if (iVar18 != 0) {
    bVar6 = true;
LAB_1011a0a0:
    bVar5 = false;
    goto LAB_1011a10d;
  }
  goto LAB_1011a0e8;
code_r0x1011a0c4:
  pbVar13 = pbVar10 + iVar7;
  if ((*pbVar13 == 9) || (iVar7 = iVar7 + 1, *pbVar13 == 0x20)) goto LAB_1011a0e8;
  goto LAB_1011a0c0;
LAB_1011a0e8:
  uVar16 = param_2[2];
  if (uVar16 == *param_2) {
    FUN_1013c000(param_2);
  }
  bVar6 = true;
  *(undefined2 *)(param_2[1] + uVar16 * 2) = 0x22;
  bVar5 = true;
  param_2[2] = uVar16 + 1;
LAB_1011a10d:
  uVar16 = 0;
  uVar19 = 0;
  while( true ) {
    if ((short)uVar16 != 0) goto LAB_1011a230;
    if (pbVar10 == pbVar2) break;
    bVar9 = *pbVar10;
    uVar16 = (uint)bVar9;
    if ((char)bVar9 < '\0') {
      pbVar13 = pbVar10 + 1;
      if (bVar9 < 0xe0) {
        pbVar10 = pbVar10 + 2;
        uVar16 = (uVar16 & 0x1f) << 6 | *pbVar13 & 0x3f;
        goto LAB_1011a230;
      }
      uVar8 = pbVar10[2] & 0x3f | (*pbVar13 & 0x3f) << 6;
      if (bVar9 < 0xf0) {
        pbVar10 = pbVar10 + 3;
        uVar16 = uVar8 | (uVar16 & 0x1f) << 0xc;
      }
      else {
        pbVar13 = pbVar10 + 3;
        pbVar10 = pbVar10 + 4;
        uVar16 = *pbVar13 & 0x3f | uVar8 << 6 | (uVar16 & 7) << 0x12;
      }
      if (uVar16 < 0x10000) goto LAB_1011a230;
      uVar8 = uVar16 + 0xff0000;
      uVar16 = uVar16 & 0x3ff | 0xdc00;
      uVar8 = uVar8 >> 10 | 0xd800;
      sVar15 = (short)uVar8;
    }
    else {
      pbVar10 = pbVar10 + 1;
LAB_1011a230:
      sVar15 = (short)uVar16;
      local_1c = 0;
      uVar8 = uVar16;
      uVar16 = local_1c;
    }
    uVar12 = uVar19;
    if (bVar6) {
      sVar15 = (short)uVar8;
      uVar12 = 0;
      if (sVar15 == 0x22) {
        uVar8 = uVar19 + 1;
        if (uVar8 == 0) {
          FUN_101369c0("capacity overflowC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\alloc\\src\\vec\\mod.rs"
                       ,0x23,&DAT_1015664c);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar14 = param_2[2];
        if (*param_2 - uVar14 < uVar8) {
          FUN_101359e0(param_2,uVar14,uVar8,(LPVOID)0x2,2);
          uVar14 = param_2[2];
          uVar8 = param_2[1];
        }
        else {
          uVar8 = param_2[1];
        }
        if (uVar19 != 0) {
          if (uVar19 < 0x10) {
            local_20 = 0;
          }
          else {
            pcVar11 = (char *)(uVar8 + 0x10 + uVar14 * 2);
            local_20 = uVar19 & 0xfffffff0;
            uVar14 = uVar14 + local_20;
            uVar17 = local_20;
            do {
              pcVar11[-0xffffffff00000010] = '\\';
              pcVar11[-0xffffffff0000000f] = '\0';
              pcVar11[-0xffffffff0000000e] = '\\';
              pcVar11[-0xffffffff0000000d] = '\0';
              pcVar11[-0xffffffff0000000c] = '\\';
              pcVar11[-0xffffffff0000000b] = '\0';
              pcVar11[-0xffffffff0000000a] = '\\';
              pcVar11[-0xffffffff00000009] = '\0';
              pcVar11[-0xffffffff00000008] = '\\';
              pcVar11[-0xffffffff00000007] = '\0';
              pcVar11[-0xffffffff00000006] = '\\';
              pcVar11[-0xffffffff00000005] = '\0';
              pcVar11[-0xffffffff00000004] = '\\';
              pcVar11[-0xffffffff00000003] = '\0';
              pcVar11[-0xffffffff00000002] = '\\';
              pcVar11[-0xffffffff00000001] = '\0';
              pcVar11[0] = '\\';
              pcVar11[1] = '\0';
              pcVar11[2] = '\\';
              pcVar11[3] = '\0';
              pcVar11[4] = '\\';
              pcVar11[5] = '\0';
              pcVar11[6] = '\\';
              pcVar11[7] = '\0';
              pcVar11[8] = '\\';
              pcVar11[9] = '\0';
              pcVar11[10] = '\\';
              pcVar11[0xb] = '\0';
              pcVar11[0xc] = '\\';
              pcVar11[0xd] = '\0';
              pcVar11[0xe] = '\\';
              pcVar11[0xf] = '\0';
              pcVar11 = pcVar11 + 0x20;
              uVar17 = uVar17 - 0x10;
            } while (uVar17 != 0);
            if (uVar19 == local_20) goto LAB_1011a2ca;
          }
          iVar18 = uVar19 - local_20;
          do {
            *(undefined2 *)(uVar8 + uVar14 * 2) = 0x5c;
            uVar14 = uVar14 + 1;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
LAB_1011a2ca:
        *(undefined2 *)(uVar8 + uVar14 * 2) = 0x5c;
        param_2[2] = uVar14 + 1;
      }
      else if ((uVar8 & 0xffff) == 0x5c) {
        uVar12 = uVar19 + 1;
      }
    }
    uVar19 = uVar12;
    uVar8 = param_2[2];
    if (uVar8 == *param_2) {
      FUN_1013c000(param_2);
    }
    *(short *)(param_2[1] + uVar8 * 2) = sVar15;
    param_2[2] = uVar8 + 1;
  }
  if (!bVar5) goto LAB_1011a381;
  uVar16 = *param_2;
  uVar8 = param_2[2];
  if (uVar16 - uVar8 < uVar19) {
    FUN_101359e0(param_2,uVar8,uVar19,(LPVOID)0x2,2);
    uVar8 = param_2[2];
    uVar16 = param_2[1];
    uVar12 = 0;
    if (uVar19 < 0x10) {
LAB_1011a353:
      iVar18 = uVar19 - uVar12;
      do {
        *(undefined2 *)(uVar16 + uVar8 * 2) = 0x5c;
        uVar8 = uVar8 + 1;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    else {
LAB_1011a32d:
      pcVar11 = (char *)(uVar16 + 0x10 + uVar8 * 2);
      uVar12 = uVar19 & 0xfffffff0;
      uVar8 = uVar8 + uVar12;
      uVar14 = uVar12;
      do {
        pcVar11[-0xffffffff00000010] = '\\';
        pcVar11[-0xffffffff0000000f] = '\0';
        pcVar11[-0xffffffff0000000e] = '\\';
        pcVar11[-0xffffffff0000000d] = '\0';
        pcVar11[-0xffffffff0000000c] = '\\';
        pcVar11[-0xffffffff0000000b] = '\0';
        pcVar11[-0xffffffff0000000a] = '\\';
        pcVar11[-0xffffffff00000009] = '\0';
        pcVar11[-0xffffffff00000008] = '\\';
        pcVar11[-0xffffffff00000007] = '\0';
        pcVar11[-0xffffffff00000006] = '\\';
        pcVar11[-0xffffffff00000005] = '\0';
        pcVar11[-0xffffffff00000004] = '\\';
        pcVar11[-0xffffffff00000003] = '\0';
        pcVar11[-0xffffffff00000002] = '\\';
        pcVar11[-0xffffffff00000001] = '\0';
        pcVar11[0] = '\\';
        pcVar11[1] = '\0';
        pcVar11[2] = '\\';
        pcVar11[3] = '\0';
        pcVar11[4] = '\\';
        pcVar11[5] = '\0';
        pcVar11[6] = '\\';
        pcVar11[7] = '\0';
        pcVar11[8] = '\\';
        pcVar11[9] = '\0';
        pcVar11[10] = '\\';
        pcVar11[0xb] = '\0';
        pcVar11[0xc] = '\\';
        pcVar11[0xd] = '\0';
        pcVar11[0xe] = '\\';
        pcVar11[0xf] = '\0';
        pcVar11 = pcVar11 + 0x20;
        uVar14 = uVar14 - 0x10;
      } while (uVar14 != 0);
      if (uVar19 != uVar12) goto LAB_1011a353;
    }
    uVar16 = *param_2;
  }
  else if (uVar19 != 0) {
    uVar16 = param_2[1];
    uVar12 = 0;
    if (0xf < uVar19) goto LAB_1011a32d;
    goto LAB_1011a353;
  }
  param_2[2] = uVar8;
  if (uVar8 == uVar16) {
    FUN_1013c000(param_2);
  }
  *(undefined2 *)(param_2[1] + uVar8 * 2) = 0x22;
  param_2[2] = uVar8 + 1;
LAB_1011a381:
  *param_1 = 0xff;
  return;
}
