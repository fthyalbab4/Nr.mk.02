// rea decompile_all
// name: FUN_101126e0
// address: 0x101126e0
// body: available
// range: 0x101126e0-0x10112804 inclusive
// range: 0x10112810-0x1011288c inclusive
// range: 0x101128cc-0x101128e0 inclusive
// range: 0x101128f0-0x101129da inclusive
// range: 0x101129e0-0x10112c47 inclusive
// range: 0x10112c5a-0x10112c7d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Exceeded maximum restarts with more pending */

void __fastcall FUN_101126e0(char *param_1,byte *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 uVar12;
  uint uVar13;
  byte *pbVar14;
  HANDLE pvVar15;
  byte *pbVar16;
  int *extraout_EDX;
  int *extraout_EDX_00;
  LPVOID pvVar17;
  int *piVar18;
  undefined1 *lpMem;
  uint uVar19;
  uint uVar20;
  undefined1 *local_5c;
  undefined8 local_50;
  uint local_48;
  undefined4 uStack_44;
  int local_40;
  undefined2 local_34;
  undefined1 local_32;
  byte *local_30;
  int *local_2c;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  undefined2 local_14;
  undefined1 local_12;

  FUN_1010a5e0((undefined1 *)&local_50,param_2,(uint)param_3);
  local_28 = local_50;
  piVar18 = (int *)&DAT_00000006;
  piVar9 = param_3;
  pbVar14 = param_2;
  switch((char)local_50) {
  case '\0':
  case '\x03':
    piVar18 = (int *)(local_48 + 4);
    break;
  case '\x01':
    iVar10 = local_40 + 1;
    if (local_40 == 0) {
      iVar10 = 0;
    }
    piVar18 = (int *)(local_48 + 8 + iVar10);
    break;
  case '\x02':
    break;
  case '\x04':
    iVar10 = local_40 + 1;
    if (local_40 == 0) {
      iVar10 = 0;
    }
    piVar18 = (int *)(local_48 + 2 + iVar10);
    break;
  case '\x05':
    piVar18 = (int *)0x2;
    break;
  default:
    goto switchD_1011272e_default;
  }
  piVar9 = (int *)((int)param_3 - (int)piVar18);
  if (param_3 < piVar18) {
    FUN_10136a50((uint)piVar18,(uint)param_3,(uint)param_3,
                 &PTR_s_C__Users_runneradmin__rustup_too_10158004);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pbVar14 = (byte *)((int)piVar18 + (int)param_2);
switchD_1011272e_default:
  if (piVar9 == (int *)0x0) {
    local_12 = false;
  }
  else {
    local_12 = *pbVar14 == 0x2f || *pbVar14 == 0x5c;
  }
  local_20 = CONCAT44(uStack_44,local_48);
  local_50 = 1;
  local_48 = CONCAT31(local_48._1_3_,0xff);
  local_32 = 0;
  local_34 = 0x200;
  local_2c = param_3;
  local_18 = local_40;
  local_14 = 0x200;
  local_30 = param_2;
  bVar5 = FUN_10112d70((undefined8 *)&local_30,&local_50);
  if ((bVar5) || (iVar10 = FUN_10110f10(param_2,(uint)param_3), iVar10 == 0)) {
    *param_1 = -1;
  }
  else {
    uVar19 = 0;
    pbVar14 = param_2;
    piVar18 = param_3;
    do {
      pbVar11 = (byte *)FUN_10110f10(pbVar14,(uint)piVar18);
      FUN_1010a5e0((undefined1 *)&local_50,pbVar14,(uint)piVar18);
      uVar4 = local_50;
      piVar9 = piVar18;
      pbVar16 = pbVar14;
      switch((char)local_50) {
      case -0xbad1abe1bad1ab1f:
                    /* WARNING: Calculation of case label failed */
        iVar10 = local_40 + 1;
        if (local_40 == 0) {
          iVar10 = 0;
        }
        piVar1 = (int *)(local_48 + 8 + iVar10);
        piVar9 = (int *)((int)piVar18 - (int)piVar1);
        if (piVar18 < piVar1) {
          FUN_10136a50((uint)piVar1,(uint)piVar18,(uint)piVar18,
                       &PTR_s_C__Users_runneradmin__rustup_too_10158004);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        pbVar16 = (byte *)((int)piVar1 + (int)pbVar14);
      }
      if (piVar9 == (int *)0x0) {
        local_12 = false;
      }
      else {
        local_12 = *pbVar16 == 0x2f || *pbVar16 == 0x5c;
      }
      local_20 = CONCAT44(uStack_44,local_48);
      local_50 = 1;
      local_48 = CONCAT31(local_48._1_3_,0xff);
      local_32 = 0;
      local_34 = 0x200;
      local_18 = local_40;
      local_28 = uVar4;
      local_14 = 0x200;
      local_30 = pbVar14;
      local_2c = piVar18;
      bVar5 = FUN_10112d70((undefined8 *)&local_30,&local_50);
      if ((bVar5) || (iVar10 = FUN_10110f10(pbVar14,(uint)piVar18), iVar10 == 0)) break;
      FUN_10112cd0((undefined4 *)param_1,(int)pbVar14,(int)piVar18);
      switch(*param_1) {
      case '\0':
        piVar9 = *(int **)(param_1 + 4);
        uVar12 = FUN_1010dc70((int)piVar9);
        cVar6 = (char)uVar12;
        break;
      case '\x01':
        cVar6 = param_1[1];
        if (cVar6 != '\0') goto LAB_10112a11;
        piVar9 = *(int **)(param_1 + 4);
        cVar6 = *param_1;
        goto joined_r0x101129fe;
      case '\x02':
      case '\x03':
        piVar9 = *(int **)(param_1 + 4);
        cVar6 = (char)piVar9[2];
        break;
      default:
        goto switchD_10112997_default;
      }
      if (cVar6 != '\0') {
LAB_10112a11:
        if (cVar6 != '\f') {
          return;
        }
        bVar7 = FUN_10111f40((int)pbVar14,(int)piVar18);
        if (bVar7 == 0) {
          return;
        }
        local_50 = *(undefined8 *)param_1;
        FUN_10005b30((char *)&local_50);
        break;
      }
      cVar6 = *param_1;
joined_r0x101129fe:
      if (cVar6 == '\x03') {
        puVar2 = (undefined4 *)piVar9[1];
        pvVar17 = (LPVOID)*piVar9;
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)(pvVar17);
        }
        if (puVar2[1] != 0) {
          if (8 < (uint)puVar2[2]) {
            pvVar17 = *(LPVOID *)((int)pvVar17 + -4);
          }
          pvVar15 = GetProcessHeap();
          HeapFree(pvVar15,0,pvVar17);
        }
        pvVar15 = GetProcessHeap();
        HeapFree(pvVar15,0,piVar9);
      }
      uVar19 = uVar19 + 1;
      pbVar14 = pbVar11;
      piVar18 = extraout_EDX;
    } while (pbVar11 != (byte *)0x0);
switchD_10112997_default:
    uVar20 = uVar19 * 8;
    if (0x1fffffff < uVar19 || 0x7ffffffc < uVar20) {
      FUN_101367b0();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (uVar20 == 0) {
      local_5c = &DAT_00000004;
      uVar13 = 0;
    }
    else {
      local_5c = FUN_10107380(0,uVar20);
      uVar13 = uVar19;
      if (local_5c == (undefined1 *)0x0) {
        FUN_101366bc(4);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    local_48 = 0;
    local_50._0_4_ = uVar13;
    local_50._4_4_ = local_5c;
    if (uVar19 == 0) {
      *param_1 = -1;
      lpMem = local_5c;
    }
    else {
      do {
        uVar13 = local_48;
        if (param_2 == (byte *)0x0) {
          lpMem = local_50._4_4_;
          if (local_48 == 0) goto LAB_10112c11;
          uVar20 = local_48 << 3;
          break;
        }
        pbVar14 = (byte *)FUN_10110f10(param_2,(uint)param_3);
        if (uVar13 == (uint)local_50) {
          FUN_101359e0((uint *)&local_50,uVar13,1,&DAT_00000004,8);
          local_5c = local_50._4_4_;
        }
        *(byte **)(local_5c + uVar13 * 8) = param_2;
        *(int **)(local_5c + uVar13 * 8 + 4) = param_3;
        local_48 = uVar13 + 1;
        param_3 = extraout_EDX_00;
        lpMem = local_50._4_4_;
        param_2 = pbVar14;
      } while (uVar19 != local_48);
      do {
        FUN_10112cd0(&local_30,*(int *)(lpMem + (uVar20 - 8)),*(int *)(lpMem + (uVar20 - 4)));
        piVar18 = local_2c;
        pbVar14 = local_30;
        cVar6 = (char)local_30;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((uint)local_30 & 0xff) {
        case 0:
          uVar12 = FUN_1010dc70((int)local_2c);
          cVar8 = (char)uVar12;
          break;
        case 1:
          cVar8 = (char)((uint)local_30 >> 8);
          break;
        case 2:
        case 3:
          cVar8 = (char)local_2c[2];
          break;
        default:
          goto switchD_10112baf_default;
        }
        if ((cVar8 != '\f') ||
           (bVar7 = FUN_10111f40(*(int *)(lpMem + (uVar20 - 8)),*(int *)(lpMem + (uVar20 - 4))),
           bVar7 == 0)) {
          *(byte **)param_1 = pbVar14;
          *(int **)(param_1 + 4) = piVar18;
          if ((uint)local_50 == 0) {
            return;
          }
          goto LAB_10112c33;
        }
        if (cVar6 == '\x03') {
          puVar2 = (undefined4 *)piVar18[1];
          pvVar17 = (LPVOID)*piVar18;
          if ((code *)*puVar2 != (code *)0x0) {
            (*(code *)*puVar2)(pvVar17);
          }
          if (puVar2[1] != 0) {
            if (8 < (uint)puVar2[2]) {
              pvVar17 = *(LPVOID *)((int)pvVar17 + -4);
            }
            pvVar15 = GetProcessHeap();
            HeapFree(pvVar15,0,pvVar17);
          }
          pvVar15 = GetProcessHeap();
          HeapFree(pvVar15,0,piVar18);
        }
switchD_10112baf_default:
        uVar20 = uVar20 - 8;
      } while (uVar20 != 0);
LAB_10112c11:
      *param_1 = -1;
    }
    if ((uint)local_50 != 0) {
LAB_10112c33:
      pvVar15 = GetProcessHeap();
      HeapFree(pvVar15,0,lpMem);
    }
  }
  return;
}
