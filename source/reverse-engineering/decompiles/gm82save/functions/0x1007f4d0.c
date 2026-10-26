// rea decompile_all
// name: FUN_1007f4d0
// address: 0x1007f4d0
// body: available
// range: 0x1007f4d0-0x1008005c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_1007f4d0(byte *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  byte *unaff_ESI;
  uint uVar9;
  byte *pbVar10;
  byte **unaff_EDI;
  byte **ppbVar11;
  bool bVar12;
  ushort *puVar13;
  byte **local_70;
  byte *pbStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined8 local_50;
  undefined8 local_40;
  undefined4 *local_38;
  undefined2 local_34;
  undefined1 local_32;
  byte *local_30;
  byte *local_2c [7];

  pbVar3 = (byte *)((&switchD_1007f4f1::switchdataD_10080060)[*param_1] + 0x1007f4e4);
  puVar6 = param_2;
  pbVar10 = unaff_ESI;
  ppbVar11 = unaff_EDI;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_50 = CONCAT44(local_50._4_4_,param_1 + 4);
    local_70 = (byte **)&local_50;
    pbStack_6c = &LAB_10082880;
    puVar13 = (ushort *)&DAT_10143248;
    break;
  case 1:
    unaff_EDI = *(byte ***)(param_1 + 0x10);
    unaff_ESI = *(byte **)(param_1 + 0x14);
    local_30 = param_1 + 4;
    FUN_1010a5e0((undefined1 *)&local_70,(byte *)unaff_EDI,(uint)unaff_ESI);
    uVar7 = (uint)local_70 & 0xff;
    pbVar3 = &DAT_00000006;
    param_1 = (byte *)local_68;
    puVar6 = (undefined4 *)local_60;
    pbStack_6c = unaff_ESI;
    pbVar10 = unaff_ESI;
    local_70 = unaff_EDI;
    ppbVar11 = unaff_EDI;
    switch(uVar7) {
    case 0:
    case 3:
      goto switchD_1007f4f1_caseD_2c;
    case 1:
      goto switchD_1007f4f1_caseD_2d;
    case 2:
      goto switchD_1007f4f1_caseD_2e;
    case 4:
      goto switchD_1007f4f1_caseD_30;
    case 5:
      goto switchD_1007f4f1_caseD_31;
    }
    goto switchD_1007f791_default;
  case 2:
    unaff_EDI = *(byte ***)(param_1 + 0x10);
    unaff_ESI = *(byte **)(param_1 + 0x14);
    local_30 = param_1 + 4;
    FUN_1010a5e0((undefined1 *)&local_70,(byte *)unaff_EDI,(uint)unaff_ESI);
    uVar7 = (uint)local_70 & 0xff;
    pbVar3 = &DAT_00000006;
    param_1 = (byte *)local_68;
    puVar6 = (undefined4 *)local_60;
    pbStack_6c = unaff_ESI;
    pbVar10 = unaff_ESI;
    local_70 = unaff_EDI;
    ppbVar11 = unaff_EDI;
    switch(uVar7) {
    case 0:
    case 3:
      goto switchD_1007f4f1_caseD_26;
    case 1:
      goto switchD_1007f4f1_caseD_27;
    case 2:
      goto switchD_1007f4f1_caseD_28;
    case 4:
      goto switchD_1007f4f1_caseD_2a;
    case 5:
      goto switchD_1007f4f1_caseD_2b;
    }
    goto switchD_1007f668_default;
  case 3:
    unaff_EDI = *(byte ***)(param_1 + 0x18);
    unaff_ESI = *(byte **)(param_1 + 0x1c);
    local_30 = param_1 + 4;
    FUN_1010a5e0((undefined1 *)&local_70,(byte *)unaff_EDI,(uint)unaff_ESI);
    uVar7 = (uint)local_70 & 0xff;
    pbVar3 = &DAT_00000006;
    param_1 = (byte *)local_68;
    puVar6 = (undefined4 *)local_60;
    pbStack_6c = unaff_ESI;
    pbVar10 = unaff_ESI;
    local_70 = unaff_EDI;
    ppbVar11 = unaff_EDI;
    switch(uVar7) {
    case 0:
    case 3:
      goto switchD_1007f4f1_caseD_20;
    case 1:
      goto switchD_1007f4f1_caseD_21;
    case 2:
      goto switchD_1007f4f1_caseD_22;
    case 4:
      goto switchD_1007f4f1_caseD_24;
    case 5:
      goto switchD_1007f4f1_caseD_25;
    }
    goto switchD_1007f6fb_default;
  case 4:
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_50 = CONCAT44(local_50._4_4_,param_1 + 4);
    local_70 = (byte **)&local_50;
    pbStack_6c = &LAB_10082740;
    puVar13 = (ushort *)&DAT_101432a7;
    break;
  case 5:
    local_30 = param_1 + 0xc;
    local_2c[0] = param_1 + 4;
    local_50 = CONCAT44(local_50._4_4_,param_1 + 0x18);
    local_70 = local_2c;
    uVar5 = *param_2;
    iVar4 = param_2[1];
    pbStack_6c = &LAB_100828a0;
    local_68 = CONCAT44(&LAB_10082740,&local_30);
    local_60 = CONCAT44(&LAB_10082740,&local_50);
    puVar13 = (ushort *)&DAT_101432ba;
    break;
  case 6:
    unaff_EDI = *(byte ***)(param_1 + 8);
    unaff_ESI = *(byte **)(param_1 + 0xc);
    FUN_1010a5e0((undefined1 *)&local_70,(byte *)unaff_EDI,(uint)unaff_ESI);
    pbVar3 = &DAT_00000006;
    param_1 = (byte *)local_68;
    puVar6 = (undefined4 *)local_60;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
    switch((uint)local_70 & 0xff) {
    case 0:
    case 3:
      goto switchD_1007f4f1_caseD_1a;
    case 1:
      goto switchD_1007f4f1_caseD_1b;
    case 2:
      goto switchD_1007f4f1_caseD_1c;
    case 4:
      goto switchD_1007f4f1_caseD_1e;
    case 5:
      goto switchD_1007f4f1_caseD_1f;
    }
    goto switchD_1007f89b_default;
  case 7:
    unaff_EDI = *(byte ***)(param_1 + 8);
    unaff_ESI = *(byte **)(param_1 + 0xc);
    local_30 = param_1 + 0x14;
    FUN_1010a5e0((undefined1 *)&local_70,(byte *)unaff_EDI,(uint)unaff_ESI);
    uVar7 = (uint)local_70 & 0xff;
    pbVar3 = &DAT_00000006;
    param_1 = (byte *)local_68;
    puVar6 = (undefined4 *)local_60;
    pbStack_6c = unaff_ESI;
    pbVar10 = unaff_ESI;
    local_70 = unaff_EDI;
    ppbVar11 = unaff_EDI;
    switch(uVar7) {
    case 0:
    case 3:
      goto switchD_1007f4f1_caseD_14;
    case 1:
      goto switchD_1007f4f1_caseD_15;
    case 2:
      goto switchD_1007f4f1_caseD_16;
    case 4:
      goto switchD_1007f4f1_caseD_18;
    case 5:
      goto switchD_1007f4f1_caseD_19;
    }
    goto switchD_1007f746_default;
  case 8:
    local_2c[0] = param_1 + 4;
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_50 = CONCAT44(local_50._4_4_,param_1 + 8);
    local_70 = (byte **)&local_50;
    pbStack_6c = &LAB_100bd970;
    local_68 = CONCAT44(&LAB_100bd970,local_2c);
    puVar13 = (ushort *)&DAT_10143307;
    break;
  case 9:
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_50 = CONCAT44(local_50._4_4_,param_1 + 1);
    local_70 = (byte **)&local_50;
    pbStack_6c = &LAB_10082790;
    puVar13 = (ushort *)&DAT_1014332b;
    break;
  case 10:
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_50 = CONCAT44(local_50._4_4_,param_1 + 1);
    local_70 = (byte **)&local_50;
    pbStack_6c = &LAB_10082760;
    puVar13 = (ushort *)&DAT_10143343;
    break;
  case 0xb:
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_50 = CONCAT44(local_50._4_4_,param_1 + 4);
    local_70 = (byte **)&local_50;
    pbStack_6c = &LAB_10082740;
    puVar13 = (ushort *)&DAT_10143359;
    break;
  case 0xc:
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_50 = CONCAT44(local_50._4_4_,param_1 + 4);
    local_70 = (byte **)&local_50;
    pbStack_6c = &LAB_10082740;
    puVar13 = (ushort *)&DAT_10143370;
    break;
  case 0xd:
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_50 = CONCAT44(local_50._4_4_,param_1 + 4);
    local_70 = (byte **)&local_50;
    pbStack_6c = &LAB_10082740;
    puVar13 = (ushort *)&DAT_10143389;
    break;
  case 0xe:
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_50 = CONCAT44(local_50._4_4_,param_1 + 4);
    local_70 = (byte **)&local_50;
    pbStack_6c = &LAB_10082740;
    puVar13 = (ushort *)&DAT_101433aa;
    break;
  case 0xf:
    local_2c[0] = param_1 + 4;
    iVar4 = *(int *)(param_1 + 0x10);
    local_50 = CONCAT44(local_50._4_4_,param_1 + 0x10);
    if (iVar4 == 0) {
      local_70 = local_2c;
      pbStack_6c = &LAB_10082740;
      FUN_10053240(*param_2,param_2[1],(ushort *)&DAT_101433c5,(uint)&local_70);
      return;
    }
    if ((iVar4 != 0x20) && (iVar4 != 0x2e)) {
      local_70 = local_2c;
      pbStack_6c = &LAB_10082740;
      local_68 = CONCAT44(&LAB_100828c0,&local_50);
      FUN_10053240(*param_2,param_2[1],(ushort *)&DAT_10143417,(uint)&local_70);
      return;
    }
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_70 = local_2c;
    pbStack_6c = &LAB_10082740;
    puVar13 = (ushort *)&DAT_101433fb;
    break;
  case 0x10:
    local_2c[0] = param_1 + 4;
    iVar4 = *(int *)(param_1 + 0x10);
    local_50 = CONCAT44(local_50._4_4_,param_1 + 0x10);
    if (iVar4 == 0) {
      local_70 = local_2c;
      pbStack_6c = &LAB_10082740;
      FUN_10053240(*param_2,param_2[1],(ushort *)&DAT_10143442,(uint)&local_70);
      return;
    }
    if ((iVar4 != 0x20) && (iVar4 != 0x2e)) {
      local_70 = local_2c;
      pbStack_6c = &LAB_10082740;
      local_68 = CONCAT44(&LAB_100828c0,&local_50);
      FUN_10053240(*param_2,param_2[1],(ushort *)&DAT_101434a4,(uint)&local_70);
      return;
    }
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_70 = local_2c;
    pbStack_6c = &LAB_10082740;
    puVar13 = (ushort *)&DAT_10143480;
    break;
  case 0x11:
    local_2c[0] = param_1 + 4;
    iVar4 = *(int *)(param_1 + 0x10);
    local_50 = CONCAT44(local_50._4_4_,param_1 + 0x10);
    if (iVar4 == 0) {
      local_70 = local_2c;
      pbStack_6c = &LAB_10082740;
      FUN_10053240(*param_2,param_2[1],(ushort *)&DAT_101434d7,(uint)&local_70);
      return;
    }
    if ((iVar4 != 0x20) && (iVar4 != 0x2e)) {
      local_70 = local_2c;
      pbStack_6c = &LAB_10082740;
      local_68 = CONCAT44(&LAB_100828c0,&local_50);
      FUN_10053240(*param_2,param_2[1],(ushort *)&DAT_1014352d,(uint)&local_70);
      return;
    }
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_70 = local_2c;
    pbStack_6c = &LAB_10082740;
    puVar13 = (ushort *)&DAT_1014350f;
    break;
  case 0x12:
    (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_1014355a,0x45);
    return;
  case 0x13:
    uVar5 = *param_2;
    iVar4 = param_2[1];
    local_50 = CONCAT44(local_50._4_4_,param_1 + 4);
    local_70 = (byte **)&local_50;
    pbStack_6c = &LAB_10082740;
    puVar13 = (ushort *)&DAT_1014359f;
    break;
  default:
switchD_1007f4f1_caseD_14:
    pbVar3 = param_1 + 4;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
    goto switchD_1007f4f1_caseD_16;
  case 0x15:
switchD_1007f4f1_caseD_15:
    iVar4 = (int)puVar6 + 1;
    if (puVar6 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    pbVar3 = param_1 + iVar4 + 8;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
  case 0x16:
    goto switchD_1007f4f1_caseD_16;
  case 0x18:
switchD_1007f4f1_caseD_18:
    iVar4 = (int)puVar6 + 1;
    if (puVar6 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    pbVar3 = param_1 + iVar4 + 2;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
    goto switchD_1007f4f1_caseD_16;
  case 0x19:
switchD_1007f4f1_caseD_19:
    pbVar3 = (byte *)0x2;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
switchD_1007f4f1_caseD_16:
    unaff_ESI = pbVar10 + -(int)pbVar3;
    if (pbVar3 <= pbVar10) {
      unaff_EDI = (byte **)(pbVar3 + (int)ppbVar11);
      pbStack_6c = pbVar10;
      local_70 = ppbVar11;
switchD_1007f746_default:
      local_38 = (undefined4 *)local_60;
      uVar7 = 0;
      if (unaff_ESI == (byte *)0x0) {
        local_52 = false;
      }
      else {
        local_52 = *(byte *)unaff_EDI == 0x2f || *(byte *)unaff_EDI == 0x5c;
      }
      local_50 = CONCAT44(pbStack_6c,local_70);
      local_58 = (undefined4 *)local_60;
      local_60 = local_68;
      local_40 = local_68;
      local_34 = 0x200;
      local_54 = 0x200;
      local_32 = local_52;
      while( true ) {
        FUN_1010a9d0((byte *)local_2c,(int *)&local_70);
        if ((char)local_2c[0] == -1) break;
        uVar7 = uVar7 + 1;
      }
      uVar9 = 0;
      uVar8 = uVar7 - 3;
      bVar12 = uVar8 != 0;
      if (uVar7 < 3) {
        uVar8 = 0;
      }
      if (uVar7 >= 3 && bVar12) {
        do {
          uVar9 = uVar9 + 1;
          FUN_1010a9d0((byte *)&local_70,(int *)&local_50);
        } while (uVar9 < uVar8);
      }
      local_50 = FUN_1010b130(&local_50);
      pbStack_6c = &LAB_1011d430;
      local_68 = CONCAT44(&LAB_10080b50,&local_30);
      uVar5 = *param_2;
      iVar4 = param_2[1];
      puVar13 = (ushort *)&DAT_101432f1;
      local_70 = (byte **)&local_50;
      break;
    }
    goto LAB_1008004b;
  case 0x1a:
  case 0x1d:
switchD_1007f4f1_caseD_1a:
    pbVar3 = param_1 + 4;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
    goto switchD_1007f4f1_caseD_1c;
  case 0x1b:
switchD_1007f4f1_caseD_1b:
    iVar4 = (int)puVar6 + 1;
    if (puVar6 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    pbVar3 = param_1 + iVar4 + 8;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
  case 0x1c:
    goto switchD_1007f4f1_caseD_1c;
  case 0x1e:
switchD_1007f4f1_caseD_1e:
    iVar4 = (int)puVar6 + 1;
    if (puVar6 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    pbVar3 = param_1 + iVar4 + 2;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
    goto switchD_1007f4f1_caseD_1c;
  case 0x1f:
switchD_1007f4f1_caseD_1f:
    pbVar3 = (byte *)0x2;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
switchD_1007f4f1_caseD_1c:
    unaff_ESI = pbVar10 + -(int)pbVar3;
    if (pbVar3 <= pbVar10) {
      unaff_EDI = (byte **)(pbVar3 + (int)ppbVar11);
switchD_1007f89b_default:
      local_38 = (undefined4 *)local_60;
      uVar7 = 0;
      if (unaff_ESI == (byte *)0x0) {
        local_52 = false;
      }
      else {
        local_52 = *(byte *)unaff_EDI == 0x2f || *(byte *)unaff_EDI == 0x5c;
      }
      uVar2 = CONCAT44(pbStack_6c,local_70);
      local_50 = CONCAT44(pbVar10,ppbVar11);
      local_58 = (undefined4 *)local_60;
      local_60 = local_68;
      local_40 = local_68;
      local_34 = 0x200;
      local_54 = 0x200;
      local_70 = ppbVar11;
      pbStack_6c = pbVar10;
      local_68 = uVar2;
      local_32 = local_52;
      while( true ) {
        FUN_1010a9d0((byte *)local_2c,(int *)&local_70);
        if ((char)local_2c[0] == -1) break;
        uVar7 = uVar7 + 1;
      }
      uVar9 = 0;
      uVar8 = uVar7 - 3;
      bVar12 = uVar8 != 0;
      if (uVar7 < 3) {
        uVar8 = 0;
      }
      if (uVar7 >= 3 && bVar12) {
        do {
          uVar9 = uVar9 + 1;
          FUN_1010a9d0((byte *)&local_70,(int *)&local_50);
        } while (uVar9 < uVar8);
      }
      local_50 = FUN_1010b130(&local_50);
      pbStack_6c = &LAB_1011d430;
      uVar5 = *param_2;
      iVar4 = param_2[1];
      puVar13 = (ushort *)&DAT_101432d9;
      local_70 = (byte **)&local_50;
      break;
    }
    goto LAB_1008004b;
  case 0x20:
  case 0x23:
switchD_1007f4f1_caseD_20:
    pbVar3 = param_1 + 4;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
    goto switchD_1007f4f1_caseD_22;
  case 0x21:
switchD_1007f4f1_caseD_21:
    iVar4 = (int)puVar6 + 1;
    if (puVar6 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    pbVar3 = param_1 + iVar4 + 8;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
  case 0x22:
    goto switchD_1007f4f1_caseD_22;
  case 0x24:
switchD_1007f4f1_caseD_24:
    iVar4 = (int)puVar6 + 1;
    if (puVar6 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    pbVar3 = param_1 + iVar4 + 2;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
    goto switchD_1007f4f1_caseD_22;
  case 0x25:
switchD_1007f4f1_caseD_25:
    pbVar3 = (byte *)0x2;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
switchD_1007f4f1_caseD_22:
    unaff_ESI = pbVar10 + -(int)pbVar3;
    if (pbVar3 <= pbVar10) {
      unaff_EDI = (byte **)(pbVar3 + (int)ppbVar11);
      pbStack_6c = pbVar10;
      local_70 = ppbVar11;
switchD_1007f6fb_default:
      local_38 = (undefined4 *)local_60;
      uVar7 = 0;
      if (unaff_ESI == (byte *)0x0) {
        local_52 = false;
      }
      else {
        local_52 = *(byte *)unaff_EDI == 0x2f || *(byte *)unaff_EDI == 0x5c;
      }
      local_50 = CONCAT44(pbStack_6c,local_70);
      local_58 = (undefined4 *)local_60;
      local_60 = local_68;
      local_40 = local_68;
      local_34 = 0x200;
      local_54 = 0x200;
      local_32 = local_52;
      while( true ) {
        FUN_1010a9d0((byte *)local_2c,(int *)&local_70);
        if ((char)local_2c[0] == -1) break;
        uVar7 = uVar7 + 1;
      }
      uVar9 = 0;
      uVar8 = uVar7 - 3;
      bVar12 = uVar8 != 0;
      if (uVar7 < 3) {
        uVar8 = 0;
      }
      if (uVar7 >= 3 && bVar12) {
        do {
          uVar9 = uVar9 + 1;
          FUN_1010a9d0((byte *)&local_70,(int *)&local_50);
        } while (uVar9 < uVar8);
      }
      local_50 = FUN_1010b130(&local_50);
      pbStack_6c = &LAB_1011d430;
      local_68 = CONCAT44(&LAB_100827c0,&local_30);
      uVar5 = *param_2;
      iVar4 = param_2[1];
      puVar13 = (ushort *)&DAT_1014328a;
      local_70 = (byte **)&local_50;
      break;
    }
    goto LAB_1008004b;
  case 0x26:
  case 0x29:
switchD_1007f4f1_caseD_26:
    pbVar3 = param_1 + 4;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
    goto switchD_1007f4f1_caseD_28;
  case 0x27:
switchD_1007f4f1_caseD_27:
    iVar4 = (int)puVar6 + 1;
    if (puVar6 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    pbVar3 = param_1 + iVar4 + 8;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
  case 0x28:
    goto switchD_1007f4f1_caseD_28;
  case 0x2a:
switchD_1007f4f1_caseD_2a:
    iVar4 = (int)puVar6 + 1;
    if (puVar6 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    pbVar3 = param_1 + iVar4 + 2;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
    goto switchD_1007f4f1_caseD_28;
  case 0x2b:
switchD_1007f4f1_caseD_2b:
    pbVar3 = (byte *)0x2;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
switchD_1007f4f1_caseD_28:
    unaff_ESI = pbVar10 + -(int)pbVar3;
    if (pbVar3 <= pbVar10) {
      unaff_EDI = (byte **)(pbVar3 + (int)ppbVar11);
      pbStack_6c = pbVar10;
      local_70 = ppbVar11;
switchD_1007f668_default:
      local_38 = (undefined4 *)local_60;
      uVar7 = 0;
      if (unaff_ESI == (byte *)0x0) {
        local_52 = false;
      }
      else {
        local_52 = *(byte *)unaff_EDI == 0x2f || *(byte *)unaff_EDI == 0x5c;
      }
      local_50 = CONCAT44(pbStack_6c,local_70);
      local_58 = (undefined4 *)local_60;
      local_60 = local_68;
      local_40 = local_68;
      local_34 = 0x200;
      local_54 = 0x200;
      local_32 = local_52;
      while( true ) {
        FUN_1010a9d0((byte *)local_2c,(int *)&local_70);
        if ((char)local_2c[0] == -1) break;
        uVar7 = uVar7 + 1;
      }
      uVar9 = 0;
      uVar8 = uVar7 - 3;
      bVar12 = uVar8 != 0;
      if (uVar7 < 3) {
        uVar8 = 0;
      }
      if (uVar7 >= 3 && bVar12) {
        do {
          uVar9 = uVar9 + 1;
          FUN_1010a9d0((byte *)&local_70,(int *)&local_50);
        } while (uVar9 < uVar8);
      }
      local_50 = FUN_1010b130(&local_50);
      pbStack_6c = &LAB_1011d430;
      local_68 = CONCAT44(&LAB_10082880,&local_30);
      uVar5 = *param_2;
      iVar4 = param_2[1];
      puVar13 = (ushort *)&DAT_1014326d;
      local_70 = (byte **)&local_50;
      break;
    }
    goto LAB_1008004b;
  case 0x2c:
  case 0x2f:
switchD_1007f4f1_caseD_2c:
    pbVar3 = param_1 + 4;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
    goto switchD_1007f4f1_caseD_2e;
  case 0x2d:
switchD_1007f4f1_caseD_2d:
    iVar4 = (int)puVar6 + 1;
    if (puVar6 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    pbVar3 = param_1 + iVar4 + 8;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
  case 0x2e:
    goto switchD_1007f4f1_caseD_2e;
  case 0x30:
switchD_1007f4f1_caseD_30:
    iVar4 = (int)puVar6 + 1;
    if (puVar6 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    pbVar3 = param_1 + iVar4 + 2;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
    goto switchD_1007f4f1_caseD_2e;
  case 0x31:
switchD_1007f4f1_caseD_31:
    pbVar3 = (byte *)0x2;
    pbVar10 = unaff_ESI;
    ppbVar11 = unaff_EDI;
switchD_1007f4f1_caseD_2e:
    unaff_ESI = pbVar10 + -(int)pbVar3;
    if (pbVar10 < pbVar3) {
LAB_1008004b:
      FUN_10136a50((uint)pbVar3,(uint)pbVar10,(uint)pbVar10,
                   &PTR_s_C__Users_runneradmin__rustup_too_10158004);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    unaff_EDI = (byte **)(pbVar3 + (int)ppbVar11);
    pbStack_6c = pbVar10;
    local_70 = ppbVar11;
switchD_1007f791_default:
    local_38 = (undefined4 *)local_60;
    uVar7 = 0;
    if (unaff_ESI == (byte *)0x0) {
      local_52 = false;
    }
    else {
      local_52 = *(byte *)unaff_EDI == 0x2f || *(byte *)unaff_EDI == 0x5c;
    }
    local_50 = CONCAT44(pbStack_6c,local_70);
    local_58 = (undefined4 *)local_60;
    local_60 = local_68;
    local_40 = local_68;
    local_34 = 0x200;
    local_54 = 0x200;
    local_32 = local_52;
    while( true ) {
      FUN_1010a9d0((byte *)local_2c,(int *)&local_70);
      if ((char)local_2c[0] == -1) break;
      uVar7 = uVar7 + 1;
    }
    uVar9 = 0;
    uVar8 = uVar7 - 3;
    bVar12 = uVar8 != 0;
    if (uVar7 < 3) {
      uVar8 = 0;
    }
    if (uVar7 >= 3 && bVar12) {
      do {
        uVar9 = uVar9 + 1;
        FUN_1010a9d0((byte *)&local_70,(int *)&local_50);
      } while (uVar9 < uVar8);
    }
    local_50 = FUN_1010b130(&local_50);
    pbStack_6c = &LAB_1011d430;
    local_68 = CONCAT44(&LAB_10082880,&local_30);
    uVar5 = *param_2;
    iVar4 = param_2[1];
    puVar13 = (ushort *)&DAT_10143255;
    local_70 = (byte **)&local_50;
  }
  FUN_10093d70(uVar5,iVar4,puVar13,(uint)&local_70);
  return;
}
