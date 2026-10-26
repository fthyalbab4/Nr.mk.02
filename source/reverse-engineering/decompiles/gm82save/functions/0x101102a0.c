// rea decompile_all
// name: FUN_101102a0
// address: 0x101102a0
// body: available
// range: 0x101102a0-0x10110576 inclusive
// range: 0x10110580-0x101105bd inclusive
// range: 0x101105c0-0x101107ba inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_101102a0(byte *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint local_50;
  int local_44;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;

  bVar3 = *(byte *)(param_2 + 7);
  if (bVar3 == 3) goto LAB_101102c0;
  iVar6 = param_2[4];
  local_50 = param_2[1];
  bVar4 = *(byte *)((int)param_2 + 0x1e);
  iVar12 = param_2[6] + 1;
  if (param_2[6] == 0) {
    iVar12 = 0;
  }
  bVar5 = *(byte *)(param_2 + 2);
  uVar13 = (uint)bVar5;
  iVar1 = iVar6 + 2 + iVar12;
  iVar12 = iVar6 + 8 + iVar12;
  bVar10 = *(byte *)((int)param_2 + 0x1d);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      if (bVar10 != 3) {
        do {
          do {
            while (bVar10 != 1) {
              if (bVar10 != 2) goto LAB_101106b9;
              uVar8 = FUN_1010b3c0(param_2);
              switch(uVar13) {
              case 0:
              case 3:
                iVar11 = iVar6 + 4;
                break;
              case 1:
                iVar11 = iVar12;
                break;
              case 2:
                iVar11 = 6;
                break;
              case 4:
                iVar11 = iVar1;
                break;
              case 5:
                iVar11 = 2;
                break;
              default:
                iVar11 = 0;
              }
              if (iVar11 + (uint)bVar4 + (uVar8 & 0xff) < local_50) {
                FUN_1010b4c0((int *)&local_34,param_2);
                uVar8 = local_50 - local_34;
                *(undefined4 *)(param_1 + 0x18) = local_18;
                *(undefined8 *)(param_1 + 0x10) = local_20;
                *(undefined8 *)(param_1 + 8) = local_28;
                *(undefined8 *)param_1 = local_30;
                if (local_50 < local_34) goto LAB_1011077a;
                bVar3 = *param_1;
                param_2[1] = uVar8;
                bVar10 = 2;
                local_50 = uVar8;
                if (bVar3 != 0xff) {
                  return;
                }
              }
              else {
                *(undefined1 *)((int)param_2 + 0x1d) = 1;
                bVar10 = 1;
              }
            }
            *(undefined1 *)((int)param_2 + 0x1d) = 0;
            if ((bVar4 & 1) != 0) goto LAB_1011069e;
          } while ((uVar13 < 6) && (bVar10 = 0, (0x27U >> (uVar13 & 0x1f) & 1) != 0));
          if (uVar13 != 0xff) goto LAB_1011076c;
          uVar9 = FUN_1010b3c0(param_2);
          bVar10 = 0;
        } while ((char)uVar9 == '\0');
LAB_10110755:
        if (local_50 != 0) {
          param_2[1] = local_50 - 1;
          *param_1 = 7;
          return;
        }
        FUN_10136a50(0,0xffffffff,0,&PTR_s_C__Users_runneradmin__rustup_too_10159490);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      goto LAB_101102c0;
    }
    if ((bVar10 == 0) || (bVar10 == 3)) goto LAB_101102c0;
    while (bVar10 == 2) {
      uVar8 = FUN_1010b3c0(param_2);
      if ((uVar8 & 0xff) + (uint)bVar4 < local_50) {
        FUN_1010b4c0((int *)&local_34,param_2);
        local_14 = local_18;
        uVar8 = local_50 - local_34;
        *(undefined4 *)(param_1 + 0x18) = local_18;
        *(undefined8 *)(param_1 + 0x10) = local_20;
        *(undefined8 *)(param_1 + 8) = local_28;
        *(undefined8 *)param_1 = local_30;
        if (local_50 < local_34) goto LAB_1011077a;
        bVar3 = *param_1;
        bVar10 = 2;
        param_2[1] = uVar8;
        local_50 = uVar8;
        if (bVar3 != 0xff) {
          return;
        }
      }
      else {
        *(undefined1 *)((int)param_2 + 0x1d) = 1;
        bVar10 = 1;
      }
    }
    if (bVar10 == 1) {
      *(undefined1 *)((int)param_2 + 0x1d) = 0;
      if ((bVar4 & 1) != 0) {
LAB_1011069e:
        if (local_50 != 0) {
          param_2[1] = local_50 - 1;
          *param_1 = 6;
          return;
        }
        FUN_10136a50(0,0xffffffff,0,&PTR_s_C__Users_runneradmin__rustup_too_101594a0);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if ((5 < uVar13) || ((0x27U >> (uVar13 & 0x1f) & 1) == 0)) {
        if (uVar13 != 0xff) {
LAB_1011076c:
          *param_1 = 6;
          return;
        }
        uVar9 = FUN_1010b3c0(param_2);
        if ((char)uVar9 != '\0') goto LAB_10110755;
      }
      goto LAB_101102c0;
    }
  }
  else if ((bVar4 & 1) == 0) {
    if ((bVar10 < 2) || (bVar10 == 3)) goto LAB_101102c0;
    if (bVar10 == 2) {
      if (local_50 != 0) {
        FUN_1010b4c0((int *)&local_34,param_2);
        uVar8 = local_50 - local_34;
        *(undefined4 *)(param_1 + 0x18) = local_18;
        *(undefined8 *)(param_1 + 0x10) = local_20;
        *(undefined8 *)(param_1 + 8) = local_28;
        *(undefined8 *)param_1 = local_30;
        if (local_50 < local_34) goto LAB_1011077a;
        bVar3 = *param_1;
        param_2[1] = uVar8;
        if (bVar3 != 0xff) {
          return;
        }
        local_50 = uVar8;
        while (local_50 != 0) {
          FUN_1010b4c0((int *)&local_34,param_2);
          uVar8 = local_50 - local_34;
          *(undefined4 *)(param_1 + 0x18) = local_18;
          *(undefined8 *)(param_1 + 0x10) = local_20;
          *(undefined8 *)(param_1 + 8) = local_28;
          *(undefined8 *)param_1 = local_30;
          if (local_50 < local_34) goto LAB_1011077a;
          bVar3 = *param_1;
          param_2[1] = uVar8;
          local_50 = uVar8;
          if (bVar3 != 0xff) {
            return;
          }
        }
      }
      goto LAB_101106d1;
    }
  }
  else {
    if ((bVar10 < 2) || (bVar10 == 3)) goto LAB_101102c0;
    if (bVar10 == 2) {
      if (local_50 != 0) {
        FUN_1010b4c0((int *)&local_34,param_2);
        uVar8 = local_50 - local_34;
        *(undefined4 *)(param_1 + 0x18) = local_18;
        *(undefined8 *)(param_1 + 0x10) = local_20;
        *(undefined8 *)(param_1 + 8) = local_28;
        *(undefined8 *)param_1 = local_30;
        if (local_50 < local_34) {
LAB_1011077a:
          FUN_10136a50(0,uVar8,local_50,&PTR_s_C__Users_runneradmin__rustup_too_101594b0);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        bVar3 = *param_1;
        param_2[1] = uVar8;
        if (bVar3 != 0xff) {
          return;
        }
        local_50 = uVar8;
        while (local_50 != 0) {
          FUN_1010b4c0((int *)&local_34,param_2);
          uVar8 = local_50 - local_34;
          *(undefined4 *)(param_1 + 0x18) = local_18;
          *(undefined8 *)(param_1 + 0x10) = local_20;
          *(undefined8 *)(param_1 + 8) = local_28;
          *(undefined8 *)param_1 = local_30;
          if (local_50 < local_34) goto LAB_1011077a;
          bVar3 = *param_1;
          param_2[1] = uVar8;
          local_50 = uVar8;
          if (bVar3 != 0xff) {
            return;
          }
        }
      }
LAB_101106d1:
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
      goto LAB_101102c0;
    }
  }
LAB_101106b9:
  local_44 = iVar6 + 4;
  switch(uVar13) {
  case 0:
  case 3:
    break;
  case 1:
    local_44 = iVar12;
    break;
  case 2:
  case 5:
    goto switchD_101106c9_caseD_2;
  case 4:
    local_44 = iVar1;
    break;
  default:
    goto switchD_101106c9_default;
  }
  if (local_44 != 0) {
switchD_101106c9_caseD_2:
    *(undefined1 *)((int)param_2 + 0x1d) = 3;
    uVar2 = *(undefined8 *)((int)param_2 + 0x11);
    iVar12 = *param_2;
    *(int *)(param_1 + 0x10) = param_2[6];
    *(undefined8 *)(param_1 + 9) = uVar2;
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)((int)param_2 + 9);
    *param_1 = bVar5;
    *(int *)(param_1 + 0x14) = iVar12;
    *(uint *)(param_1 + 0x18) = local_50;
    return;
  }
switchD_101106c9_default:
  *(undefined1 *)((int)param_2 + 0x1d) = 3;
LAB_101102c0:
  *param_1 = 0xff;
  return;
}
