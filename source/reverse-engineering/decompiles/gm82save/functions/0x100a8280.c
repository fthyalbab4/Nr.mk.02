// rea decompile_all
// name: FUN_100a8280
// address: 0x100a8280
// body: available
// range: 0x100a8280-0x100a864d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100a8280(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;

  param_1[0xe] = param_1[0xe] + param_3;
  uVar11 = param_1[0xf];
  if (uVar11 == 0) {
    local_34 = 0;
  }
  else {
    local_3c = 0;
    local_34 = 8 - uVar11;
    uVar4 = param_3;
    if (local_34 < param_3) {
      uVar4 = local_34;
    }
    if (uVar4 < 4) {
      uVar10 = 0;
      uVar3 = 0;
      if (1 < uVar4) goto LAB_100a82e3;
    }
    else {
      uVar3 = *param_2;
      uVar10 = 4;
      if (5 < uVar4) {
LAB_100a82e3:
        uVar8 = (uint)*(ushort *)((int)param_2 + uVar10);
        local_3c = 0;
        if (uVar10 != 0) {
          uVar8 = 0;
          local_3c = (uint)*(ushort *)((int)param_2 + uVar10);
        }
        uVar10 = uVar10 | 2;
        uVar3 = uVar3 | uVar8;
      }
    }
    if (uVar10 < uVar4) {
      bVar5 = (byte)(uVar10 << 3);
      bVar2 = bVar5 & 0x1f;
      uVar7 = (uint)*(byte *)((int)param_2 + uVar10) << (bVar5 & 0x1f);
      uVar8 = uVar7;
      uVar4 = 0 << bVar2 | (uint)(*(byte *)((int)param_2 + uVar10) >> 0x20 - bVar2);
      if ((uVar10 << 3 & 0x20) != 0) {
        uVar8 = 0;
        uVar4 = uVar7;
      }
      local_3c = local_3c | uVar4;
      uVar3 = uVar3 | uVar8;
    }
    uVar10 = 0;
    bVar5 = (byte)(uVar11 * 8);
    bVar2 = bVar5 & 0x1f;
    uVar4 = uVar3 << (bVar5 & 0x1f);
    if ((uVar11 * 8 & 0x20) == 0) {
      uVar10 = uVar4;
      uVar4 = local_3c << bVar2 | uVar3 >> 0x20 - bVar2;
    }
    uVar4 = uVar4 | param_1[0xd];
    uVar10 = uVar10 | param_1[0xc];
    param_1[0xc] = uVar10;
    param_1[0xd] = uVar4;
    if (param_3 < local_34) {
      uVar11 = uVar11 + param_3;
      goto LAB_100a8643;
    }
    uVar11 = param_1[4];
    uVar8 = param_1[7] ^ uVar4;
    uVar7 = param_1[6] ^ uVar10;
    uVar12 = *param_1 + uVar11;
    uVar3 = param_1[5];
    uVar13 = param_1[1] + uVar3 + (uint)CARRY4(*param_1,uVar11);
    uVar14 = param_1[2] + uVar7;
    uVar15 = param_1[3] + uVar8 + (uint)CARRY4(param_1[2],uVar7);
    uVar17 = (uVar11 << 0xd | uVar3 >> 0x13) ^ uVar12;
    uVar9 = (uVar7 << 0x10 | uVar8 >> 0x10) ^ uVar14;
    uVar8 = (uVar7 >> 0x10 | uVar8 << 0x10) ^ uVar15;
    uVar3 = (uVar3 << 0xd | uVar11 >> 0x13) ^ uVar13;
    uVar7 = uVar15 + uVar3 + (uint)CARRY4(uVar14,uVar17);
    uVar11 = uVar12 + uVar8 + (uint)CARRY4(uVar13,uVar9);
    param_1[4] = (uVar17 << 0x11 | uVar3 >> 0xf) ^ uVar14 + uVar17;
    param_1[5] = (uVar17 >> 0xf | uVar3 << 0x11) ^ uVar7;
    param_1[6] = (uVar9 << 0x15 | uVar8 >> 0xb) ^ uVar13 + uVar9;
    param_1[7] = (uVar9 >> 0xb | uVar8 << 0x15) ^ uVar11;
    param_1[3] = uVar14 + uVar17;
    param_1[2] = uVar7;
    param_1[1] = uVar11 ^ uVar4;
    *param_1 = uVar13 + uVar9 ^ uVar10;
  }
  uVar4 = param_3 - local_34 & 0xfffffff8;
  uVar11 = param_3 - local_34 & 7;
  if (local_34 < uVar4) {
    local_3c = param_1[1];
    local_30 = param_1[3];
    uVar3 = *param_1;
    uVar10 = param_1[7];
    uVar8 = param_1[5];
    uVar7 = param_1[4];
    uVar9 = param_1[6];
    local_38 = param_1[2];
    do {
      uVar13 = *(uint *)((int)param_2 + local_34 + 4);
      uVar10 = uVar10 ^ uVar13;
      puVar1 = (uint *)((int)param_2 + local_34);
      uVar9 = uVar9 ^ *puVar1;
      uVar15 = local_3c + uVar8 + (uint)CARRY4(uVar3,uVar7);
      uVar12 = local_38 + uVar9;
      uVar17 = local_30 + uVar10 + (uint)CARRY4(local_38,uVar9);
      uVar18 = (uVar8 << 0xd | uVar7 >> 0x13) ^ uVar15;
      uVar14 = (uVar7 << 0xd | uVar8 >> 0x13) ^ uVar3 + uVar7;
      uVar16 = (uVar9 << 0x10 | uVar10 >> 0x10) ^ uVar12;
      uVar9 = (uVar9 >> 0x10 | uVar10 << 0x10) ^ uVar17;
      local_30 = uVar12 + uVar14;
      local_38 = uVar17 + uVar18 + (uint)CARRY4(uVar12,uVar14);
      local_3c = uVar3 + uVar7 + uVar9 + (uint)CARRY4(uVar15,uVar16);
      uVar8 = (uVar18 << 0x11 | uVar14 >> 0xf) ^ local_38;
      uVar7 = (uVar14 << 0x11 | uVar18 >> 0xf) ^ local_30;
      uVar10 = (uVar16 >> 0xb | uVar9 << 0x15) ^ local_3c;
      local_3c = local_3c ^ uVar13;
      local_34 = local_34 + 8;
      uVar9 = (uVar16 << 0x15 | uVar9 >> 0xb) ^ uVar15 + uVar16;
      uVar3 = uVar15 + uVar16 ^ *puVar1;
    } while (local_34 < uVar4);
    param_1[6] = uVar9;
    param_1[7] = uVar10;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    param_1[2] = local_38;
    param_1[3] = local_30;
    *param_1 = uVar3;
    param_1[1] = local_3c;
  }
  uVar4 = 0;
  if (uVar11 < 4) {
    uVar3 = 0;
    local_3c = 0;
  }
  else {
    local_3c = *(uint *)((int)param_2 + local_34);
    uVar3 = 4;
  }
  if ((uVar3 | 1) < uVar11) {
    uVar8 = (uint)*(ushort *)((int)param_2 + uVar3 + local_34);
    uVar10 = uVar8;
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar10 = 0;
      uVar4 = uVar8;
    }
    uVar3 = uVar3 | 2;
    local_3c = local_3c | uVar10;
  }
  if (uVar3 < uVar11) {
    bVar2 = *(byte *)((int)param_2 + local_34 + uVar3);
    bVar6 = (byte)(uVar3 << 3);
    bVar5 = bVar6 & 0x1f;
    uVar7 = (uint)bVar2 << (bVar6 & 0x1f);
    uVar8 = uVar7;
    uVar10 = 0 << bVar5 | (uint)(bVar2 >> 0x20 - bVar5);
    if ((uVar3 << 3 & 0x20) != 0) {
      uVar8 = 0;
      uVar10 = uVar7;
    }
    uVar4 = uVar4 | uVar10;
    local_3c = local_3c | uVar8;
  }
  param_1[0xc] = local_3c;
  param_1[0xd] = uVar4;
LAB_100a8643:
  param_1[0xf] = uVar11;
  return;
}
