// rea decompile_all
// name: FUN_100025a0
// address: 0x100025a0
// body: available
// range: 0x100025a0-0x100028ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_100025a0(int *param_1,uint *param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_91;
  undefined1 local_90 [16];
  uint *local_7c;
  uint local_78;
  uint local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  char cStack_29;
  char cStack_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;

  if (param_1[3] != 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 4);
    auVar20._0_8_ = local_50._0_8_;
    auVar20._8_4_ = local_50._0_4_;
    auVar20._12_4_ = local_50._4_4_;
    auVar22._0_8_ = local_50._8_8_;
    auVar22._8_4_ = local_50._8_4_;
    auVar22._12_4_ = local_50._12_4_;
    local_70 = auVar20 ^ _DAT_1013e2e0;
    local_60 = auVar22 ^ _DAT_1013e2f0;
    local_40 = 0;
    local_38 = 0;
    local_7c = param_2;
    local_30 = param_1;
    FUN_100a8280((uint *)local_70,param_2,param_3);
    local_91 = 0xff;
    FUN_100a8280((uint *)local_70,(uint *)&local_91,1);
    local_74 = (uint)local_40;
    uVar9 = local_60._8_4_ ^ (uint)local_40;
    local_78 = (int)local_38 << 0x18 | local_40._4_4_;
    uVar16 = local_60._12_4_ ^ local_78;
    uVar4 = local_70._4_4_ + local_60._4_4_ + (uint)CARRY4(local_70._0_4_,local_60._0_4_);
    uVar12 = local_70._8_4_ + uVar9;
    uVar5 = local_70._12_4_ + uVar16 + (uint)CARRY4(local_70._8_4_,uVar9);
    uVar6 = (local_60._0_4_ << 0xd | (uint)local_60._4_4_ >> 0x13) ^ local_70._0_4_ + local_60._0_4_
    ;
    uVar10 = (uVar9 >> 0x10 | uVar16 << 0x10) ^ uVar5;
    uVar16 = (uVar9 << 0x10 | uVar16 >> 0x10) ^ uVar12;
    uVar14 = (local_60._4_4_ << 0xd | (uint)local_60._0_4_ >> 0x13) ^ uVar4;
    uVar5 = uVar5 + uVar14 + (uint)CARRY4(uVar12,uVar6);
    uVar9 = local_70._0_4_ + local_60._0_4_ + uVar10 + (uint)CARRY4(uVar4,uVar16);
    uVar17 = (uVar6 << 0x11 | uVar14 >> 0xf) ^ uVar12 + uVar6;
    uVar8 = (uVar16 >> 0xb | uVar10 << 0x15) ^ uVar9;
    uVar13 = (uVar16 << 0x15 | uVar10 >> 0xb) ^ uVar4 + uVar16;
    uVar16 = uVar4 + uVar16 ^ (uint)local_40;
    uVar4 = (uVar6 >> 0xf | uVar14 << 0x11) ^ uVar5;
    uVar5 = uVar5 ^ 0xff;
    uVar15 = uVar16 + uVar17;
    uVar9 = (uVar9 ^ local_78) + uVar4 + (uint)CARRY4(uVar16,uVar17);
    uVar16 = uVar5 + uVar13;
    uVar5 = uVar12 + uVar6 + uVar8 + (uint)CARRY4(uVar5,uVar13);
    uVar12 = (uVar17 >> 0x13 | uVar4 << 0xd) ^ uVar9;
    uVar10 = (uVar17 << 0xd | uVar4 >> 0x13) ^ uVar15;
    uVar14 = (uVar13 >> 0x10 | uVar8 << 0x10) ^ uVar5;
    uVar13 = (uVar13 << 0x10 | uVar8 >> 0x10) ^ uVar16;
    uVar4 = uVar5 + uVar12 + (uint)CARRY4(uVar16,uVar10);
    uVar5 = uVar9 + uVar13;
    uVar9 = uVar15 + uVar14 + (uint)CARRY4(uVar9,uVar13);
    uVar6 = (uVar10 << 0x11 | uVar12 >> 0xf) ^ uVar16 + uVar10;
    uVar12 = (uVar10 >> 0xf | uVar12 << 0x11) ^ uVar4;
    uVar8 = (uVar13 << 0x15 | uVar14 >> 0xb) ^ uVar5;
    uVar13 = (uVar13 >> 0xb | uVar14 << 0x15) ^ uVar9;
    uVar14 = uVar9 + uVar12 + (uint)CARRY4(uVar5,uVar6);
    uVar9 = uVar4 + uVar8;
    uVar4 = uVar16 + uVar10 + uVar13 + (uint)CARRY4(uVar4,uVar8);
    uVar15 = (uVar6 << 0xd | uVar12 >> 0x13) ^ uVar5 + uVar6;
    uVar10 = (uVar8 >> 0x10 | uVar13 << 0x10) ^ uVar4;
    uVar16 = (uVar6 >> 0x13 | uVar12 << 0xd) ^ uVar14;
    uVar8 = (uVar8 << 0x10 | uVar13 >> 0x10) ^ uVar9;
    uVar12 = uVar4 + uVar16 + (uint)CARRY4(uVar9,uVar15);
    uVar4 = uVar14 + uVar8;
    uVar5 = uVar5 + uVar6 + uVar10 + (uint)CARRY4(uVar14,uVar8);
    uVar13 = (uVar15 << 0x11 | uVar16 >> 0xf) ^ uVar9 + uVar15;
    uVar14 = (uVar15 >> 0xf | uVar16 << 0x11) ^ uVar12;
    uVar16 = (uVar8 >> 0xb | uVar10 << 0x15) ^ uVar5;
    uVar6 = (uVar8 << 0x15 | uVar10 >> 0xb) ^ uVar4;
    uVar8 = uVar12 + uVar6;
    uVar10 = uVar9 + uVar15 + uVar16 + (uint)CARRY4(uVar12,uVar6);
    uVar9 = (uVar13 << 0xd | uVar14 >> 0x13) ^ uVar4 + uVar13;
    uVar5 = (uVar13 >> 0x13 | uVar14 << 0xd) ^ uVar5 + uVar14 + (uint)CARRY4(uVar4,uVar13);
    uVar5 = ((uVar16 >> 0x10 ^ uVar8) << 0x15 | ((uVar6 >> 0x10 | uVar16 << 0x10) ^ uVar10) >> 0xb)
            ^ (uVar5 >> 0xf | uVar9 << 0x11) ^ uVar10 + uVar5 + (uint)CARRY4(uVar8,uVar9) ^
            uVar8 + uVar9;
    iVar2 = *local_30;
    uVar9 = local_30[1];
    bVar19 = (byte)(uVar5 >> 0x19);
    auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar20 = pshuflw(auVar20,auVar20,0);
    local_90._0_8_ = auVar20._0_8_;
    local_90._8_4_ = auVar20._0_4_;
    local_90._12_4_ = auVar20._4_4_;
    iVar11 = 0;
    while( true ) {
      uVar5 = uVar9 & uVar5;
      pcVar1 = (char *)(iVar2 + uVar5);
      local_30._0_1_ = *pcVar1;
      local_30._1_1_ = pcVar1[1];
      local_30._2_1_ = pcVar1[2];
      local_30._3_1_ = pcVar1[3];
      cStack_2c = pcVar1[4];
      cStack_2b = pcVar1[5];
      cStack_2a = pcVar1[6];
      cStack_29 = pcVar1[7];
      cStack_28 = pcVar1[8];
      cStack_27 = pcVar1[9];
      cStack_26 = pcVar1[10];
      cStack_25 = pcVar1[0xb];
      cStack_24 = pcVar1[0xc];
      cStack_23 = pcVar1[0xd];
      cStack_22 = pcVar1[0xe];
      cStack_21 = pcVar1[0xf];
      auVar21[0] = -((char)local_30 == local_90[0]);
      auVar21[1] = -(local_30._1_1_ == local_90[1]);
      auVar21[2] = -(local_30._2_1_ == local_90[2]);
      auVar21[3] = -(local_30._3_1_ == local_90[3]);
      auVar21[4] = -(cStack_2c == local_90[4]);
      auVar21[5] = -(cStack_2b == local_90[5]);
      auVar21[6] = -(cStack_2a == local_90[6]);
      auVar21[7] = -(cStack_29 == local_90[7]);
      auVar21[8] = -(cStack_28 == local_90[8]);
      auVar21[9] = -(cStack_27 == local_90[9]);
      auVar21[10] = -(cStack_26 == local_90[10]);
      auVar21[0xb] = -(cStack_25 == local_90[0xb]);
      auVar21[0xc] = -(cStack_24 == local_90[0xc]);
      auVar21[0xd] = -(cStack_23 == local_90[0xd]);
      auVar21[0xe] = -(cStack_22 == local_90[0xe]);
      auVar21[0xf] = -(cStack_21 == local_90[0xf]);
      uVar4 = (uint)(ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar21[0xf] >> 7) << 0xf);
      uVar3 = *(undefined4 *)pcVar1;
      if (uVar4 != 0) {
        do {
          local_30 = (int *)uVar3;
          iVar18 = 0;
          for (uVar6 = uVar4; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            iVar18 = iVar18 + 1;
          }
          iVar18 = iVar2 + (iVar18 + uVar5 & uVar9) * -0x10;
          if ((param_3 == *(uint *)(iVar18 + -8)) &&
             (iVar7 = memcmp(local_7c,*(void **)(iVar18 + -0xc),param_3), iVar7 == 0)) {
            return iVar18 + -4;
          }
          uVar4 = uVar4 - 1 & uVar4;
          uVar3 = local_30;
        } while ((short)uVar4 != 0);
      }
      auVar23[0] = -((char)local_30 == -1);
      auVar23[1] = -(local_30._1_1_ == -1);
      auVar23[2] = -(local_30._2_1_ == -1);
      auVar23[3] = -(local_30._3_1_ == -1);
      auVar23[4] = -(cStack_2c == -1);
      auVar23[5] = -(cStack_2b == -1);
      auVar23[6] = -(cStack_2a == -1);
      auVar23[7] = -(cStack_29 == -1);
      auVar23[8] = -(cStack_28 == -1);
      auVar23[9] = -(cStack_27 == -1);
      auVar23[10] = -(cStack_26 == -1);
      auVar23[0xb] = -(cStack_25 == -1);
      auVar23[0xc] = -(cStack_24 == -1);
      auVar23[0xd] = -(cStack_23 == -1);
      auVar23[0xe] = -(cStack_22 == -1);
      auVar23[0xf] = -(cStack_21 == -1);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar5 = uVar5 + 0x10 + iVar11;
      iVar11 = iVar11 + 0x10;
    }
  }
                    /* WARNING: Read-only address (ram,0x1013e2e0) is written */
                    /* WARNING: Read-only address (ram,0x1013e2f0) is written */
  return 0;
}
