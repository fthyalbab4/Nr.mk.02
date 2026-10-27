// rea decompile_all
// name: FUN_1011f980
// address: 0x1011f980
// body: available
// range: 0x1011f980-0x1011fa09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_1011f980(wchar_t *param_1,uint param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  wchar_t *pwVar25;
  wchar_t *pwVar26;
  wchar_t *pwVar27;
  wchar_t *pwVar28;
  wchar_t *pwVar29;
  wchar_t *pwVar30;
  wchar_t *pwVar31;
  wchar_t *pwVar32;
  uint uVar33;
  int iVar34;
  wchar_t *pwVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];

  uVar33 = param_2 & 0x1f;
  iVar34 = -(param_2 & 0xffffffe0);
  pwVar35 = param_1 + (param_2 & 0x3fffffe0);
  while (iVar34 != 0) {
    pwVar1 = param_1 + 0x18;
    pwVar5 = param_1 + 0x19;
    pwVar6 = param_1 + 0x1a;
    pwVar7 = param_1 + 0x1b;
    pwVar8 = param_1 + 0x1c;
    pwVar9 = param_1 + 0x1d;
    pwVar10 = param_1 + 0x1e;
    pwVar11 = param_1 + 0x1f;
    wVar4 = *param_1;
    pwVar12 = param_1 + 1;
    pwVar13 = param_1 + 2;
    pwVar14 = param_1 + 3;
    pwVar15 = param_1 + 4;
    pwVar16 = param_1 + 5;
    pwVar17 = param_1 + 6;
    pwVar18 = param_1 + 7;
    pwVar2 = param_1 + 8;
    pwVar19 = param_1 + 9;
    pwVar20 = param_1 + 10;
    pwVar21 = param_1 + 0xb;
    pwVar22 = param_1 + 0xc;
    pwVar23 = param_1 + 0xd;
    pwVar24 = param_1 + 0xe;
    pwVar25 = param_1 + 0xf;
    pwVar3 = param_1 + 0x10;
    pwVar26 = param_1 + 0x11;
    pwVar27 = param_1 + 0x12;
    pwVar28 = param_1 + 0x13;
    pwVar29 = param_1 + 0x14;
    pwVar30 = param_1 + 0x15;
    pwVar31 = param_1 + 0x16;
    pwVar32 = param_1 + 0x17;
    param_1 = param_1 + 0x20;
    iVar34 = iVar34 + 0x20;
    auVar39._0_2_ = -(ushort)(*pwVar3 == L'=');
    auVar39._2_2_ = -(ushort)(*pwVar26 == L'=');
    auVar39._4_2_ = -(ushort)(*pwVar27 == L'=');
    auVar39._6_2_ = -(ushort)(*pwVar28 == L'=');
    auVar39._8_2_ = -(ushort)(*pwVar29 == L'=');
    auVar39._10_2_ = -(ushort)(*pwVar30 == L'=');
    auVar39._12_2_ = -(ushort)(*pwVar31 == L'=');
    auVar39._14_2_ = -(ushort)(*pwVar32 == L'=');
    auVar36._0_2_ = -(ushort)(wVar4 == L'=');
    auVar36._2_2_ = -(ushort)(*pwVar12 == L'=');
    auVar36._4_2_ = -(ushort)(*pwVar13 == L'=');
    auVar36._6_2_ = -(ushort)(*pwVar14 == L'=');
    auVar36._8_2_ = -(ushort)(*pwVar15 == L'=');
    auVar36._10_2_ = -(ushort)(*pwVar16 == L'=');
    auVar36._12_2_ = -(ushort)(*pwVar17 == L'=');
    auVar36._14_2_ = -(ushort)(*pwVar18 == L'=');
    auVar37._0_2_ = -(ushort)(*pwVar1 == L'=');
    auVar37._2_2_ = -(ushort)(*pwVar5 == L'=');
    auVar37._4_2_ = -(ushort)(*pwVar6 == L'=');
    auVar37._6_2_ = -(ushort)(*pwVar7 == L'=');
    auVar37._8_2_ = -(ushort)(*pwVar8 == L'=');
    auVar37._10_2_ = -(ushort)(*pwVar9 == L'=');
    auVar37._12_2_ = -(ushort)(*pwVar10 == L'=');
    auVar37._14_2_ = -(ushort)(*pwVar11 == L'=');
    auVar38._0_2_ = -(ushort)(*pwVar2 == L'=');
    auVar38._2_2_ = -(ushort)(*pwVar19 == L'=');
    auVar38._4_2_ = -(ushort)(*pwVar20 == L'=');
    auVar38._6_2_ = -(ushort)(*pwVar21 == L'=');
    auVar38._8_2_ = -(ushort)(*pwVar22 == L'=');
    auVar38._10_2_ = -(ushort)(*pwVar23 == L'=');
    auVar38._12_2_ = -(ushort)(*pwVar24 == L'=');
    auVar38._14_2_ = -(ushort)(*pwVar25 == L'=');
    auVar36 = packsswb(auVar36 | auVar39,auVar38 | auVar37);
    if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar36 >> 0x37,0) & 1) != 0) || (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar36 >> 0x47,0) & 1) != 0) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') goto LAB_1011fa00;
  }
  uVar33 = uVar33 * 2;
  do {
    if (uVar33 == 0) {
      return 0;
    }
    uVar33 = uVar33 - 2;
    wVar4 = *pwVar35;
    pwVar35 = pwVar35 + 1;
  } while (wVar4 != L'=');
LAB_1011fa00:
  return CONCAT31((int3)(uVar33 >> 8),1);
}
