// rea decompile_all
// name: FUN_10122090
// address: 0x10122090
// body: available
// range: 0x10122090-0x10122752 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_10122090(uint param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  bool bVar15;
  uint local_43c;
  uint local_430;
  uint local_428;
  uint local_424;
  uint local_420;
  uint local_41c;
  uint local_410 [256];

  uVar11 = ((uint)(param_2 + 3) & 0xfffffffc) - (int)param_2;
  uVar12 = param_3 - uVar11;
  if (param_3 < uVar11) {
    pbVar13 = (byte *)0x1;
    uVar10 = 0;
    pbVar9 = &DAT_00000004;
    local_41c = 0;
    uVar11 = param_3;
  }
  else {
    pbVar9 = param_2 + uVar11;
    local_41c = uVar12 & 3;
    uVar10 = uVar12 >> 2;
    pbVar13 = pbVar9 + (uVar12 & 0x7ffffffc);
  }
  uVar12 = ~param_1;
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    uVar12 = uVar12 >> 8 ^ *(uint *)(&DAT_1015de84 + (uint)(byte)(bVar1 ^ (byte)uVar12) * 4);
  }
  uVar11 = uVar10 / 5;
  uVar6 = (uVar11 - 1) + (uint)(uVar11 == 0);
  if (uVar10 < 10) {
    local_43c = 0;
    local_428 = 0;
    local_424 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    local_430 = 2;
    local_43c = 0;
    local_428 = 0;
    local_424 = 0;
    local_420 = 0;
    do {
      uVar8 = local_430 - 2;
      iVar14 = uVar10 - uVar8;
      bVar15 = iVar14 == 0;
      if (uVar10 < uVar8) {
        iVar14 = 0;
      }
      if (uVar10 < uVar8 || bVar15) {
LAB_1012273e:
        FUN_10136b52(uVar8,uVar10,&PTR_s_C__Users_runneradmin__cargo_regi_1015b778);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (iVar14 == 1) {
        uVar8 = local_430 - 1;
        goto LAB_1012273e;
      }
      uVar8 = local_430;
      if (iVar14 == 2) goto LAB_1012273e;
      if (iVar14 == 3) {
        uVar8 = local_430 + 1;
        goto LAB_1012273e;
      }
      if (iVar14 == 4) {
        uVar8 = local_430 + 2;
        goto LAB_1012273e;
      }
      uVar12 = uVar12 ^ *(uint *)(pbVar9 + local_430 * 4 + -8);
      uVar7 = uVar7 ^ *(uint *)(pbVar9 + local_430 * 4 + -4);
      uVar12 = *(uint *)(&DAT_1015a56c + (uVar12 & 0xff) * 4) ^
               *(uint *)(&DAT_1015a96c + (uVar12 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_1015ad6c + (uVar12 >> 0xe & 0x3fc)) ^
               *(uint *)(&DAT_1015b16c + (uVar12 >> 0x18) * 4);
      uVar7 = *(uint *)(&DAT_1015a56c + (uVar7 & 0xff) * 4) ^
              *(uint *)(&DAT_1015a96c + (uVar7 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_1015ad6c + (uVar7 >> 0xe & 0x3fc)) ^
              *(uint *)(&DAT_1015b16c + (uVar7 >> 0x18) * 4);
      local_43c = local_43c ^ *(uint *)(pbVar9 + local_430 * 4);
      local_43c = *(uint *)(&DAT_1015a56c + (local_43c & 0xff) * 4) ^
                  *(uint *)(&DAT_1015a96c + (local_43c >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_1015ad6c + (local_43c >> 0xe & 0x3fc)) ^
                  *(uint *)(&DAT_1015b16c + (local_43c >> 0x18) * 4);
      local_428 = local_428 ^ *(uint *)(pbVar9 + local_430 * 4 + 4);
      local_428 = *(uint *)(&DAT_1015a56c + (local_428 & 0xff) * 4) ^
                  *(uint *)(&DAT_1015a96c + (local_428 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_1015ad6c + (local_428 >> 0xe & 0x3fc)) ^
                  *(uint *)(&DAT_1015b16c + (local_428 >> 0x18) * 4);
      local_424 = local_424 ^ *(uint *)(pbVar9 + local_430 * 4 + 8);
      local_420 = local_420 + 1;
      local_424 = *(uint *)(&DAT_1015a56c + (local_424 & 0xff) * 4) ^
                  *(uint *)(&DAT_1015a96c + (local_424 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_1015ad6c + (local_424 >> 0xe & 0x3fc)) ^
                  *(uint *)(&DAT_1015b16c + (local_424 >> 0x18) * 4);
      local_430 = local_430 + 5;
    } while (local_420 < uVar6);
  }
  iVar14 = uVar10 + uVar6 * -5;
  if (uVar6 * 5 <= uVar10) {
    if (iVar14 != 0) {
      uVar12 = uVar12 ^ *(uint *)(pbVar9 + uVar6 * 0x14);
      memcpy(local_410,&DAT_1015e284,0x400);
      uVar8 = local_410[uVar12 & 0xff];
      memcpy(local_410,&DAT_1015e684,0x400);
      uVar2 = local_410[uVar12 >> 8 & 0xff];
      memcpy(local_410,&DAT_1015ea84,0x400);
      uVar3 = *(uint *)((int)local_410 + (uVar12 >> 0xe & 0x3fc));
      memcpy(local_410,&DAT_1015ee84,0x400);
      uVar12 = uVar8 ^ uVar2 ^ uVar3 ^ local_410[uVar12 >> 0x18];
      if (iVar14 != 1) {
        uVar12 = uVar7 ^ *(uint *)(pbVar9 + uVar6 * 0x14 + 4) ^ uVar12;
        memcpy(local_410,&DAT_1015e284,0x400);
        uVar7 = local_410[uVar12 & 0xff];
        memcpy(local_410,&DAT_1015e684,0x400);
        uVar8 = local_410[uVar12 >> 8 & 0xff];
        memcpy(local_410,&DAT_1015ea84,0x400);
        uVar2 = *(uint *)((int)local_410 + (uVar12 >> 0xe & 0x3fc));
        memcpy(local_410,&DAT_1015ee84,0x400);
        uVar12 = uVar7 ^ uVar8 ^ uVar2 ^ local_410[uVar12 >> 0x18];
        if (iVar14 != 2) {
          uVar12 = local_43c ^ *(uint *)(pbVar9 + uVar6 * 0x14 + 8) ^ uVar12;
          memcpy(local_410,&DAT_1015e284,0x400);
          uVar7 = local_410[uVar12 & 0xff];
          memcpy(local_410,&DAT_1015e684,0x400);
          uVar8 = local_410[uVar12 >> 8 & 0xff];
          memcpy(local_410,&DAT_1015ea84,0x400);
          uVar2 = *(uint *)((int)local_410 + (uVar12 >> 0xe & 0x3fc));
          memcpy(local_410,&DAT_1015ee84,0x400);
          uVar12 = uVar7 ^ uVar8 ^ uVar2 ^ local_410[uVar12 >> 0x18];
          if (iVar14 != 3) {
            uVar12 = local_428 ^ *(uint *)(pbVar9 + uVar6 * 0x14 + 0xc) ^ uVar12;
            memcpy(local_410,&DAT_1015e284,0x400);
            uVar7 = local_410[uVar12 & 0xff];
            memcpy(local_410,&DAT_1015e684,0x400);
            uVar8 = local_410[uVar12 >> 8 & 0xff];
            memcpy(local_410,&DAT_1015ea84,0x400);
            uVar2 = *(uint *)((int)local_410 + (uVar12 >> 0xe & 0x3fc));
            memcpy(local_410,&DAT_1015ee84,0x400);
            uVar12 = uVar7 ^ uVar8 ^ uVar2 ^ local_410[uVar12 >> 0x18];
            if (iVar14 != 4) {
              uVar12 = local_424 ^ *(uint *)(pbVar9 + uVar6 * 0x14 + 0x10) ^ uVar12;
              memcpy(local_410,&DAT_1015e284,0x400);
              uVar6 = local_410[uVar12 & 0xff];
              memcpy(local_410,&DAT_1015e684,0x400);
              uVar7 = local_410[uVar12 >> 8 & 0xff];
              memcpy(local_410,&DAT_1015ea84,0x400);
              uVar8 = *(uint *)((int)local_410 + (uVar12 >> 0xe & 0x3fc));
              memcpy(local_410,&DAT_1015ee84,0x400);
              uVar12 = uVar6 ^ uVar7 ^ uVar8 ^ local_410[uVar12 >> 0x18];
              if (iVar14 != 5) {
                iVar14 = uVar10 + (uint)(uVar11 != 0) * 5 + uVar11 * -5 + -5;
                puVar5 = (uint *)(pbVar9 + uVar11 * 0x14 + (uint)(uVar11 != 0) * -0x14 + 0x14);
                do {
                  uVar12 = uVar12 ^ *puVar5;
                  memcpy(local_410,&DAT_1015e284,0x400);
                  uVar11 = local_410[uVar12 & 0xff];
                  memcpy(local_410,&DAT_1015e684,0x400);
                  uVar10 = local_410[uVar12 >> 8 & 0xff];
                  memcpy(local_410,&DAT_1015ea84,0x400);
                  uVar6 = *(uint *)((int)local_410 + (uVar12 >> 0xe & 0x3fc));
                  memcpy(local_410,&DAT_1015ee84,0x400);
                  puVar5 = puVar5 + 1;
                  uVar12 = uVar11 ^ uVar10 ^ uVar6 ^ local_410[uVar12 >> 0x18];
                  iVar14 = iVar14 + -1;
                } while (iVar14 != 0);
              }
            }
          }
        }
      }
    }
    for (; local_41c != 0; local_41c = local_41c - 1) {
      bVar1 = *pbVar13;
      pbVar13 = pbVar13 + 1;
      uVar12 = uVar12 >> 8 ^ *(uint *)(&DAT_1015de84 + (uint)(byte)(bVar1 ^ (byte)uVar12) * 4);
    }
    return ~uVar12;
  }
  FUN_10136a50(uVar6 * 5,uVar10,uVar10,&PTR_s_C__Users_runneradmin__cargo_regi_1015b5d8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}
