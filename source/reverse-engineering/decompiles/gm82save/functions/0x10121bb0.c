// rea decompile_all
// name: FUN_10121bb0
// address: 0x10121bb0
// body: available
// range: 0x10121bb0-0x10121eba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10121bb0(int *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;

  iVar4 = *param_1;
  uVar19 = param_1[1];
  uVar5 = param_1[2];
  uVar16 = uVar5 + 8 + param_3;
  param_1[2] = uVar5 + param_3;
  uVar15 = uVar16;
  if (uVar19 < uVar16) {
    uVar15 = uVar19;
  }
  if (param_2 < param_3) {
    if (param_2 == 1) {
      if (uVar15 <= uVar5 - 1) {
        FUN_10136b52(uVar5 - 1,uVar15,&DAT_101598b4);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if (uVar15 < uVar5) {
        FUN_10136a50(uVar5,uVar15,uVar15,&DAT_101598d4);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if (uVar15 - uVar5 < param_3) {
        FUN_10136a50(0,param_3,uVar15 - uVar5,&DAT_101598c4);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      memset((void *)(iVar4 + uVar5),(uint)*(byte *)(iVar4 + -1 + uVar5),param_3);
    }
    else {
      uVar16 = 0;
      uVar21 = uVar5 - param_2;
      uVar19 = uVar15 - uVar5;
      if (uVar15 < uVar5) {
        uVar19 = 0;
      }
      uVar22 = uVar21;
      if (uVar21 < uVar15) {
        uVar22 = uVar15;
      }
      uVar22 = (uVar22 + param_2) - uVar5;
      if (uVar19 <= uVar22) {
        uVar22 = uVar19;
      }
      if (param_3 - 1 <= uVar22) {
        uVar22 = param_3 - 1;
      }
      if (0x10 < uVar22 + 1 && 0xf < param_2) {
        uVar16 = uVar22 + 1 & 0xf;
        uVar14 = 0x10;
        if (uVar16 != 0) {
          uVar14 = uVar16;
        }
        uVar16 = (uVar22 + 1) - uVar14;
        iVar23 = ~uVar22 + uVar14;
        puVar17 = (undefined4 *)(iVar4 + uVar5);
        do {
          puVar1 = (undefined4 *)((int)puVar17 - param_2);
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          *puVar17 = *puVar1;
          puVar17[1] = uVar7;
          puVar17[2] = uVar8;
          puVar17[3] = uVar9;
          puVar17 = puVar17 + 4;
          iVar23 = iVar23 + 0x10;
        } while (iVar23 != 0);
      }
      do {
        if (uVar15 <= uVar21 + uVar16) {
          FUN_10136b52(uVar21 + uVar16,uVar15,&DAT_101598e4);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        if (uVar19 == uVar16) {
          FUN_10136b52(uVar5 + uVar16,uVar15,&DAT_101598f4);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        *(undefined1 *)(iVar4 + uVar5 + uVar16) = *(undefined1 *)(iVar4 + uVar21 + uVar16);
        uVar16 = uVar16 + 1;
      } while (param_3 != uVar16);
    }
  }
  else {
    uVar21 = uVar5 - param_2;
    if (uVar5 < param_2) {
      FUN_10136c10("in bounds",9,&DAT_10159920);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (uVar16 < uVar19) {
      if ((param_3 != 0) &&
         (*(undefined8 *)(iVar4 + uVar5) = *(undefined8 *)(iVar4 + uVar21), 8 < param_3)) {
        uVar19 = (iVar4 + uVar5 + param_3) - param_2;
        uVar16 = ((iVar4 + uVar5) - param_2) + 0x10;
        if (uVar16 < uVar19) {
          uVar16 = uVar19;
        }
        puVar20 = (undefined8 *)(iVar4 + uVar5);
        puVar18 = (undefined8 *)(uVar21 + iVar4 + 8);
        uVar16 = ((uVar16 + param_2) - (iVar4 + uVar5)) - 9;
        if (0x1f < param_2 && 0x17 < uVar16) {
          uVar15 = (uVar16 >> 3) + 1;
          uVar19 = uVar15 & 0xfffffffc;
          puVar18 = puVar18 + uVar19;
          puVar20 = puVar20 + uVar19;
          puVar17 = (undefined4 *)(uVar5 + 0x18 + iVar4);
          uVar16 = uVar19;
          do {
            puVar2 = (undefined4 *)((int)puVar17 + -param_2 + -0x10);
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            puVar1 = (undefined4 *)((int)puVar17 + -param_2);
            uVar10 = *puVar1;
            uVar11 = puVar1[1];
            uVar12 = puVar1[2];
            uVar13 = puVar1[3];
            puVar17[-4] = *puVar2;
            puVar17[-3] = uVar7;
            puVar17[-2] = uVar8;
            puVar17[-1] = uVar9;
            *puVar17 = uVar10;
            puVar17[1] = uVar11;
            puVar17[2] = uVar12;
            puVar17[3] = uVar13;
            puVar17 = puVar17 + 8;
            uVar16 = uVar16 - 4;
          } while (uVar16 != 0);
          if (uVar15 == uVar19) {
            return;
          }
        }
        do {
          puVar20 = puVar20 + 1;
          uVar3 = *puVar18;
          puVar18 = puVar18 + 1;
          *puVar20 = uVar3;
        } while (puVar18 < (undefined8 *)(uVar21 + iVar4 + param_3));
      }
    }
    else {
      uVar16 = uVar21 + param_3;
      if (uVar15 < uVar16) {
        FUN_10136a50(0,uVar16,uVar15,&PTR_s_C__Users_runneradmin__rustup_too_1015de64);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if (uVar16 < uVar21) {
        FUN_10136a50(uVar21,uVar16,uVar15,&PTR_s_C__Users_runneradmin__rustup_too_1015de74);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if (uVar15 - param_3 < uVar5) {
        FUN_101369c0("dest is out of boundsC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\inflate\\writer.rs"
                     ,0x2b,&DAT_10159904);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      memmove((void *)(uVar5 + iVar4),(void *)(uVar21 + iVar4),param_3);
    }
  }
  return;
}
