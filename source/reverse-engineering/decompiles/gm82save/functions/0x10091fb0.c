// rea decompile_all
// name: FUN_10091fb0
// address: 0x10091fb0
// body: available
// range: 0x10091fb0-0x10092274 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10091fb0(undefined8 *param_1,int *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int extraout_ECX;
  int iVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  uint local_50;
  undefined1 local_4c;
  uint local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  undefined1 local_20;
  int local_1c;
  int local_18;

  uVar5 = param_2[3];
  uVar6 = param_2[1];
  puVar7 = (uint *)param_2[2];
  iVar19 = *param_2;
  if (uVar5 == 0) {
    uVar18 = 0;
    iVar13 = iVar19;
  }
  else {
    if (uVar5 < uVar6) {
      if (*(char *)(iVar19 + uVar5) < -0x40) {
LAB_10091fdb:
        FUN_10136b90(iVar19,uVar6,0,uVar5,&PTR_s_C__Users_runneradmin__cargo_regi_10143be4);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
    }
    else if (uVar5 != uVar6) goto LAB_10091fdb;
    iVar17 = 0;
    uVar18 = uVar5 >> 1;
    iVar13 = iVar19 + uVar18;
    do {
      if (-0x41 < *(char *)(iVar13 + iVar17)) {
        uVar18 = uVar18 + iVar17;
        goto LAB_1009203d;
      }
      iVar17 = iVar17 + 1;
    } while (uVar5 - uVar18 != iVar17);
  }
  do {
    if (iVar13 == iVar19) {
      local_38 = *puVar7;
      goto LAB_1009205b;
    }
    uVar18 = uVar18 - 1;
    pcVar1 = (char *)(iVar13 + -1);
    iVar13 = iVar13 + -1;
  } while (*pcVar1 < -0x40);
LAB_1009203d:
  if (uVar5 < uVar18) goto LAB_10092081;
  local_38 = *puVar7;
  if (uVar18 == 0) {
LAB_1009205b:
    local_50 = 0;
  }
  else if (uVar18 < uVar6) {
    local_50 = uVar18;
    if (*(char *)(iVar19 + uVar18) < -0x40) goto LAB_10092081;
  }
  else {
    local_50 = uVar6;
    if (uVar18 != uVar6) goto LAB_10092081;
  }
  uVar18 = local_50;
  if (uVar5 != 0) {
    if (uVar5 < uVar6) {
      if (*(char *)(iVar19 + uVar5) < -0x40) {
LAB_10092081:
        FUN_10136b90(iVar19,uVar6,uVar18,uVar5,&PTR_s_C__Users_runneradmin__cargo_regi_10143bc4);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
    }
    else if (uVar5 != uVar6) goto LAB_10092081;
  }
  uVar12 = 0;
  if (local_38 < 0x80) {
    local_4c = 1;
    uVar10 = 0;
    uVar15 = local_38;
    uVar16 = 0;
  }
  else {
    uVar9 = (uint)((byte)local_38 & 0x3f | 0x80);
    if (local_38 < 0x800) {
      uVar15 = local_38 >> 6 | 0xc0;
      local_4c = 2;
      uVar12 = 0;
      uVar10 = uVar9;
      uVar16 = 0;
    }
    else {
      uVar16 = (uint)((byte)(local_38 >> 6) & 0x3f | 0x80);
      if (local_38 < 0x10000) {
        uVar15 = local_38 >> 0xc | 0xe0;
        local_4c = 3;
        uVar10 = uVar16;
        uVar16 = uVar9;
      }
      else {
        local_4c = 4;
        uVar10 = local_38 >> 0xc & 0xffffff3f | 0x80;
        uVar12 = uVar9 << 0x18;
        uVar15 = local_38 >> 0x12 | 0xf0;
      }
    }
  }
  local_24 = uVar15 & 0xff | (uVar10 & 0xff) << 8 | uVar16 << 0x10 | uVar12;
  local_34 = iVar19 + uVar18;
  local_30 = uVar5 - uVar18;
  local_2c = 0;
  local_20 = local_4c;
  local_28 = local_30;
  FUN_10090ba0(&local_1c,(int)&local_38);
  if (local_1c == 1) {
    uVar12 = local_18 + uVar18;
  }
  else {
    uVar20 = FUN_100913c0(iVar19,uVar6,*puVar7,uVar18);
    uVar12 = (uint)(uVar20 >> 0x20);
    if ((uVar20 & 1) == 0) {
      param_2[3] = 0;
      uVar14 = 2;
      pbVar11 = (byte *)0x0;
      iVar13 = extraout_ECX;
      goto LAB_10092241;
    }
  }
  if (uVar12 != 0) {
    if (uVar12 < uVar6) {
      if (*(char *)(iVar19 + uVar12) < -0x40) {
LAB_100921c3:
        FUN_10136b90(iVar19,uVar6,0,uVar12,&PTR_s_C__Users_runneradmin__rustup_too_1013f7c0);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
    }
    else if (uVar12 != uVar6) goto LAB_100921c3;
  }
  pbVar11 = (byte *)(iVar19 + uVar12);
  if (uVar12 != uVar6) {
    bVar4 = *pbVar11;
    if ((char)bVar4 < '\0') {
      if (bVar4 < 0xe0) {
        pbVar11 = pbVar11 + 2;
      }
      else {
        pbVar11 = pbVar11 + (4 - (uint)(bVar4 < 0xf0));
      }
    }
    else {
      pbVar11 = pbVar11 + 1;
    }
  }
  param_2[1] = uVar12;
  iVar13 = 0;
  iVar19 = (iVar19 + uVar6) - (int)pbVar11;
  if (uVar18 <= uVar12) {
    iVar13 = (uVar5 - uVar6) + iVar19;
    uVar12 = uVar18;
  }
  param_2[3] = uVar12;
  uVar14 = (undefined1)param_2[4];
  *(undefined1 *)(param_2 + 4) = 0;
LAB_10092241:
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(int *)(param_1 + 2) = param_2[4];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  *(byte **)((int)param_1 + 0x14) = pbVar11;
  *(int *)(param_1 + 3) = iVar19;
  *(uint **)((int)param_1 + 0x1c) = puVar7;
  *(int *)(param_1 + 4) = iVar13;
  *(undefined1 *)((int)param_1 + 0x24) = uVar14;
  return;
}
