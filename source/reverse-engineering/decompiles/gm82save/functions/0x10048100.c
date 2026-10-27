// rea decompile_all
// name: FUN_10048100
// address: 0x10048100
// body: available
// range: 0x10048100-0x10048211 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10048100(uint *param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  int local_24;
  uint local_14;

  uVar11 = FUN_1002e000(DAT_10163258,DAT_1016325c,DAT_10163260,DAT_10163264,param_2);
  local_24 = 0;
  bVar7 = (byte)((ulonglong)uVar11 >> 0x18) >> 1;
  auVar8 = ZEXT216(CONCAT11(bVar7,bVar7));
  auVar8 = pshuflw(auVar8,auVar8,0);
  uVar5 = (uint)uVar11;
  do {
    uVar5 = DAT_1016324c & uVar5;
    pcVar1 = (char *)(DAT_10163248 + uVar5);
    auVar10[0] = -(*pcVar1 == auVar8[0]);
    auVar10[1] = -(pcVar1[1] == auVar8[1]);
    auVar10[2] = -(pcVar1[2] == auVar8[2]);
    auVar10[3] = -(pcVar1[3] == auVar8[3]);
    auVar10[4] = -(pcVar1[4] == auVar8[4]);
    auVar10[5] = -(pcVar1[5] == auVar8[5]);
    auVar10[6] = -(pcVar1[6] == auVar8[6]);
    auVar10[7] = -(pcVar1[7] == auVar8[7]);
    auVar10[8] = -(pcVar1[8] == auVar8[0]);
    auVar10[9] = -(pcVar1[9] == auVar8[1]);
    auVar10[10] = -(pcVar1[10] == auVar8[2]);
    auVar10[0xb] = -(pcVar1[0xb] == auVar8[3]);
    auVar10[0xc] = -(pcVar1[0xc] == auVar8[4]);
    auVar10[0xd] = -(pcVar1[0xd] == auVar8[5]);
    auVar10[0xe] = -(pcVar1[0xe] == auVar8[6]);
    auVar10[0xf] = -(pcVar1[0xf] == auVar8[7]);
    uVar4 = (uint)(ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar10[0xf] >> 7) << 0xf);
    while ((short)uVar4 != 0) {
      iVar2 = 0;
      for (uVar6 = uVar4; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        iVar2 = iVar2 + 1;
      }
      uVar4 = uVar4 - 1 & uVar4;
      uVar6 = iVar2 + uVar5 & DAT_1016324c;
      if (*(uint *)(DAT_10163248 + -0x28 + uVar6 * -0x28) == param_2) {
        *param_1 = DAT_10163248 + uVar6 * -0x28;
        param_1[1] = (uint)&DAT_10163248;
        puVar3 = (undefined4 *)0x0;
        goto LAB_100481d7;
      }
    }
    auVar9[0] = -(*pcVar1 == -1);
    auVar9[1] = -(pcVar1[1] == -1);
    auVar9[2] = -(pcVar1[2] == -1);
    auVar9[3] = -(pcVar1[3] == -1);
    auVar9[4] = -(pcVar1[4] == -1);
    auVar9[5] = -(pcVar1[5] == -1);
    auVar9[6] = -(pcVar1[6] == -1);
    auVar9[7] = -(pcVar1[7] == -1);
    auVar9[8] = -(pcVar1[8] == -1);
    auVar9[9] = -(pcVar1[9] == -1);
    auVar9[10] = -(pcVar1[10] == -1);
    auVar9[0xb] = -(pcVar1[0xb] == -1);
    auVar9[0xc] = -(pcVar1[0xc] == -1);
    auVar9[0xd] = -(pcVar1[0xd] == -1);
    auVar9[0xe] = -(pcVar1[0xe] == -1);
    auVar9[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar9 >> 7,0) & 1) != 0 || (SUB161(auVar9 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar9 >> 0x17,0) & 1) != 0) || (SUB161(auVar9 >> 0x1f,0) & 1) != 0) ||
                  (SUB161(auVar9 >> 0x27,0) & 1) != 0) || (SUB161(auVar9 >> 0x2f,0) & 1) != 0) ||
                (SUB161(auVar9 >> 0x37,0) & 1) != 0) || (SUB161(auVar9 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar9 >> 0x47,0) & 1) != 0) || (SUB161(auVar9 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar9 >> 0x57,0) & 1) != 0) || (SUB161(auVar9 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar9 >> 0x67,0) & 1) != 0) || (SUB161(auVar9 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar9 >> 0x77,0) & 1) != 0) || auVar9[0xf] < '\0') {
      if (DAT_10163250 == 0) {
        FUN_10133d90(1);
      }
      *param_1 = (uint)uVar11;
      local_14 = (uint)((ulonglong)uVar11 >> 0x20);
      param_1[1] = local_14;
      param_1[2] = param_2;
      puVar3 = &DAT_10163248;
LAB_100481d7:
      param_1[3] = (uint)puVar3;
      return;
    }
    uVar5 = uVar5 + 0x10 + local_24;
    local_24 = local_24 + 0x10;
  } while( true );
}
