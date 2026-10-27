// rea decompile_all
// name: FUN_10123260
// address: 0x10123260
// body: available
// range: 0x10123260-0x101234bc inclusive
// range: 0x101234c0-0x10123505 inclusive
// range: 0x10123510-0x101236c8 inclusive
// range: 0x101236d0-0x10123b00 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10123260(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  sbyte sVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint local_74;
  uint local_70;
  char *local_6c;
  uint *local_68;
  uint local_60;
  uint local_54;
  undefined *local_50;
  uint local_4c;
  int local_44;
  uint uStack_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int *local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined8 *local_18;
  undefined4 local_14;

  local_24 = *(int *)(param_1 + 0x3c);
  local_68 = *(uint **)(param_1 + 0x38);
  uVar12 = *(uint *)(param_1 + 0x30);
  uVar13 = *(uint *)(param_1 + 0x34);
  local_6c = "";
  uVar10 = 0x200;
  *(char (*) [4])(param_1 + 0x30) = (char  [4])0x0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  local_38 = *(uint *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0;
  local_44 = *(int *)(param_1 + 0x48);
  uStack_40 = *(uint *)(param_1 + 0x4c);
  local_14 = *(undefined4 *)(param_1 + 0x44);
  local_4c = *(uint *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  local_3c = *(uint *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x50) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1[0x98]) {
  case 0:
    goto switchD_101232f4_caseD_0;
  case 1:
    local_6c = param_1 + 0xa4;
    local_70 = 0x534;
    local_50 = &DAT_1015a378;
    local_60 = 0x20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_1[0xa0]) {
    case 0:
      goto switchD_101232f4_caseD_4;
    case 2:
      goto switchD_101232f4_caseD_6;
    case 3:
      goto switchD_101232f4_caseD_7;
    }
    break;
  case 2:
    local_6c = param_1 + 0x1574;
    local_70 = 0x534;
    local_50 = &DAT_1015a378;
    local_60 = 0x20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_1[0xa0]) {
    case 0:
      goto switchD_101232f4_caseD_4;
    case 2:
      goto switchD_101232f4_caseD_6;
    case 3:
      goto switchD_101232f4_caseD_7;
    }
    break;
  case 3:
    local_6c = param_1 + 0x2a44;
    uVar10 = 0x250;
switchD_101232f4_caseD_0:
    local_50 = &DAT_1015a378;
    local_60 = 0x20;
    local_70 = uVar10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_1[0xa0]) {
    case 1:
      goto switchD_101232f4_caseD_5;
    case 2:
switchD_101232f4_caseD_6:
      local_50 = param_1 + 0x1574;
      goto LAB_1012339b;
    case 3:
switchD_101232f4_caseD_7:
      local_50 = param_1 + 0x2a44;
      local_60 = 0x250;
    }
  case 4:
    goto switchD_101232f4_caseD_4;
  case 6:
    goto switchD_101232f4_caseD_6;
  case 7:
    goto switchD_101232f4_caseD_7;
  }
switchD_101232f4_caseD_5:
  local_50 = param_1 + 0xa4;
LAB_1012339b:
  local_60 = 0x534;
switchD_101232f4_caseD_4:
  uVar10 = -1 << ((byte)param_1[0x94] & 0x1f);
  if ((param_1[0x94] & 0x20) != 0) {
    uVar10 = 0;
  }
  local_28 = -1 << ((byte)param_1[0x9c] & 0x1f);
  if ((param_1[0x9c] & 0x20) != 0) {
    local_28 = 0;
  }
  uVar14 = *(uint *)(param_1 + 0xc);
  if (0xffffffc0 < uVar14 - 0x40) {
    FUN_10136b40(&DAT_1015ba18);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_30 = uVar14 - 0x40;
  if (uVar14 < 0x40) {
    local_30 = 0;
  }
  local_74 = local_38;
  if ((byte)local_38 < 10) {
    bVar8 = (byte)local_38 & 0xf;
    uVar12 = uVar12 | *local_68 << bVar8;
    uVar13 = uVar13 | local_68[1] << bVar8 | *local_68 >> 0x20 - bVar8;
    local_68 = (uint *)((int)local_68 + (local_38 >> 3 & 1 ^ 7));
    local_74 = local_38 | 0x38;
  }
  uVar10 = ~uVar10;
  local_28 = ~local_28;
  local_18 = (undefined8 *)(param_1 + 0x48);
  local_38 = local_38 & 0xffffff00;
  local_2c = (int *)(param_1 + 8);
LAB_10123477:
  bVar8 = (byte)local_74;
  uVar16 = *local_68 << (local_74 & 0x1f);
  uVar17 = uVar16;
  uVar14 = local_68[1] << (bVar8 & 0x1f) | *local_68 >> 0x20 - (bVar8 & 0x1f);
  if ((local_74 & 0x20) != 0) {
    uVar17 = 0;
    uVar14 = uVar16;
  }
  uVar17 = uVar17 | uVar12;
  if ((local_74 & 0xff) < *(uint *)(param_1 + 0x94)) {
    uVar12 = uVar17 & uVar10;
    if (local_70 <= uVar12) {
      FUN_10136b52(uVar12,local_70,&PTR_s_C__Users_runneradmin__cargo_regi_1015a460);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  else {
    uVar12 = uVar12 & uVar10;
    if (local_70 <= uVar12) {
      FUN_10136b52(uVar12,local_70,&PTR_s_C__Users_runneradmin__cargo_regi_1015a470);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  uVar14 = uVar13 | uVar14;
  local_54._0_1_ = bVar8 | 0x38;
  uVar2 = *(ushort *)(local_6c + uVar12 * 4);
  bVar9 = local_6c[uVar12 * 4 + 3];
  uVar16 = (uint)bVar9;
  bVar6 = local_6c[uVar12 * 4 + 2];
  if (bVar6 == 0) {
    if (local_4c <= local_3c) {
      FUN_10136b52(local_3c,local_4c,&DAT_1015a480);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar12 = uVar14 << 0x20 - (bVar9 & 0x1f);
    uVar14 = uVar14 >> (uVar16 & 0x1f);
    bVar18 = (bVar9 & 0x20) != 0;
    local_34 = local_3c + 1;
    uVar17 = uVar17 >> (bVar9 & 0x1f) | uVar12;
    if (bVar18) {
      uVar17 = uVar14;
    }
    *(char *)(local_44 + local_3c) = (char)uVar2;
    if (bVar18) {
      uVar14 = 0;
    }
    uVar12 = uVar17 & uVar10;
    if (local_70 <= uVar12) {
      local_3c = local_34;
      FUN_10136b52(uVar12,local_70,&PTR_s_C__Users_runneradmin__cargo_regi_1015a490);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    local_54._0_1_ = (byte)local_54 - bVar9;
    bVar6 = local_6c[uVar12 * 4 + 2];
    bVar9 = local_6c[uVar12 * 4 + 3];
    uVar16 = (uint)bVar9;
    uVar2 = *(ushort *)(local_6c + uVar12 * 4);
    if (bVar6 == 0) {
      uVar12 = local_3c + 1;
      if (local_4c <= uVar12) {
        local_3c = local_34;
        FUN_10136b52(uVar12,local_4c,&DAT_1015a480);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar12 = uVar14 << 0x20 - (bVar9 & 0x1f);
      uVar13 = uVar14 >> (uVar16 & 0x1f);
      *(char *)(local_44 + 1 + local_3c) = (char)uVar2;
      local_3c = local_3c + 2;
      uVar14 = uVar13;
      uVar17 = uVar17 >> (bVar9 & 0x1f) | uVar12;
      if ((bVar9 & 0x20) != 0) {
        uVar14 = 0;
        uVar17 = uVar13;
      }
      uVar12 = uVar17 & uVar10;
      if (local_70 <= uVar12) {
        FUN_10136b52(uVar12,local_70,&PTR_s_C__Users_runneradmin__cargo_regi_1015a4a0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      local_54._0_1_ = (byte)local_54 - bVar9;
      uVar2 = *(ushort *)(local_6c + uVar12 * 4);
      bVar6 = local_6c[uVar12 * 4 + 2];
      uVar16 = (uint)(byte)local_6c[uVar12 * 4 + 3];
      local_34 = local_3c;
    }
  }
  else {
    local_34 = local_3c;
  }
  bVar9 = (byte)uVar16 & 0x1f;
  uVar15 = uVar14 >> (uVar16 & 0x1f);
  local_68 = (uint *)((int)local_68 + (uint)(byte)(bVar8 >> 3 ^ 7));
  uVar13 = uVar15;
  uVar12 = uVar17 >> bVar9 | uVar14 << 0x20 - bVar9;
  if ((uVar16 & 0x20) != 0) {
    uVar13 = 0;
    uVar12 = uVar15;
  }
  bVar8 = (byte)local_54 - (byte)uVar16;
  while( true ) {
    local_74 = (uint)bVar8;
    local_3c = local_34;
    if (bVar6 == 0) break;
    if ((bVar6 & 0x10) != 0) {
      bVar6 = bVar6 & 0xf;
      uVar14 = uVar12 >> bVar6 | uVar13 << 0x20 - bVar6;
      uVar17 = uVar14 & local_28;
      if (local_60 <= uVar17) {
        FUN_10136b52(uVar17,local_60,&PTR_s_C__Users_runneradmin__cargo_regi_1015a4dc);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      local_54 = uVar13 >> bVar6;
      bVar8 = bVar8 - bVar6;
      bVar9 = local_50[uVar17 * 4 + 2];
      bVar1 = local_50[uVar17 * 4 + 3];
      bVar11 = bVar8;
      if (bVar8 < 0x1c) {
        local_20 = *local_68 << (bVar8 & 0x1f);
        uVar16 = local_20;
        uVar13 = local_68[1] << (bVar8 & 0x1f) | *local_68 >> 0x20 - (bVar8 & 0x1f);
        if ((bVar8 & 0x20) != 0) {
          uVar16 = 0;
          uVar13 = local_20;
        }
        local_54 = local_54 | uVar13;
        uVar14 = uVar14 | uVar16;
        bVar11 = bVar8 | 0x38;
        local_68 = (uint *)((int)local_68 + (uint)(byte)(bVar8 >> 3 ^ 7));
      }
      uVar16 = local_54 >> (bVar1 & 0x1f);
      uVar13 = uVar16;
      uVar14 = uVar14 >> (bVar1 & 0x1f) | local_54 << 0x20 - (bVar1 & 0x1f);
      if ((bVar1 & 0x20) != 0) {
        uVar13 = 0;
        uVar14 = uVar16;
      }
      bVar11 = bVar11 - bVar1;
      uVar3 = *(ushort *)(local_50 + uVar17 * 4);
      goto joined_r0x10123797;
    }
    if ((bVar6 & 0x40) != 0) {
      if ((bVar6 & 0x20) == 0) {
        local_6c = "invalid literal/length code";
        local_70 = 0x1c;
        uVar14 = uVar12;
        goto LAB_10123977;
      }
      bVar18 = false;
      local_6c = (char *)0x0;
      *param_1 = 0xc;
      goto LAB_1012397a;
    }
    uVar14 = -1 << (bVar6 & 0xf);
    if ((bVar6 & 0x20) != 0) {
      uVar14 = 0;
    }
    uVar14 = (uint)uVar2 + (~uVar14 & uVar12) & 0xffff;
    if (local_70 <= uVar14) {
      FUN_10136b52(uVar14,local_70,&PTR_s_C__Users_runneradmin__cargo_regi_1015a4b0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    bVar9 = local_6c[uVar14 * 4 + 3];
    uVar17 = uVar13 << 0x20 - (bVar9 & 0x1f);
    uVar16 = uVar13 >> (bVar9 & 0x1f);
    uVar13 = uVar16;
    uVar12 = uVar12 >> (bVar9 & 0x1f) | uVar17;
    if ((bVar9 & 0x20) != 0) {
      uVar13 = 0;
      uVar12 = uVar16;
    }
    bVar8 = bVar8 - bVar9;
    bVar6 = local_6c[uVar14 * 4 + 2];
    uVar2 = *(ushort *)(local_6c + uVar14 * 4);
  }
  if (local_4c <= local_34) {
    FUN_10136b52(local_34,local_4c,&DAT_1015a480);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(char *)(local_44 + local_34) = (char)uVar2;
  local_3c = local_34 + 1;
  goto LAB_101238eb;
joined_r0x10123797:
  local_1c = uVar12;
  if ((bVar9 & 0x10) != 0) goto LAB_10123811;
  local_74 = (uint)bVar11;
  if ((bVar9 & 0x40) != 0) {
    local_6c = "invalid distance code";
    local_70 = 0x16;
LAB_10123977:
    bVar18 = true;
    *param_1 = 0x1e;
    uVar12 = uVar14;
    goto LAB_1012397a;
  }
  uVar17 = -1 << (bVar9 & 0xf);
  if ((bVar9 & 0x20) != 0) {
    uVar17 = 0;
  }
  uVar17 = (uint)uVar3 + (~uVar17 & uVar14) & 0xffff;
  if (local_60 <= uVar17) {
    FUN_10136b52(uVar17,local_60,&PTR_s_C__Users_runneradmin__cargo_regi_1015a4ec);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  bVar8 = local_50[uVar17 * 4 + 3];
  uVar16 = uVar13 << 0x20 - (bVar8 & 0x1f);
  uVar15 = uVar13 >> (bVar8 & 0x1f);
  uVar13 = uVar15;
  uVar14 = uVar14 >> (bVar8 & 0x1f) | uVar16;
  if ((bVar8 & 0x20) != 0) {
    uVar13 = 0;
    uVar14 = uVar15;
  }
  bVar11 = bVar11 - bVar8;
  bVar9 = local_50[uVar17 * 4 + 2];
  uVar3 = *(ushort *)(local_50 + uVar17 * 4);
  goto joined_r0x10123797;
LAB_10123811:
  sVar5 = (bVar6 < 0x21) * (' ' - bVar6);
  bVar9 = bVar9 & 0xf;
  uVar17 = (uint)uVar2 + ((uVar12 << sVar5) >> sVar5);
  sVar5 = (bVar9 < 0x21) * (' ' - bVar9);
  uVar12 = uVar14 >> bVar9 | uVar13 << 0x20 - bVar9;
  uVar13 = uVar13 >> bVar9;
  local_74 = (uint)(byte)(bVar11 - bVar9);
  uVar16 = (uint)uVar3 + ((uVar14 << sVar5) >> sVar5) & 0xffff;
  uVar14 = uVar16 - local_34;
  if (uVar16 < local_34 || uVar14 == 0) {
    uVar15 = uVar17 & 0xffff;
  }
  else {
    if (*(uint *)(param_1 + 0x10) < uVar14) {
      if ((param_1[1] & 4) == 0) {
        FUN_101369c0(&DAT_1015a512,0x55,&PTR_s_C__Users_runneradmin__cargo_regi_1015a53c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      *param_1 = 0x1e;
      bVar18 = true;
      local_6c = "invalid distance too far back";
      local_70 = 0x1e;
      goto LAB_1012397a;
    }
    uVar15 = *(uint *)(param_1 + 0x14);
    if (uVar15 == 0) {
      uVar7 = local_30 - uVar14;
    }
    else {
      uVar7 = uVar15 - uVar14;
      if (uVar15 < uVar14) {
        uVar14 = uVar14 - uVar15;
        uVar7 = local_30 - uVar14;
        if (uVar14 < (uVar17 & 0xffff)) {
          uVar17 = uVar17 - uVar14;
          FUN_10121ec0(&local_44,local_2c,uVar7,local_30);
          uVar7 = 0;
          uVar14 = uVar15;
        }
      }
    }
    uVar17 = uVar17 & 0xffff;
    uVar15 = uVar17;
    if (uVar14 < uVar17) {
      uVar15 = uVar14;
    }
    FUN_10121ec0(&local_44,local_2c,uVar7,uVar15 + uVar7);
    uVar15 = uVar17 - uVar14;
    if (uVar17 < uVar14 || uVar15 == 0) goto LAB_101238eb;
  }
  FUN_10121bb0(&local_44,uVar16,uVar15);
LAB_101238eb:
  if (((local_74 >> 3) + (local_24 - (int)local_68) < 0xf) ||
     (local_4c = uStack_40, uStack_40 - local_3c < 0x104)) {
    bVar18 = false;
    local_6c = (char *)0x0;
LAB_1012397a:
    *(undefined4 *)(param_1 + 0x34) = 0;
    bVar8 = (byte)local_74 & 7;
    sVar5 = (bVar8 < 0x21) * (' ' - bVar8);
    *(uint *)(param_1 + 0x30) = (uVar12 << sVar5) >> sVar5;
    *(uint *)(param_1 + 0x38) = (int)local_68 - (local_74 >> 3);
    *(int *)(param_1 + 0x3c) = local_24;
    *(uint *)(param_1 + 0x40) = local_38 | bVar8;
    *(undefined4 *)(param_1 + 0x44) = local_14;
    *(uint *)(local_18 + 1) = local_3c;
    *local_18 = CONCAT44(uStack_40,local_44);
    if (bVar18) {
      *(char **)(param_1 + 0x84) = local_6c;
      *(uint *)(param_1 + 0x88) = local_70;
    }
    return;
  }
  goto LAB_10123477;
}
