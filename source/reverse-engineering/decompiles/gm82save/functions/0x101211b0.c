// rea decompile_all
// name: FUN_101211b0
// address: 0x101211b0
// body: available
// range: 0x101211b0-0x101214c9 inclusive
// range: 0x101214d0-0x10121513 inclusive
// range: 0x10121520-0x101216c2 inclusive
// range: 0x101216d0-0x10121b8c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_101211b0(undefined1 *param_1)

{
  char cVar1;
  ushort uVar2;
  code *pcVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  char cVar12;
  uint uVar11;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  sbyte sVar18;
  uint uVar17;
  uint uVar19;
  bool bVar20;
  byte local_85;
  char *local_84;
  uint local_80;
  uint local_7c;
  uint local_70;
  uint local_6c;
  undefined *local_64;
  uint *local_60;
  undefined *local_5c;
  undefined8 local_50;
  uint local_48;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  undefined8 *local_1c;
  undefined4 local_18;

  if (DAT_101631d8 != 0) {
    if (DAT_101631d8 == 1) {
LAB_101211db:
      FUN_10123260(param_1);
      return;
    }
    if (DAT_101633c0 == 0) {
      FUN_1013c860((uint *)&local_50);
      sVar4 = (short)local_50;
    }
    else {
      sVar4 = (short)DAT_101633c0;
    }
    if (sVar4 < 0) {
      bVar20 = DAT_101633c4 == 0;
      if (bVar20) {
        FUN_1013c860((uint *)&local_50);
        bVar9 = 0x39;
        uVar5 = (uint)local_50;
        uVar15 = local_50._4_4_;
      }
      else {
        bVar9 = 0x1a;
        uVar5 = DAT_101633c4;
        uVar15 = 0;
      }
      uVar17 = uVar15 >> (bVar9 & 0x1f);
      if (!bVar20) {
        uVar17 = uVar5 >> (bVar9 & 0x1f) | uVar15 << 0x20 - (bVar9 & 0x1f);
      }
      if ((uVar17 & 1) != 0) {
        bVar20 = DAT_101633c4 == 0;
        if (bVar20) {
          FUN_1013c860((uint *)&local_50);
          bVar9 = 0x3a;
        }
        else {
          local_50._4_4_ = 0;
          bVar9 = 0x1b;
          local_50._0_4_ = DAT_101633c4;
        }
        uVar5 = local_50._4_4_ >> (bVar9 & 0x1f);
        if (!bVar20) {
          uVar5 = (uint)local_50 >> (bVar9 & 0x1f) | local_50._4_4_ << 0x20 - (bVar9 & 0x1f);
        }
        DAT_101631d8 = uVar5 & 1;
        if ((uVar5 & 1) != 0) goto LAB_101211db;
        goto LAB_1012126f;
      }
    }
    DAT_101631d8 = 0;
  }
LAB_1012126f:
  local_80 = *(uint *)(param_1 + 0x30);
  puVar13 = &DAT_10159b78;
  uVar17 = 0x200;
  local_84 = *(char **)(param_1 + 0x34);
  local_60 = *(uint **)(param_1 + 0x38);
  local_24 = *(int *)(param_1 + 0x3c);
  *(char (*) [4])(param_1 + 0x30) = (char  [4])0x0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  uVar5 = *(uint *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x40) = 0;
  local_50 = *(undefined8 *)(param_1 + 0x48);
  uVar15 = *(uint *)(param_1 + 0x4c);
  local_18 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  local_48 = *(uint *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x50) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1[0x98]) {
  case 0:
    goto switchD_101212f3_caseD_0;
  case 1:
    local_5c = param_1 + 0xa4;
    local_70 = 0x534;
    local_64 = &DAT_1015a378;
    local_6c = 0x20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_1[0xa0]) {
    case 0:
      goto switchD_101212f3_caseD_4;
    case 2:
      goto switchD_101212f3_caseD_6;
    case 3:
      goto switchD_101212f3_caseD_7;
    }
    break;
  case 2:
    local_5c = param_1 + 0x1574;
    local_70 = 0x534;
    local_64 = &DAT_1015a378;
    local_6c = 0x20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_1[0xa0]) {
    case 0:
      goto switchD_101212f3_caseD_4;
    case 2:
      goto switchD_101212f3_caseD_6;
    case 3:
      goto switchD_101212f3_caseD_7;
    }
    break;
  case 3:
    puVar13 = param_1 + 0x2a44;
    uVar17 = 0x250;
switchD_101212f3_caseD_0:
    local_64 = &DAT_1015a378;
    local_6c = 0x20;
    local_70 = uVar17;
    local_5c = puVar13;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_1[0xa0]) {
    case 1:
      goto switchD_101212f3_caseD_5;
    case 2:
switchD_101212f3_caseD_6:
      local_64 = param_1 + 0x1574;
      goto LAB_1012139a;
    case 3:
switchD_101212f3_caseD_7:
      local_64 = param_1 + 0x2a44;
      local_6c = 0x250;
    }
  case 4:
    goto switchD_101212f3_caseD_4;
  case 6:
    goto switchD_101212f3_caseD_6;
  case 7:
    goto switchD_101212f3_caseD_7;
  }
switchD_101212f3_caseD_5:
  local_64 = param_1 + 0xa4;
LAB_1012139a:
  local_6c = 0x534;
switchD_101212f3_caseD_4:
  uVar17 = -1 << (param_1[0x94] & 0x1f);
  if ((param_1[0x94] & 0x20) != 0) {
    uVar17 = 0;
  }
  uVar14 = *(uint *)(param_1 + 0xc);
  local_30 = -1 << (param_1[0x9c] & 0x1f);
  if ((param_1[0x9c] & 0x20) != 0) {
    local_30 = 0;
  }
  if (0xffffffc0 < uVar14 - 0x40) {
    FUN_10136b40(&DAT_1015ba18);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_34 = uVar14 - 0x40;
  if (uVar14 < 0x40) {
    local_34 = 0;
  }
  bVar9 = (byte)uVar5;
  uVar14 = uVar5;
  if (bVar9 < 10) {
    bVar8 = bVar9 & 0xf;
    local_84 = (char *)((uint)local_84 | local_60[1] << bVar8 | *local_60 >> 0x20 - bVar8);
    local_80 = local_80 | *local_60 << bVar8;
    uVar14 = (uint)(bVar9 | 0x38);
    local_60 = (uint *)((int)local_60 + (uVar5 >> 3 & 1 ^ 7));
  }
  uVar17 = ~uVar17;
  local_30 = ~local_30;
  local_85 = (byte)uVar14;
  local_1c = (undefined8 *)(param_1 + 0x48);
  local_28 = (int *)(param_1 + 8);
LAB_10121480:
  uVar6 = *local_60 << (local_85 & 0x1f);
  uVar7 = uVar6;
  uVar14 = local_60[1] << (local_85 & 0x1f) | *local_60 >> 0x20 - (local_85 & 0x1f);
  if ((local_85 & 0x20) != 0) {
    uVar7 = 0;
    uVar14 = uVar6;
  }
  uVar7 = uVar7 | local_80;
  if ((uint)local_85 < *(uint *)(param_1 + 0x94)) {
    local_80 = uVar7 & uVar17;
    if (local_70 <= local_80) {
      FUN_10136b52(local_80,local_70,&PTR_s_C__Users_runneradmin__cargo_regi_1015a460);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  else {
    local_80 = local_80 & uVar17;
    if (local_70 <= local_80) {
      FUN_10136b52(local_80,local_70,&PTR_s_C__Users_runneradmin__cargo_regi_1015a470);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  local_84 = (char *)((uint)local_84 | uVar14);
  cVar1 = local_5c[local_80 * 4 + 2];
  bVar9 = local_5c[local_80 * 4 + 3];
  uVar2 = *(ushort *)(local_5c + local_80 * 4);
  uVar10 = CONCAT11(local_85,bVar9) | 0x3800;
  if (cVar1 == '\0') {
    if (uVar15 <= local_48) {
      FUN_10136b52(local_48,uVar15,&DAT_1015a480);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(char *)((uint)local_50 + local_48) = (char)uVar2;
    local_38 = local_48 + 1;
    uVar14 = (int)local_84 << 0x20 - (bVar9 & 0x1f);
    uVar6 = (uint)local_84 >> (bVar9 & 0x1f);
    local_84 = (char *)uVar6;
    uVar7 = uVar7 >> (bVar9 & 0x1f) | uVar14;
    if ((bVar9 & 0x20) != 0) {
      local_84 = (char *)0x0;
      uVar7 = uVar6;
    }
    uVar14 = uVar7 & uVar17;
    if (local_70 <= uVar14) {
      local_48 = local_38;
      FUN_10136b52(uVar14,local_70,&PTR_s_C__Users_runneradmin__cargo_regi_1015a490);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    cVar12 = (char)(uVar10 >> 8) - bVar9;
    cVar1 = local_5c[uVar14 * 4 + 2];
    bVar9 = local_5c[uVar14 * 4 + 3];
    uVar10 = CONCAT11(cVar12,bVar9);
    uVar2 = *(ushort *)(local_5c + uVar14 * 4);
    if (cVar1 == '\0') {
      if (uVar15 <= local_48 + 1) goto LAB_10121b67;
      *(char *)((uint)local_50 + 1 + local_48) = (char)uVar2;
      local_48 = local_48 + 2;
      uVar14 = (int)local_84 << 0x20 - (bVar9 & 0x1f);
      uVar6 = (uint)local_84 >> (bVar9 & 0x1f);
      local_84 = (char *)uVar6;
      uVar7 = uVar7 >> (bVar9 & 0x1f) | uVar14;
      if ((bVar9 & 0x20) != 0) {
        local_84 = (char *)0x0;
        uVar7 = uVar6;
      }
      uVar14 = uVar7 & uVar17;
      if (local_70 <= uVar14) {
        FUN_10136b52(uVar14,local_70,&PTR_s_C__Users_runneradmin__cargo_regi_1015a4a0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      cVar1 = local_5c[uVar14 * 4 + 2];
      uVar10 = CONCAT11(cVar12 - bVar9,local_5c[uVar14 * 4 + 3]);
      uVar2 = *(ushort *)(local_5c + uVar14 * 4);
      local_38 = local_48;
    }
  }
  else {
    local_38 = local_48;
  }
  local_60 = (uint *)((int)local_60 + ((CONCAT11(cVar1,local_85 >> 3) ^ 7) & 0xff));
  bVar9 = (byte)uVar10;
  uVar14 = (int)local_84 << 0x20 - (bVar9 & 0x1f);
  uVar6 = (uint)local_84 >> (bVar9 & 0x1f);
  local_84 = (char *)uVar6;
  local_80 = uVar7 >> (bVar9 & 0x1f) | uVar14;
  if ((uVar10 & 0x20) != 0) {
    local_84 = (char *)0x0;
    local_80 = uVar6;
  }
  uVar10 = CONCAT11(cVar1,(char)(uVar10 >> 8) - bVar9);
  while( true ) {
    uVar7 = (uint)uVar2;
    uVar14 = (uint)uVar10;
    local_7c = uVar7;
    if (cVar1 == '\0') break;
    local_85 = (byte)uVar10;
    local_48 = local_38;
    if ((uVar10 & 0x1000) != 0) {
      sVar18 = (sbyte)((uVar10 & 0xfff) >> 8);
      uVar15 = local_80 >> sVar18 | (int)local_84 << 0x20 - sVar18;
      uVar14 = (uint)local_84 >> sVar18;
      uVar6 = uVar15 & local_30;
      if (local_6c <= uVar6) {
        FUN_10136b52(uVar6,local_6c,&PTR_s_C__Users_runneradmin__cargo_regi_1015a4dc);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar16 = (char)(uVar10 & 0xfff) - sVar18;
      bVar9 = local_64[uVar6 * 4 + 2];
      bVar8 = local_64[uVar6 * 4 + 3];
      local_85 = bVar16;
      if (bVar16 < 0x1c) {
        local_2c = *local_60;
        local_20 = local_2c << (bVar16 & 0x1f);
        uVar11 = local_20;
        uVar19 = local_60[1] << (bVar16 & 0x1f) | local_2c >> 0x20 - (bVar16 & 0x1f);
        if ((bVar16 & 0x20) != 0) {
          uVar11 = 0;
          uVar19 = local_20;
        }
        uVar14 = uVar14 | uVar19;
        uVar15 = uVar15 | uVar11;
        local_85 = bVar16 | 0x38;
        local_60 = (uint *)((int)local_60 + (uint)(byte)(bVar16 >> 3 ^ 7));
      }
      uVar11 = uVar14 >> (bVar8 & 0x1f);
      uVar19 = uVar11;
      uVar15 = uVar15 >> (bVar8 & 0x1f) | uVar14 << 0x20 - (bVar8 & 0x1f);
      if ((bVar8 & 0x20) != 0) {
        uVar19 = 0;
        uVar15 = uVar11;
      }
      local_85 = local_85 - bVar8;
      uVar2 = *(ushort *)(local_64 + uVar6 * 4);
      goto joined_r0x101217b7;
    }
    if ((uVar10 & 0x4000) != 0) {
      if ((uVar10 & 0x2000) != 0) {
        bVar20 = false;
        local_84 = (char *)0x0;
        *param_1 = 0xc;
        goto LAB_101219d2;
      }
      local_84 = "invalid literal/length code";
      local_7c = 0x1c;
      uVar15 = local_80;
      goto LAB_101219cf;
    }
    uVar14 = -1 << ((byte)(uVar10 >> 8) & 0xf);
    if ((uVar10 & 0x2000) != 0) {
      uVar14 = 0;
    }
    uVar14 = uVar7 + (local_80 & ~uVar14) & 0xffff;
    if (local_70 <= uVar14) {
      FUN_10136b52(uVar14,local_70,&PTR_s_C__Users_runneradmin__cargo_regi_1015a4b0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    cVar1 = local_5c[uVar14 * 4 + 2];
    bVar9 = local_5c[uVar14 * 4 + 3];
    uVar2 = *(ushort *)(local_5c + uVar14 * 4);
    uVar14 = (int)local_84 << 0x20 - (bVar9 & 0x1f);
    uVar7 = (uint)local_84 >> (bVar9 & 0x1f);
    local_84 = (char *)uVar7;
    local_80 = local_80 >> (bVar9 & 0x1f) | uVar14;
    if ((bVar9 & 0x20) != 0) {
      local_84 = (char *)0x0;
      local_80 = uVar7;
    }
    uVar10 = CONCAT11(cVar1,local_85 - bVar9);
  }
  if (uVar15 <= local_38) {
LAB_10121b67:
    local_48 = local_38;
    FUN_10136b52(local_38,uVar15,&DAT_1015a480);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(char *)((uint)local_50 + local_38) = (char)uVar2;
  local_48 = local_38 + 1;
  goto LAB_10121937;
joined_r0x101217b7:
  if ((bVar9 & 0x10) != 0) goto LAB_1012183b;
  if ((bVar9 & 0x40) != 0) {
    local_84 = "invalid distance code";
    local_7c = 0x16;
LAB_101219cf:
    bVar20 = true;
    *param_1 = 0x1e;
    local_80 = uVar15;
    goto LAB_101219d2;
  }
  uVar14 = -1 << (bVar9 & 0xf);
  if ((bVar9 & 0x20) != 0) {
    uVar14 = 0;
  }
  uVar14 = (uint)uVar2 + (uVar15 & ~uVar14) & 0xffff;
  if (local_6c <= uVar14) {
    FUN_10136b52(uVar14,local_6c,&PTR_s_C__Users_runneradmin__cargo_regi_1015a4ec);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  bVar9 = local_64[uVar14 * 4 + 2];
  bVar8 = local_64[uVar14 * 4 + 3];
  uVar2 = *(ushort *)(local_64 + uVar14 * 4);
  uVar14 = uVar19 << 0x20 - (bVar8 & 0x1f);
  uVar6 = uVar19 >> (bVar8 & 0x1f);
  uVar19 = uVar6;
  uVar15 = uVar15 >> (bVar8 & 0x1f) | uVar14;
  if ((bVar8 & 0x20) != 0) {
    uVar19 = 0;
    uVar15 = uVar6;
  }
  local_85 = local_85 - bVar8;
  goto joined_r0x101217b7;
LAB_1012183b:
  bVar9 = bVar9 & 0xf;
  local_85 = local_85 - bVar9;
  local_7c = uVar7 + (local_80 & ~(-1 << sVar18));
  uVar14 = (uint)uVar2 + (~(-1 << bVar9) & uVar15) & 0xffff;
  local_80 = uVar15 >> bVar9 | uVar19 << 0x20 - bVar9;
  local_84 = (char *)(uVar19 >> bVar9);
  uVar15 = uVar14 - local_38;
  if (uVar14 < local_38 || uVar15 == 0) {
    FUN_10121bb0((int *)&local_50,uVar14,local_7c & 0xffff);
    local_7c = uVar7;
  }
  else {
    if (*(uint *)(param_1 + 0x10) < uVar15) {
      if ((param_1[1] & 4) == 0) {
        FUN_101369c0(&DAT_1015a512,0x55,&PTR_s_C__Users_runneradmin__cargo_regi_1015a53c);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      bVar20 = true;
      *param_1 = 0x1e;
      local_84 = "invalid distance too far back";
      local_7c = 0x1e;
      goto LAB_101219d2;
    }
    uVar7 = *(uint *)(param_1 + 0x14);
    uVar6 = local_7c;
    if (uVar7 == 0) {
      uVar19 = local_34 - uVar15;
    }
    else {
      uVar19 = uVar7 - uVar15;
      if (uVar7 < uVar15) {
        uVar15 = uVar15 - uVar7;
        uVar19 = local_34 - uVar15;
        if (uVar15 < (local_7c & 0xffff)) {
          FUN_10121ec0((int *)&local_50,local_28,uVar19,local_34);
          uVar19 = 0;
          uVar6 = local_7c - uVar15;
          uVar15 = uVar7;
        }
      }
    }
    uVar6 = uVar6 & 0xffff;
    uVar7 = uVar6;
    if (uVar15 < uVar6) {
      uVar7 = uVar15;
    }
    FUN_10121ec0((int *)&local_50,local_28,uVar19,uVar7 + uVar19);
    if (uVar15 <= uVar6 && uVar6 - uVar15 != 0) {
      FUN_10121bb0((int *)&local_50,uVar14,uVar6 - uVar15);
    }
  }
  uVar14 = (uint)local_85;
LAB_10121937:
  local_85 = (byte)uVar14;
  if (((uVar14 >> 3 & 0x1f) + (local_24 - (int)local_60) < 0xf) ||
     (uVar15 = local_50._4_4_, local_50._4_4_ - local_48 < 0x104)) {
    bVar20 = false;
    local_84 = (char *)0x0;
LAB_101219d2:
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(uint *)(param_1 + 0x30) = ~(-1 << (local_85 & 7)) & local_80;
    *(uint *)(param_1 + 0x38) = (int)local_60 - (uint)(local_85 >> 3);
    *(int *)(param_1 + 0x3c) = local_24;
    *(uint *)(param_1 + 0x40) = uVar5 & 0xffffff00 | CONCAT11(local_85 >> 3,local_85) & 7;
    *(undefined4 *)(param_1 + 0x44) = local_18;
    *(uint *)(local_1c + 1) = local_48;
    *local_1c = local_50;
    if (!bVar20) {
      return;
    }
    *(char **)(param_1 + 0x84) = local_84;
    *(uint *)(param_1 + 0x88) = local_7c;
    return;
  }
  goto LAB_10121480;
}
