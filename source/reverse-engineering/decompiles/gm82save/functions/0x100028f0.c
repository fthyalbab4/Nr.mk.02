// rea decompile_all
// name: FUN_100028f0
// address: 0x100028f0
// body: available
// range: 0x100028f0-0x100029bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_100028f0(uint param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  int local_14;

  if (DAT_10163254 == 0) {
    return 0;
  }
  uVar10 = FUN_1002e000(DAT_10163258,DAT_1016325c,DAT_10163260,DAT_10163264,param_1);
  uVar3 = (uint)uVar10;
  local_14 = 0;
  bVar6 = (byte)((ulonglong)uVar10 >> 0x18) >> 1;
  auVar7 = ZEXT216(CONCAT11(bVar6,bVar6));
  auVar7 = pshuflw(auVar7,auVar7,0);
  do {
    uVar3 = DAT_1016324c & uVar3;
    pcVar1 = (char *)(DAT_10163248 + uVar3);
    auVar9[0] = -(*pcVar1 == auVar7[0]);
    auVar9[1] = -(pcVar1[1] == auVar7[1]);
    auVar9[2] = -(pcVar1[2] == auVar7[2]);
    auVar9[3] = -(pcVar1[3] == auVar7[3]);
    auVar9[4] = -(pcVar1[4] == auVar7[4]);
    auVar9[5] = -(pcVar1[5] == auVar7[5]);
    auVar9[6] = -(pcVar1[6] == auVar7[6]);
    auVar9[7] = -(pcVar1[7] == auVar7[7]);
    auVar9[8] = -(pcVar1[8] == auVar7[0]);
    auVar9[9] = -(pcVar1[9] == auVar7[1]);
    auVar9[10] = -(pcVar1[10] == auVar7[2]);
    auVar9[0xb] = -(pcVar1[0xb] == auVar7[3]);
    auVar9[0xc] = -(pcVar1[0xc] == auVar7[4]);
    auVar9[0xd] = -(pcVar1[0xd] == auVar7[5]);
    auVar9[0xe] = -(pcVar1[0xe] == auVar7[6]);
    auVar9[0xf] = -(pcVar1[0xf] == auVar7[7]);
    uVar4 = (uint)(ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar9[0xf] >> 7) << 0xf);
    while ((short)uVar4 != 0) {
      iVar2 = 0;
      for (uVar5 = uVar4; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar2 = iVar2 + 1;
      }
      uVar4 = uVar4 - 1 & uVar4;
      uVar5 = iVar2 + uVar3 & DAT_1016324c;
      if (param_1 == *(uint *)(DAT_10163248 + -0x28 + uVar5 * -0x28)) {
        return DAT_10163248 + uVar5 * -0x28 + -0x20;
      }
    }
    auVar8[0] = -(*pcVar1 == -1);
    auVar8[1] = -(pcVar1[1] == -1);
    auVar8[2] = -(pcVar1[2] == -1);
    auVar8[3] = -(pcVar1[3] == -1);
    auVar8[4] = -(pcVar1[4] == -1);
    auVar8[5] = -(pcVar1[5] == -1);
    auVar8[6] = -(pcVar1[6] == -1);
    auVar8[7] = -(pcVar1[7] == -1);
    auVar8[8] = -(pcVar1[8] == -1);
    auVar8[9] = -(pcVar1[9] == -1);
    auVar8[10] = -(pcVar1[10] == -1);
    auVar8[0xb] = -(pcVar1[0xb] == -1);
    auVar8[0xc] = -(pcVar1[0xc] == -1);
    auVar8[0xd] = -(pcVar1[0xd] == -1);
    auVar8[0xe] = -(pcVar1[0xe] == -1);
    auVar8[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar8 >> 7,0) & 1) != 0 || (SUB161(auVar8 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar8 >> 0x17,0) & 1) != 0) || (SUB161(auVar8 >> 0x1f,0) & 1) != 0) ||
                  (SUB161(auVar8 >> 0x27,0) & 1) != 0) || (SUB161(auVar8 >> 0x2f,0) & 1) != 0) ||
                (SUB161(auVar8 >> 0x37,0) & 1) != 0) || (SUB161(auVar8 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar8 >> 0x47,0) & 1) != 0) || (SUB161(auVar8 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar8 >> 0x57,0) & 1) != 0) || (SUB161(auVar8 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar8 >> 0x67,0) & 1) != 0) || (SUB161(auVar8 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar8 >> 0x77,0) & 1) != 0) || auVar8[0xf] < '\0') {
      return 0;
    }
    uVar3 = uVar3 + 0x10 + local_14;
    local_14 = local_14 + 0x10;
  } while( true );
}
