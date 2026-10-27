// rea decompile_all
// name: FUN_1004cfe0
// address: 0x1004cfe0
// body: available
// range: 0x1004cfe0-0x1004d146 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_1004cfe0(undefined4 *param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  int local_28;
  uint local_20;

  uVar15 = FUN_1002e000(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  uVar10 = (uint)uVar15;
  if (param_1[2] == 0) {
    FUN_10134c80(param_1,param_1 + 4);
  }
  uVar7 = param_1[1];
  pauVar2 = (undefined1 (*) [16])*param_1;
  bVar5 = false;
  local_28 = 0;
  bVar6 = (byte)((ulonglong)uVar15 >> 0x18);
  bVar11 = bVar6 >> 1;
  auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
  auVar12 = pshuflw(auVar12,auVar12,0);
  do {
    uVar10 = uVar7 & uVar10;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar10);
    auVar14[0] = -(auVar1[0] == auVar12[0]);
    auVar14[1] = -(auVar1[1] == auVar12[1]);
    auVar14[2] = -(auVar1[2] == auVar12[2]);
    auVar14[3] = -(auVar1[3] == auVar12[3]);
    auVar14[4] = -(auVar1[4] == auVar12[4]);
    auVar14[5] = -(auVar1[5] == auVar12[5]);
    auVar14[6] = -(auVar1[6] == auVar12[6]);
    auVar14[7] = -(auVar1[7] == auVar12[7]);
    auVar14[8] = -(auVar1[8] == auVar12[0]);
    auVar14[9] = -(auVar1[9] == auVar12[1]);
    auVar14[10] = -(auVar1[10] == auVar12[2]);
    auVar14[0xb] = -(auVar1[0xb] == auVar12[3]);
    auVar14[0xc] = -(auVar1[0xc] == auVar12[4]);
    auVar14[0xd] = -(auVar1[0xd] == auVar12[5]);
    bVar11 = auVar1[0xf];
    auVar14[0xe] = -(auVar1[0xe] == auVar12[6]);
    auVar14[0xf] = -(bVar11 == auVar12[7]);
    uVar9 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar14[0xf] >> 7) << 0xf);
    while (sVar8 = (short)uVar9, sVar8 != 0) {
      iVar3 = 0;
      for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      uVar9 = uVar9 - 1 & uVar9;
      if (param_2 == *(uint *)((int)pauVar2 + (iVar3 + uVar10 & uVar7) * -4 + -4))
      goto LAB_1004d118;
    }
    if (bVar5) goto LAB_1004d0aa;
    uVar9 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                          (ushort)(bVar11 >> 7) << 0xf);
    if (uVar9 == 0) {
      bVar5 = false;
    }
    else {
      iVar3 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      local_20 = iVar3 + uVar10 & uVar7;
LAB_1004d0aa:
      auVar13[0] = -(auVar1[0] == -1);
      auVar13[1] = -(auVar1[1] == -1);
      auVar13[2] = -(auVar1[2] == -1);
      auVar13[3] = -(auVar1[3] == -1);
      auVar13[4] = -(auVar1[4] == -1);
      auVar13[5] = -(auVar1[5] == -1);
      auVar13[6] = -(auVar1[6] == -1);
      auVar13[7] = -(auVar1[7] == 0xff);
      auVar13[8] = -(auVar1[8] == -1);
      auVar13[9] = -(auVar1[9] == -1);
      auVar13[10] = -(auVar1[10] == -1);
      auVar13[0xb] = -(auVar1[0xb] == -1);
      auVar13[0xc] = -(auVar1[0xc] == -1);
      auVar13[0xd] = -(auVar1[0xd] == -1);
      auVar13[0xe] = -(auVar1[0xe] == -1);
      auVar13[0xf] = -(bVar11 == 0xff);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') {
        bVar11 = (*pauVar2)[local_20];
        if (-1 < (char)bVar11) {
          auVar12 = *pauVar2;
          local_20 = 0;
          for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar12[0xf] >> 7) << 0xf); (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x80000000) {
            local_20 = local_20 + 1;
          }
          bVar11 = (*pauVar2)[local_20];
        }
        param_1[2] = param_1[2] - (uint)(bVar11 & 1);
        bVar6 = bVar6 >> 1;
        (*pauVar2)[local_20] = bVar6;
        pauVar2[1][local_20 - 0x10 & uVar7] = bVar6;
        param_1[3] = param_1[3] + 1;
        *(uint *)((int)pauVar2 + local_20 * -4 + -4) = param_2;
        uVar7 = 0;
LAB_1004d118:
        return CONCAT31((int3)(uVar7 >> 8),sVar8 != 0);
      }
      bVar5 = true;
    }
    uVar10 = local_28 + 0x10 + uVar10;
    local_28 = local_28 + 0x10;
  } while( true );
}
