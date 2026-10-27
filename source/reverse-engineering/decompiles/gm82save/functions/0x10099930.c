// rea decompile_all
// name: FUN_10099930
// address: 0x10099930
// body: available
// range: 0x10099930-0x10099be2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10099930(uint *param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint local_2c;
  uint local_28;

  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0x7ff;
  if ((SBORROW4(param_3,-1) != SBORROW4(param_3 + 1,(uint)(param_2 < 0xfffffeaa))) ==
      (int)((param_3 + 1) - (uint)(param_2 < 0xfffffeaa)) < 0 && (param_4 != 0 || param_5 != 0)) {
    if ((SBORROW4(0,param_3) != SBORROW4(-param_3,(uint)(0x134 < param_2))) !=
        (int)(-param_3 - (uint)(0x134 < param_2)) < 0) {
      return;
    }
    uVar13 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar13 == 0; uVar13 = uVar13 - 1) {
      }
    }
    uVar5 = 0x3f;
    if (param_4 != 0) {
      uVar5 = uVar13;
    }
    uVar13 = 0x1f;
    if (param_5 != 0) {
      for (; param_5 >> uVar13 == 0; uVar13 = uVar13 - 1) {
      }
    }
    uVar13 = uVar13 ^ 0x1f;
    if (param_5 == 0) {
      uVar13 = (uVar5 ^ 0x1f) + 0x20;
    }
    bVar6 = (byte)uVar13 & 0x1f;
    uVar11 = param_4 << ((byte)uVar13 & 0x1f);
    uVar8 = uVar11;
    uVar5 = param_5 << bVar6 | param_4 >> 0x20 - bVar6;
    if ((uVar13 & 0x20) != 0) {
      uVar8 = 0;
      uVar5 = uVar11;
    }
    iVar9 = param_2 * 0x10;
    uVar1 = (ulonglong)*(uint *)(&DAT_10147e88 + iVar9) * (ulonglong)uVar8;
    local_28 = (uint)uVar1;
    lVar2 = (ulonglong)*(uint *)(&DAT_10147e8c + iVar9) * (ulonglong)uVar8 + (uVar1 >> 0x20);
    uVar12 = (uint)lVar2;
    uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
    lVar2 = (ulonglong)*(uint *)(&DAT_10147e88 + iVar9) * (ulonglong)uVar5;
    uVar10 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar11 = (uint)lVar2;
    local_2c = uVar11 + uVar12;
    uVar11 = (uint)CARRY4(uVar11,uVar12);
    uVar12 = uVar10 + uVar7;
    lVar2 = (ulonglong)*(uint *)(&DAT_10147e8c + iVar9) * (ulonglong)uVar5 +
            (ulonglong)CONCAT14(CARRY4(uVar10,uVar7) || CARRY4(uVar12,uVar11),uVar12 + uVar11);
    if ((~(uint)lVar2 & 0x1ff) == 0) {
      lVar4 = (ulonglong)*(uint *)(&DAT_10147e94 + iVar9) * (ulonglong)uVar8 +
              ((ulonglong)*(uint *)(&DAT_10147e90 + iVar9) * (ulonglong)uVar8 >> 0x20);
      uVar12 = (uint)((ulonglong)lVar4 >> 0x20);
      lVar3 = (ulonglong)*(uint *)(&DAT_10147e90 + iVar9) * (ulonglong)uVar5;
      uVar7 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar8 = (uint)CARRY4((uint)lVar3,(uint)lVar4);
      uVar11 = uVar7 + uVar12;
      lVar3 = (ulonglong)*(uint *)(&DAT_10147e94 + iVar9) * (ulonglong)uVar5 +
              (ulonglong)CONCAT14(CARRY4(uVar7,uVar12) || CARRY4(uVar11,uVar8),uVar11 + uVar8);
      uVar5 = (uint)lVar3;
      uVar8 = (uint)((ulonglong)lVar3 >> 0x20);
      bVar14 = CARRY4(local_28,uVar5);
      local_28 = local_28 + uVar5;
      uVar5 = (uint)bVar14;
      bVar14 = CARRY4(local_2c,uVar8);
      uVar8 = local_2c + uVar8;
      local_2c = uVar8 + uVar5;
      lVar2 = lVar2 + (ulonglong)(bVar14 || CARRY4(uVar8,uVar5));
    }
    uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
    if (((uint)(param_2 + 0x1b < 0x53) <= param_3 + (uint)(0xffffffe4 < param_2)) &&
       (uVar8 = 0xffffffff, (local_28 & local_2c) == 0xffffffff)) goto LAB_10099974;
    bVar6 = 9 - (char)(lVar2 >> 0x3f);
    uVar11 = (uint)lVar2 >> (bVar6 & 0x1f) | uVar5 << 0x20 - (bVar6 & 0x1f);
    uVar8 = ((((int)(param_2 * 0x3526a) >> 0x10) - uVar13) + 0x3f) - ((int)uVar5 >> 0x1f);
    uVar5 = uVar5 >> (bVar6 & 0x1f);
    if ((int)uVar8 < -0x3fe) {
      if (uVar8 < 0xfffffbc3) goto LAB_10099972;
      uVar12 = 0;
      bVar6 = 2 - (char)uVar8;
      uVar13 = uVar5 >> (bVar6 & 0x1f);
      if ((bVar6 & 0x20) == 0) {
        uVar12 = uVar13;
        uVar13 = uVar11 >> (bVar6 & 0x1f) | uVar5 << 0x20 - (bVar6 & 0x1f);
      }
      uVar12 = uVar12 + CARRY4(uVar13 & 1,uVar13);
      uVar13 = (uVar13 & 1) + uVar13 >> 1 | uVar12 * -0x80000000;
      uVar5 = uVar12 >> 1;
      uVar8 = (uint)((uVar12 & 0xffe00000) != 0);
    }
    else {
      uVar12 = uVar5 & 0xffffff;
      uVar13 = uVar11 & 0xfffffffc;
      if (((uVar11 & 3) != 1 ||
          ((uint)(param_2 + 4 < 0x1c) <= param_3 + (uint)(0xfffffffb < param_2) ||
          (local_28 < 2) <= local_2c)) ||
          lVar2 != CONCAT44(uVar5 << (bVar6 & 0x1f) | uVar11 >> 0x20 - (bVar6 & 0x1f),
                            uVar11 << (bVar6 & 0x1f))) {
        uVar12 = uVar5;
        uVar13 = uVar11;
      }
      uVar12 = uVar12 + CARRY4(uVar13 & 1,uVar13);
      bVar14 = (uVar12 & 0xffc00000) != 0;
      uVar8 = bVar14 + 0x3ff + uVar8;
      if (0x7fe < uVar8) {
        return;
      }
      uVar13 = (uVar13 & 1) + uVar13 >> 1 | uVar12 * -0x80000000;
      uVar5 = uVar12 >> 1 & 0x7fefffff;
      if (bVar14) {
        uVar5 = 0;
        uVar13 = 0;
      }
    }
    *param_1 = uVar13;
    param_1[1] = uVar5;
  }
  else {
LAB_10099972:
    uVar8 = 0;
  }
LAB_10099974:
  param_1[2] = uVar8;
  return;
}
