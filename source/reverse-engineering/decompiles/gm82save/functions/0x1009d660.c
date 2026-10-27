// rea decompile_all
// name: FUN_1009d660
// address: 0x1009d660
// body: available
// range: 0x1009d660-0x1009d842 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1009d81c) */
/* WARNING: Removing unreachable block (ram,0x1009d80c) */
/* WARNING: Removing unreachable block (ram,0x1009d7f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_1009d660(uint param_1,undefined1 (*param_2) [16],uint param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  undefined1 (*pauVar30) [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulonglong uVar36;
  undefined1 auVar35 [16];

  if (0x7f < param_3) {
    param_3 = param_3 - 0x40;
    pauVar30 = param_2 + 4;
    auVar34 = param_2[1];
    auVar33 = param_2[2];
    auVar31 = *param_2 ^ ZEXT416(~param_1);
    auVar32 = param_2[3];
    do {
      param_3 = param_3 - 0x40;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = auVar31._0_8_;
      auVar3 = (undefined1  [16])0x0;
      for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
        if ((auVar35 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
          auVar3 = auVar3 ^ ZEXT816(0x154442bd4) << uVar29;
        }
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = auVar31._8_8_;
      uVar36 = DAT_1013ecb0._8_8_;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar36;
      auVar31 = (undefined1  [16])0x0;
      for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
        if ((auVar12 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
          auVar31 = auVar31 ^ auVar18 << uVar29;
        }
      }
      auVar31 = *pauVar30 ^ auVar3 ^ auVar31;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auVar34._8_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar36;
      auVar3 = (undefined1  [16])0x0;
      for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
        if ((auVar13 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
          auVar3 = auVar3 ^ auVar19 << uVar29;
        }
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar34._0_8_;
      auVar34 = (undefined1  [16])0x0;
      for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
        if ((auVar4 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
          auVar34 = auVar34 ^ ZEXT816(0x154442bd4) << uVar29;
        }
      }
      pauVar1 = pauVar30 + 2;
      auVar34 = auVar3 ^ auVar34 ^ pauVar30[1];
      auVar14._8_8_ = 0;
      auVar14._0_8_ = auVar33._8_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar36;
      auVar3 = (undefined1  [16])0x0;
      for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
        if ((auVar14 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
          auVar3 = auVar3 ^ auVar20 << uVar29;
        }
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar33._0_8_;
      auVar33 = (undefined1  [16])0x0;
      for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
        if ((auVar5 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
          auVar33 = auVar33 ^ ZEXT816(0x154442bd4) << uVar29;
        }
      }
      pauVar2 = pauVar30 + 3;
      pauVar30 = pauVar30 + 4;
      auVar33 = auVar3 ^ auVar33 ^ *pauVar1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = auVar32._8_8_;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar36;
      auVar3 = (undefined1  [16])0x0;
      for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
        if ((auVar15 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
          auVar3 = auVar3 ^ auVar21 << uVar29;
        }
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar32._0_8_;
      auVar32 = (undefined1  [16])0x0;
      for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
        if ((auVar6 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
          auVar32 = auVar32 ^ ZEXT816(0x154442bd4) << uVar29;
        }
      }
      auVar32 = auVar3 ^ auVar32 ^ *pauVar2;
    } while (0x3f < param_3);
    auVar35 = pmovzxdq(_DAT_1013ecb0,0xccaa009e00000000);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = auVar31._0_8_;
    auVar3 = (undefined1  [16])0x0;
    for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
      if ((auVar7 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
        auVar3 = auVar3 ^ ZEXT816(0x1751997d0) << uVar29;
      }
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar31._8_8_;
    uVar36 = auVar35._8_8_;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar36;
    auVar31 = (undefined1  [16])0x0;
    for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
      if ((auVar16 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
        auVar31 = auVar31 ^ auVar22 << uVar29;
      }
    }
    auVar34 = auVar31 ^ auVar3 ^ auVar34;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar34._8_8_;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar36;
    auVar31 = (undefined1  [16])0x0;
    for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
      if ((auVar3 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
        auVar31 = auVar31 ^ auVar23 << uVar29;
      }
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar34._0_8_;
    auVar34 = (undefined1  [16])0x0;
    for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
      if ((auVar8 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
        auVar34 = auVar34 ^ ZEXT816(0x1751997d0) << uVar29;
      }
    }
    auVar33 = auVar31 ^ auVar34 ^ auVar33;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = auVar33._8_8_;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar36;
    auVar34 = (undefined1  [16])0x0;
    for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
      if ((auVar31 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
        auVar34 = auVar34 ^ auVar24 << uVar29;
      }
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auVar33._0_8_;
    auVar33 = (undefined1  [16])0x0;
    for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
      if ((auVar9 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
        auVar33 = auVar33 ^ ZEXT816(0x1751997d0) << uVar29;
      }
    }
    auVar34 = auVar34 ^ auVar33 ^ auVar32;
    param_2 = pauVar30;
    while (0xf < param_3) {
      auVar32 = *param_2;
      param_3 = param_3 - 0x10;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = auVar34._8_8_;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar36;
      auVar33 = (undefined1  [16])0x0;
      for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
        if ((auVar17 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
          auVar33 = auVar33 ^ auVar25 << uVar29;
        }
      }
      param_2 = param_2 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar34._0_8_;
      auVar34 = (undefined1  [16])0x0;
      for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
        if ((auVar10 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
          auVar34 = auVar34 ^ ZEXT816(0x1751997d0) << uVar29;
        }
      }
      auVar34 = auVar33 ^ auVar34 ^ auVar32;
    }
    auVar33 = pmovzxdq(auVar32,0xccaa009e00000000);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = auVar33._8_8_;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = auVar34._0_8_;
    auVar33 = (undefined1  [16])0x0;
    for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
      if ((auVar32 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
        auVar33 = auVar33 ^ auVar11 << uVar29;
      }
    }
    auVar33 = auVar34 >> 0x40 ^ auVar33;
    auVar34 = pblendw((undefined1  [16])0x0,auVar33,3);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = auVar34._0_8_;
    auVar34 = (undefined1  [16])0x0;
    for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
      if ((auVar26 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
        auVar34 = auVar34 ^ ZEXT816(0x163cd6124) << uVar29;
      }
    }
    auVar34 = auVar33 >> 0x20 ^ auVar34;
    auVar33 = pblendw((undefined1  [16])0x0,auVar34,3);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = auVar33._0_8_;
    auVar33 = (undefined1  [16])0x0;
    for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
      if ((auVar27 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
        auVar33 = auVar33 ^ ZEXT816(0x1f7011641) << uVar29;
      }
    }
    auVar33 = pblendw(auVar33,(undefined1  [16])0x0,0xfc);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = auVar33._0_8_;
    auVar33 = (undefined1  [16])0x0;
    for (uVar29 = 0; uVar29 < 0x40; uVar29 = uVar29 + 1) {
      if ((auVar28 & (undefined1  [16])0x1 << uVar29) != (undefined1  [16])0x0) {
        auVar33 = auVar33 ^ ZEXT816(0x1db710641) << uVar29;
      }
    }
    param_1 = ~(auVar33._4_4_ ^ auVar34._4_4_);
    if (param_3 == 0) {
      return param_1;
    }
  }
  uVar29 = FUN_1009d850(param_1,(byte *)param_2,param_3);
  return uVar29;
}
