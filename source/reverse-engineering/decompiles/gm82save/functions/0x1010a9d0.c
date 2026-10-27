// rea decompile_all
// name: FUN_1010a9d0
// address: 0x1010a9d0
// body: available
// range: 0x1010a9d0-0x1010aae8 inclusive
// range: 0x1010aaf0-0x1010ac55 inclusive
// range: 0x1010ac60-0x1010b008 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010a9d0(byte *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  code *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  undefined3 uVar18;
  int iVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar19;
  uint uVar20;
  byte local_45;
  char *local_38;
  uint local_34;
  char *local_30;
  char *local_20;

  if ((char)param_2[7] != '\x03') {
    bVar6 = *(byte *)(param_2 + 2);
    bVar7 = *(byte *)((int)param_2 + 0x1d);
    uVar11 = (uint)CONCAT11(bVar7,(char)param_2[7]);
    iVar15 = param_2[6] + 1;
    if (param_2[6] == 0) {
      iVar15 = 0;
    }
    if (bVar7 != 3) {
      local_45 = *param_1;
      bVar13 = (bVar6 < 3) - 1U | 7;
      iVar8 = param_2[4];
      uVar1 = iVar8 + 4;
      uVar2 = iVar8 + 2 + iVar15;
      uVar3 = iVar8 + 8 + iVar15;
      local_30 = *(char **)(param_1 + 4);
      uVar20 = *(uint *)(param_1 + 8);
      uVar19 = (uint)bVar6;
      local_34 = param_2[1];
      if (2 < bVar6) {
        uVar14 = (uint)CONCAT11(*(undefined1 *)((int)param_2 + 0x1e),bVar7);
        pcVar17 = (char *)*param_2;
        do {
          local_20 = pcVar17;
          local_38 = local_20;
          while( true ) {
            while( true ) {
              uVar16 = uVar11;
              if ((byte)uVar14 < (byte)uVar16) goto LAB_1010ad6a;
              uVar18 = (undefined3)(uVar16 >> 8);
              if ((byte)uVar16 != 1) break;
              *(undefined1 *)(param_2 + 7) = 2;
              if ((char)(uVar14 >> 8) != '\0') goto LAB_1010ad85;
              if ((5 < bVar6) || (uVar11 = CONCAT31(uVar18,2), (0x27U >> (uVar19 & 0x1f) & 1) == 0))
              {
                if (uVar19 != 0xff) goto LAB_1010aeae;
                uVar10 = FUN_1010b3c0(param_2);
                uVar14 = (uint)bVar7;
                uVar11 = CONCAT22((short)(uVar16 >> 0x10),2);
                if ((char)uVar10 != '\0') goto LAB_1010aec4;
              }
            }
            if ((uVar16 & 0xff) == 2) break;
            uVar11 = uVar1;
            switch(uVar19) {
            case 0:
            case 3:
              break;
            case 1:
              uVar11 = uVar3;
              break;
            case 2:
            case 5:
              goto switchD_1010ac4e_caseD_2;
            case 4:
              uVar11 = uVar2;
              break;
            default:
              goto switchD_1010ac4e_default;
            }
            if (uVar11 != 0) {
switchD_1010ac4e_caseD_2:
              *(char **)(param_1 + 4) = local_30;
              *(uint *)(param_1 + 8) = uVar20;
              *param_1 = local_45;
              *(undefined1 *)(param_2 + 7) = 1;
              uVar11 = 6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(bVar6) {
              default:
                goto switchD_1010ade7_caseD_0;
              case 1:
                goto switchD_1010ade7_caseD_1;
              case 2:
                goto switchD_1010ade7_caseD_2;
              case 4:
                goto switchD_1010ade7_caseD_4;
              case 5:
                goto switchD_1010ade7_caseD_5;
              case 6:
              case 9:
                goto switchD_1010ade7_caseD_6;
              case 7:
                goto switchD_1010ade7_caseD_7;
              case 8:
                goto switchD_1010ade7_caseD_8;
              case 10:
                goto switchD_1010ade7_caseD_a;
              case 0xb:
                goto switchD_1010ade7_caseD_b;
              }
            }
switchD_1010ac4e_default:
            *(undefined1 *)(param_2 + 7) = 1;
            uVar11 = CONCAT31(uVar18,1);
          }
          if (local_34 == 0) goto LAB_1010aefc;
          uVar20 = 0;
          do {
            if ((local_20[uVar20] == '/') || (local_20[uVar20] == '\\')) {
              iVar15 = 1;
              goto LAB_1010ace6;
            }
            uVar20 = uVar20 + 1;
          } while (local_34 != uVar20);
          iVar15 = 0;
          uVar20 = local_34;
LAB_1010ace6:
          if (uVar20 == 0) {
            bVar12 = 0xff;
          }
          else if (uVar20 == 2) {
            bVar12 = ((char)((ushort)*(undefined2 *)local_20 >> 8) == '.' &&
                     (char)*(undefined2 *)local_20 == '.') ^ 9;
          }
          else {
            if (uVar20 != 1) {
              uVar16 = iVar15 + uVar20;
              if (local_34 < uVar16) goto LAB_1010afff;
              *param_2 = (int)(local_20 + uVar16);
              param_2[1] = local_34 - uVar16;
              bVar12 = 9;
              break;
            }
            bVar12 = bVar13;
            if (*local_20 != '.') {
              bVar12 = 9;
            }
          }
          uVar16 = iVar15 + uVar20;
          if (local_34 < uVar16) goto LAB_1010afb9;
          local_45 = 0xff;
          pcVar17 = local_20 + uVar16;
          local_30 = local_20;
          *param_2 = (int)pcVar17;
          param_2[1] = local_34 - uVar16;
          uVar11 = CONCAT31((int3)((uint)pcVar17 >> 8),2);
          local_34 = local_34 - uVar16;
        } while (bVar12 == 0xff);
LAB_1010af6a:
        *(char **)(param_1 + 4) = local_20;
        *(uint *)(param_1 + 8) = uVar20;
        *param_1 = bVar12;
        return;
      }
      uVar14 = (uint)CONCAT11(*(undefined1 *)((int)param_2 + 0x1e),bVar7);
      pcVar17 = (char *)*param_2;
LAB_1010aa96:
      local_20 = pcVar17;
      local_38 = local_20;
      do {
        while( true ) {
          uVar16 = uVar11;
          if ((byte)uVar14 < (byte)uVar16) goto LAB_1010ad6a;
          uVar18 = (undefined3)(uVar16 >> 8);
          if ((byte)uVar16 != 1) break;
          *(undefined1 *)(param_2 + 7) = 2;
          if ((char)(uVar14 >> 8) != '\0') {
LAB_1010ad85:
            *(char **)(param_1 + 4) = local_30;
            *(uint *)(param_1 + 8) = uVar20;
            *param_1 = local_45;
            if (local_34 != 0) {
              *param_1 = 6;
              *param_2 = (int)(local_20 + 1);
              param_2[1] = local_34 - 1;
              return;
            }
            FUN_10136a50(1,0,0,&PTR_s_C__Users_runneradmin__rustup_too_10159450);
                    /* WARNING: Does not return */
            pcVar9 = (code *)invalidInstructionException();
            (*pcVar9)();
          }
          if ((5 < bVar6) || (uVar11 = CONCAT31(uVar18,2), (0x27U >> (uVar19 & 0x1f) & 1) == 0)) {
            if (uVar19 != 0xff) {
LAB_1010aeae:
              *(char **)(param_1 + 4) = local_30;
              *(uint *)(param_1 + 8) = uVar20;
              *param_1 = 6;
              return;
            }
            uVar10 = FUN_1010b3c0(param_2);
            uVar14 = (uint)bVar7;
            uVar11 = CONCAT22((short)(uVar16 >> 0x10),2);
            if ((char)uVar10 != '\0') {
LAB_1010aec4:
              *(char **)(param_1 + 4) = local_30;
              *(uint *)(param_1 + 8) = uVar20;
              *param_1 = local_45;
              if (local_34 != 0) {
                *param_1 = 7;
                *param_2 = (int)(local_20 + 1);
                param_2[1] = local_34 - 1;
                return;
              }
              FUN_10136a50(1,0,0,&PTR_s_C__Users_runneradmin__rustup_too_10159440);
                    /* WARNING: Does not return */
              pcVar9 = (code *)invalidInstructionException();
              (*pcVar9)();
            }
          }
        }
        if ((uVar16 & 0xff) == 2) goto LAB_1010ab3a;
        uVar11 = uVar2;
        switch(uVar19) {
        case 0:
        case 3:
          uVar11 = uVar1;
          break;
        case 1:
          uVar11 = uVar3;
          break;
        case 2:
        case 5:
          goto switchD_1010aae1_caseD_2;
        case 4:
          break;
        default:
          goto switchD_1010aae1_default;
        }
        if (uVar11 != 0) {
switchD_1010aae1_caseD_2:
          *(char **)(param_1 + 4) = local_30;
          *(uint *)(param_1 + 8) = uVar20;
          *param_1 = local_45;
          *(undefined1 *)(param_2 + 7) = 1;
          uVar11 = 6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(bVar6) {
          default:
            goto switchD_1010ade7_caseD_0;
          case 1:
            goto switchD_1010ade7_caseD_1;
          case 2:
            goto switchD_1010ade7_caseD_2;
          case 4:
            goto switchD_1010ade7_caseD_4;
          case 5:
            goto switchD_1010ade7_caseD_5;
          case 6:
          case 9:
            goto switchD_1010ade7_caseD_6;
          case 7:
            goto switchD_1010ade7_caseD_7;
          case 8:
            goto switchD_1010ade7_caseD_8;
          case 10:
            goto switchD_1010ade7_caseD_a;
          case 0xb:
            goto switchD_1010ade7_caseD_b;
          }
        }
switchD_1010aae1_default:
        *(undefined1 *)(param_2 + 7) = 1;
        uVar11 = CONCAT31(uVar18,1);
      } while( true );
    }
  }
LAB_1010ad7a:
  *param_1 = 0xff;
  return;
LAB_1010ad6a:
  *(char **)(param_1 + 4) = local_30;
  *(uint *)(param_1 + 8) = uVar20;
  goto LAB_1010ad7a;
LAB_1010ab3a:
  if (local_34 == 0) {
LAB_1010aefc:
    *(char **)(param_1 + 4) = local_30;
    *(uint *)(param_1 + 8) = uVar20;
    *(undefined1 *)(param_2 + 7) = 3;
    *param_1 = 0xff;
    return;
  }
  uVar20 = 0;
  do {
    if (local_20[uVar20] == '\\') {
      iVar15 = 1;
      goto LAB_1010ab6e;
    }
    uVar20 = uVar20 + 1;
  } while (local_34 != uVar20);
  iVar15 = 0;
  uVar20 = local_34;
LAB_1010ab6e:
  if (uVar20 == 0) {
    bVar12 = 0xff;
  }
  else if (uVar20 == 1) {
    bVar12 = 9;
    if (*local_20 == '.') {
      bVar12 = bVar13;
    }
  }
  else {
    if (uVar20 != 2) {
      uVar16 = iVar15 + uVar20;
      if (local_34 < uVar16) {
LAB_1010afff:
        bVar12 = 9;
        local_38 = local_20;
LAB_1010afb9:
        *(char **)(param_1 + 4) = local_38;
        *(uint *)(param_1 + 8) = uVar20;
        *param_1 = bVar12;
        FUN_10136a50(uVar16,local_34,local_34,&PTR_s_C__Users_runneradmin__rustup_too_10159460);
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      *param_2 = (int)(local_20 + uVar16);
      param_2[1] = local_34 - uVar16;
      bVar12 = 9;
      goto LAB_1010af6a;
    }
    bVar12 = ((char)((ushort)*(undefined2 *)local_20 >> 8) == '.' &&
             (char)*(undefined2 *)local_20 == '.') ^ 9;
  }
  uVar16 = iVar15 + uVar20;
  if (local_34 < uVar16) goto LAB_1010afb9;
  local_45 = 0xff;
  pcVar17 = local_20 + uVar16;
  local_30 = local_20;
  *param_2 = (int)pcVar17;
  param_2[1] = local_34 - uVar16;
  uVar11 = CONCAT31((int3)((uint)pcVar17 >> 8),2);
  local_34 = local_34 - uVar16;
  if (bVar12 != 0xff) goto LAB_1010af6a;
  goto LAB_1010aa96;
switchD_1010ade7_caseD_5:
  uVar11 = 2;
  local_38 = local_20;
  goto switchD_1010ade7_caseD_2;
switchD_1010ade7_caseD_4:
  uVar11 = uVar2;
  local_38 = local_20;
  goto switchD_1010ade7_caseD_2;
switchD_1010ade7_caseD_1:
  uVar11 = uVar3;
  local_38 = local_20;
  goto switchD_1010ade7_caseD_2;
switchD_1010ade7_caseD_0:
  uVar11 = uVar1;
  local_38 = local_20;
switchD_1010ade7_caseD_2:
  if (local_34 < uVar11) {
    FUN_10136a50(0,uVar11,local_34,&PTR_s_C__Users_runneradmin__rustup_too_10159480);
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  uVar20 = 6;
  uVar16 = local_34;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar6) {
  default:
switchD_1010ade7_caseD_6:
    uVar20 = uVar1;
    break;
  case 1:
switchD_1010ade7_caseD_7:
    uVar20 = uVar3;
    break;
  case 2:
    break;
  case 4:
switchD_1010ade7_caseD_a:
    uVar20 = uVar2;
    break;
  case 5:
switchD_1010ade7_caseD_b:
    uVar20 = 2;
  }
switchD_1010ade7_caseD_8:
  if (uVar20 <= uVar16) {
    *param_2 = (int)(local_38 + uVar20);
    param_2[1] = uVar16 - uVar20;
    uVar4 = *(undefined8 *)((int)param_2 + 9);
    uVar5 = *(undefined8 *)((int)param_2 + 0x11);
    *(int *)(param_1 + 0x10) = param_2[6];
    *(undefined8 *)(param_1 + 9) = uVar5;
    *(undefined8 *)(param_1 + 1) = uVar4;
    *param_1 = bVar6;
    *(char **)(param_1 + 0x14) = local_38;
    *(uint *)(param_1 + 0x18) = uVar11;
    return;
  }
  FUN_10136a50(uVar20,uVar16,uVar16,&PTR_s_C__Users_runneradmin__rustup_too_10159470);
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}
