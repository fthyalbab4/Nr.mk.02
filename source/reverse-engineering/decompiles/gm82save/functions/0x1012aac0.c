// rea decompile_all
// name: FUN_1012aac0
// address: 0x1012aac0
// body: available
// range: 0x1012aac0-0x1012abf0 inclusive
// range: 0x1012ac00-0x1012aca0 inclusive
// range: 0x1012acb0-0x1012ad61 inclusive
// range: 0x1012ad70-0x1012b0ae inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012aac0(int *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  code *pcVar8;
  byte bVar11;
  uint uVar9;
  uint uVar10;
  bool bVar12;
  uint uVar13;
  byte bVar15;
  uint uVar14;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  uint local_4c;
  uint local_3c;

  uVar2 = *(ushort *)(param_2 + 2);
  local_4c = 7;
  if (uVar2 == 0) {
    local_4c = 0x8a;
  }
  uVar14 = 0;
  local_3c = (uVar2 != 0) + 3;
  bVar12 = false;
  uVar18 = 0xffffffff;
  do {
    uVar16 = 0;
    uVar21 = 0;
    do {
      uVar17 = uVar21;
      uVar13 = uVar16;
      if ((bVar12) || (param_5 < uVar14)) {
        return;
      }
      if (param_3 <= uVar14 + 1) {
        FUN_10136b52(uVar14 + 1,param_3,&PTR_s_C__Users_runneradmin__cargo_regi_1015c8fc);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      bVar12 = uVar14 >= param_5;
      uVar3 = *(ushort *)(param_2 + 6 + uVar14 * 4);
      uVar14 = uVar14 + (uVar14 < param_5);
      uVar16 = uVar13 + 1;
      uVar21 = uVar17 + (0xfffffffe < uVar13);
    } while ((uVar21 < (uVar16 < local_4c)) && (uVar2 == uVar3));
    uVar9 = (uint)uVar2;
    if (uVar21 < (uVar16 < local_3c)) {
      if (0x26 < uVar2) {
LAB_1012b09b:
        FUN_10136b52((uint)uVar2,0x27,&PTR_s_C__Users_runneradmin__cargo_regi_1015c8ec);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      iVar5 = *param_1;
      uVar18 = param_1[4];
      uVar13 = param_1[1];
      iVar6 = param_1[2];
      local_4c = param_1[3];
      cVar1 = *(char *)(param_4 + 2 + (uint)uVar2 * 4);
      uVar4 = *(ushort *)(param_4 + (uint)uVar2 * 4);
      uVar17 = param_1[5];
      bVar11 = *(byte *)(param_1 + 6);
      do {
        bVar15 = bVar11 + cVar1;
        if (bVar15 < 0x40) {
          uVar19 = (uint)uVar4 << (bVar11 & 0x1f);
          uVar20 = uVar19;
          uVar10 = 0 << (bVar11 & 0x1f) | (uint)(uVar4 >> 0x20 - (bVar11 & 0x1f));
          if ((bVar11 & 0x20) != 0) {
            uVar20 = 0;
            uVar10 = uVar19;
          }
          uVar17 = uVar17 | uVar10;
          param_1[5] = uVar17;
          uVar18 = uVar18 | uVar20;
          param_1[4] = uVar18;
        }
        else {
          if (bVar11 == 0x40) {
            uVar10 = local_4c + iVar6;
            if (uVar13 - uVar10 < 8) {
              FUN_101369c0("buf.len() must fit in remaining()",0x43,
                           &PTR_s_C__Users_runneradmin__cargo_regi_1015c44c);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar13 < uVar10) {
              FUN_10136a50(uVar10,uVar13,uVar13,&PTR_s_C__Users_runneradmin__cargo_regi_1015c44c);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            *(uint *)(iVar5 + uVar10) = uVar18;
            *(uint *)(iVar5 + 4 + uVar10) = uVar17;
            uVar18 = (uint)uVar4;
            param_1[3] = local_4c + 8;
          }
          else {
            uVar19 = (uint)uVar4 << (bVar11 & 0x1f);
            uVar20 = uVar19;
            uVar10 = 0 << (bVar11 & 0x1f) | (uint)(uVar4 >> 0x20 - (bVar11 & 0x1f));
            if ((bVar11 & 0x20) != 0) {
              uVar20 = 0;
              uVar10 = uVar19;
            }
            uVar19 = iVar6 + local_4c;
            if (uVar13 - uVar19 < 8) {
              FUN_101369c0("buf.len() must fit in remaining()",0x43,
                           &PTR_s_C__Users_runneradmin__cargo_regi_1015c45c);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar13 < uVar19) {
              FUN_10136a50(uVar19,uVar13,uVar13,&PTR_s_C__Users_runneradmin__cargo_regi_1015c45c);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            *(uint *)(iVar5 + uVar19) = uVar18 | uVar20;
            *(uint *)(iVar5 + 4 + uVar19) = uVar17 | uVar10;
            bVar7 = -bVar11 & 0x1f;
            uVar18 = (uint)(uVar4 >> bVar7) | 0 << 0x20 - bVar7;
            if ((-bVar11 & 0x20) != 0) {
              uVar18 = 0;
            }
            param_1[3] = local_4c + 8;
          }
          local_4c = local_4c + 8;
          uVar17 = 0;
          param_1[4] = uVar18;
          param_1[5] = 0;
          bVar15 = bVar15 - 0x40;
        }
        bVar22 = uVar16 != 0;
        uVar16 = uVar16 - 1;
        *(byte *)(param_1 + 6) = bVar15;
        uVar21 = (uVar21 - 1) + (uint)bVar22;
        bVar11 = bVar15;
      } while (uVar16 != 0 || uVar21 != 0);
    }
    else if (uVar2 == 0) {
      if (uVar17 < (uVar13 < 10)) {
        bVar11 = *(byte *)(param_1 + 6);
        uVar4 = *(ushort *)(param_4 + 0x44);
        bVar15 = *(char *)(param_4 + 0x46) + bVar11;
        if (bVar15 < 0x40) {
          uVar21 = (uint)uVar4 << (bVar11 & 0x1f);
          uVar16 = uVar21;
          uVar18 = 0 << (bVar11 & 0x1f) | (uint)(uVar4 >> 0x20 - (bVar11 & 0x1f));
          if ((bVar11 & 0x20) != 0) {
            uVar16 = 0;
            uVar18 = uVar21;
          }
          param_1[5] = param_1[5] | uVar18;
          param_1[4] = param_1[4] | uVar16;
          *(byte *)(param_1 + 6) = bVar15;
        }
        else {
          FUN_1012a990(param_1,(uint)uVar4,0,bVar15);
          bVar15 = *(byte *)(param_1 + 6);
        }
        uVar18 = uVar13 - 2;
        uVar16 = (uVar17 - 1) + (uint)(1 < uVar13);
        bVar11 = bVar15 + 3;
      }
      else {
        bVar11 = *(byte *)(param_1 + 6);
        uVar4 = *(ushort *)(param_4 + 0x48);
        bVar15 = *(char *)(param_4 + 0x4a) + bVar11;
        if (bVar15 < 0x40) {
          uVar21 = (uint)uVar4 << (bVar11 & 0x1f);
          uVar16 = uVar21;
          uVar18 = 0 << (bVar11 & 0x1f) | (uint)(uVar4 >> 0x20 - (bVar11 & 0x1f));
          if ((bVar11 & 0x20) != 0) {
            uVar16 = 0;
            uVar18 = uVar21;
          }
          param_1[5] = param_1[5] | uVar18;
          param_1[4] = param_1[4] | uVar16;
          *(byte *)(param_1 + 6) = bVar15;
        }
        else {
          FUN_1012a990(param_1,(uint)uVar4,0,bVar15);
          bVar15 = *(byte *)(param_1 + 6);
        }
        uVar18 = uVar13 - 10;
        uVar16 = (uVar17 - 1) + (uint)(9 < uVar13);
        bVar11 = bVar15 + 7;
      }
      if (0x3f < bVar11) goto LAB_1012af4e;
      uVar13 = uVar18 << (bVar15 & 0x1f);
      uVar21 = uVar13;
      uVar18 = uVar16 << (bVar15 & 0x1f) | uVar18 >> 0x20 - (bVar15 & 0x1f);
      if ((bVar15 & 0x20) != 0) {
        uVar21 = 0;
        uVar18 = uVar13;
      }
      param_1[4] = param_1[4] | uVar21;
      param_1[5] = param_1[5] | uVar18;
      *(byte *)(param_1 + 6) = bVar11;
    }
    else {
      if (uVar18 != uVar9) {
        if (0x26 < uVar2) goto LAB_1012b09b;
        uVar4 = *(ushort *)(param_4 + uVar9 * 4);
        bVar11 = *(byte *)(param_1 + 6);
        bVar15 = *(char *)(param_4 + 2 + uVar9 * 4) + bVar11;
        uVar16 = uVar13;
        uVar21 = uVar17;
        if (bVar15 < 0x40) {
          uVar17 = (uint)uVar4 << (bVar11 & 0x1f);
          uVar13 = uVar17;
          uVar18 = 0 << (bVar11 & 0x1f) | (uint)(uVar4 >> 0x20 - (bVar11 & 0x1f));
          if ((bVar11 & 0x20) != 0) {
            uVar13 = 0;
            uVar18 = uVar17;
          }
          param_1[4] = param_1[4] | uVar13;
          param_1[5] = param_1[5] | uVar18;
          *(byte *)(param_1 + 6) = bVar15;
        }
        else {
          FUN_1012a990(param_1,(uint)uVar4,0,bVar15);
        }
      }
      uVar18 = uVar16 - 3;
      uVar16 = (uVar21 - 1) + (uint)(2 < uVar16);
      if ((uVar18 < 4) <= uVar16) {
        FUN_101369c0(" 3_6?",0xb,&PTR_s_C__Users_runneradmin__cargo_regi_1015c914);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      bVar11 = *(byte *)(param_1 + 6);
      uVar4 = *(ushort *)(param_4 + 0x40);
      bVar15 = *(char *)(param_4 + 0x42) + bVar11;
      if (bVar15 < 0x40) {
        uVar17 = (uint)uVar4 << (bVar11 & 0x1f);
        uVar13 = uVar17;
        uVar21 = 0 << (bVar11 & 0x1f) | (uint)(uVar4 >> 0x20 - (bVar11 & 0x1f));
        if ((bVar11 & 0x20) != 0) {
          uVar13 = 0;
          uVar21 = uVar17;
        }
        param_1[4] = param_1[4] | uVar13;
        param_1[5] = param_1[5] | uVar21;
        *(byte *)(param_1 + 6) = bVar15;
      }
      else {
        FUN_1012a990(param_1,(uint)uVar4,0,bVar15);
        bVar15 = *(byte *)(param_1 + 6);
      }
      bVar11 = bVar15 + 2;
      if (bVar11 < 0x40) {
        uVar13 = uVar18 << (bVar15 & 0x1f);
        uVar21 = uVar13;
        uVar18 = uVar16 << (bVar15 & 0x1f) | uVar18 >> 0x20 - (bVar15 & 0x1f);
        if ((bVar15 & 0x20) != 0) {
          uVar21 = 0;
          uVar18 = uVar13;
        }
        param_1[4] = param_1[4] | uVar21;
        param_1[5] = param_1[5] | uVar18;
        *(byte *)(param_1 + 6) = bVar11;
      }
      else {
LAB_1012af4e:
        FUN_1012a990(param_1,uVar18,uVar16,bVar11);
      }
    }
    local_4c = uVar2 == uVar3 ^ 7;
    if (uVar3 == 0) {
      local_4c = 0x8a;
    }
    local_3c = 4 - (uVar3 == 0 || uVar2 == uVar3);
    uVar18 = uVar9;
    uVar2 = uVar3;
  } while( true );
}
