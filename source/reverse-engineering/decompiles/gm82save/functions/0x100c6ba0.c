// rea decompile_all
// name: FUN_100c6ba0
// address: 0x100c6ba0
// body: available
// range: 0x100c6ba0-0x100c6bec inclusive
// range: 0x100c6bf0-0x100c6cd9 inclusive
// range: 0x100c6ce0-0x100c6d2a inclusive
// range: 0x100c6d30-0x100c6ddb inclusive
// range: 0x100c6de0-0x100c6f6b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100c6ba0(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  byte *pbVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte bVar12;
  byte bVar15;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar16;
  int iVar17;
  byte bVar18;
  int *piVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  bool bVar23;
  byte bVar24;
  int *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  int *piStack_84;
  uint local_80;
  int local_7c;
  int local_78;
  undefined4 *local_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 local_60 [17];
  undefined8 local_1c;
  uint local_14;

  local_88 = 0;
  piStack_84 = (int *)&DAT_00000004;
  local_80 = 0;
  local_74 = param_1;
  if (param_3 == 0) {
    bVar12 = 1;
    local_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    iVar17 = 0;
    local_98 = 0;
    local_94 = 0;
    local_9c = 0;
    local_a0 = 0;
    local_a8._0_1_ = 1;
  }
  else {
    iVar20 = 4;
    local_a8 = (int *)&DAT_00000004;
    do {
      uVar5 = local_80;
      puVar14 = *(undefined4 **)(*(int *)(param_2 + local_80 * 4) + 0x18);
      puVar13 = FUN_10107380(0,0x34);
      if (puVar13 == (undefined4 *)0x0) goto LAB_100c6f4a;
      uVar9 = puVar14[1];
      uVar10 = puVar14[2];
      uVar11 = puVar14[3];
      uVar2 = *(undefined2 *)(puVar14 + 0xc);
      uVar1 = *(undefined1 *)((int)puVar14 + 0x32);
      *puVar13 = *puVar14;
      puVar13[1] = uVar9;
      puVar13[2] = uVar10;
      puVar13[3] = uVar11;
      uVar9 = puVar14[5];
      uVar10 = puVar14[6];
      uVar11 = puVar14[7];
      puVar13[4] = puVar14[4];
      puVar13[5] = uVar9;
      puVar13[6] = uVar10;
      puVar13[7] = uVar11;
      uVar9 = puVar14[9];
      uVar10 = puVar14[10];
      uVar11 = puVar14[0xb];
      puVar13[8] = puVar14[8];
      puVar13[9] = uVar9;
      puVar13[10] = uVar10;
      puVar13[0xb] = uVar11;
      *(undefined2 *)(puVar13 + 0xc) = uVar2;
      *(undefined1 *)((int)puVar13 + 0x32) = uVar1;
      if (uVar5 == local_88) {
        FUN_10135e40(&local_88);
        local_a8 = piStack_84;
      }
      local_a8[uVar5] = (int)puVar13;
      iVar17 = param_3 * 4 + -4 + iVar20;
      local_80 = uVar5 + 1;
      iVar20 = iVar20 + -4;
    } while (iVar17 != 4);
    puVar14 = (undefined4 *)*piStack_84;
    local_7c = puVar14[5];
    iVar17 = puVar14[4];
    local_70 = puVar14[6];
    uStack_6c = puVar14[7];
    uStack_68 = puVar14[8];
    uStack_64 = puVar14[9];
    local_94 = puVar14[10];
    local_a8._0_1_ = *(byte *)(puVar14 + 0xc);
    local_a0 = *puVar14;
    local_98 = puVar14[0xb];
    bVar12 = *(byte *)((int)puVar14 + 0x31);
    local_90 = puVar14[1];
    local_8c = puVar14[3];
    local_9c = puVar14[2];
    if (uVar5 != 0) {
      piVar19 = piStack_84 + 2;
      iVar20 = -iVar20;
      bVar15 = (byte)local_a0 ^ 1;
      bVar18 = (byte)local_9c ^ 1;
      iVar16 = iVar17;
      do {
        pbVar3 = (byte *)piVar19[-1];
        if (((byte)local_a8 & 1) == 0) {
          local_a8._0_1_ = 0;
        }
        else {
          local_a8._0_1_ = pbVar3[0x30];
        }
        bVar23 = CARRY4(local_98,*(uint *)(pbVar3 + 0x2c));
        local_98 = local_98 + *(uint *)(pbVar3 + 0x2c);
        if (bVar23) {
          local_98 = 0xffffffff;
        }
        bVar24 = pbVar3[0x10];
        if (iVar16 == 1) {
          iVar17 = 0;
          if (bVar24 != 0) {
            bVar24 = local_7c != *(int *)(pbVar3 + 0x14);
            goto LAB_100c6d63;
          }
        }
        else {
LAB_100c6d63:
          iVar17 = iVar16;
          if (bVar24 != 0) {
            iVar17 = 0;
          }
        }
        if (bVar12 == 1) {
          bVar12 = pbVar3[0x31];
          if ((bVar15 & 1) != 0) goto LAB_100c6df5;
LAB_100c6d8b:
          if (((byte)local_a0 & local_90 <= *(uint *)(pbVar3 + 4)) == 0) {
            local_a0 = 1;
            local_90 = *(uint *)(pbVar3 + 4);
          }
          if (*pbVar3 == 0) {
            local_a0 = 0;
          }
          bVar15 = *pbVar3 ^ 1;
          uVar5 = *(uint *)(pbVar3 + 0x18);
          uVar6 = *(uint *)(pbVar3 + 0x1c);
          uVar7 = *(uint *)(pbVar3 + 0x20);
          uVar8 = *(uint *)(pbVar3 + 0x24);
        }
        else {
          bVar12 = 0;
          if ((bVar15 & 1) == 0) goto LAB_100c6d8b;
LAB_100c6df5:
          bVar15 = 1;
          uVar5 = *(uint *)(pbVar3 + 0x18);
          uVar6 = *(uint *)(pbVar3 + 0x1c);
          uVar7 = *(uint *)(pbVar3 + 0x20);
          uVar8 = *(uint *)(pbVar3 + 0x24);
        }
        bVar24 = bVar18 & 1;
        bVar18 = 1;
        if (bVar24 == 0) {
          if (((byte)local_9c & *(uint *)(pbVar3 + 0xc) <= local_8c) == 0) {
            local_9c = 1;
            local_8c = *(uint *)(pbVar3 + 0xc);
          }
          if (pbVar3[8] == 0) {
            local_9c = 0;
          }
          bVar18 = pbVar3[8] ^ 1;
        }
        uStack_6c = uVar6 & uStack_6c;
        uStack_68 = uVar7 & uStack_68;
        piVar19 = piVar19 + 1;
        local_70 = uVar5 | local_70;
        uStack_64 = uVar8 | uStack_64;
        local_94 = local_94 | *(uint *)(pbVar3 + 0x28);
        iVar20 = iVar20 + -4;
        iVar16 = iVar17;
        local_78 = iVar17;
      } while (iVar20 != 0);
    }
  }
  puVar14 = FUN_10107380(0,0x34);
  if (puVar14 != (undefined4 *)0x0) {
    *puVar14 = local_a0;
    puVar14[1] = local_90;
    puVar14[2] = local_9c;
    puVar14[3] = local_8c;
    puVar14[4] = iVar17;
    puVar14[5] = local_7c;
    puVar14[6] = local_70;
    puVar14[7] = uStack_6c;
    puVar14[8] = uStack_68;
    puVar14[9] = uStack_64;
    puVar14[10] = local_94;
    puVar14[0xb] = local_98;
    *(byte *)(puVar14 + 0xc) = (byte)local_a8;
    *(undefined1 *)((int)puVar14 + 0x31) = 0;
    *(byte *)((int)puVar14 + 0x32) = bVar12;
    local_1c = CONCAT44(piStack_84,local_88);
    local_14 = local_80;
    puVar13 = local_74;
    puVar21 = local_60;
    for (iVar17 = 0x11; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar21 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar21 = puVar21 + 1;
    }
    puVar13 = FUN_10107380(0,0x5c);
    if (puVar13 == (undefined4 *)0x0) {
      FUN_1013679e(4,0x5c);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    *puVar13 = 1;
    puVar13[1] = 1;
    puVar21 = local_60;
    puVar22 = puVar13 + 2;
    for (iVar17 = 0x14; iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar22 = *puVar21;
      puVar21 = puVar21 + 1;
      puVar22 = puVar22 + 1;
    }
    puVar13[0x16] = puVar14;
    return;
  }
LAB_100c6f4a:
  FUN_1013679e(4,0x34);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}
