// rea decompile_all
// name: FUN_10027710
// address: 0x10027710
// body: available
// range: 0x10027710-0x10027787 inclusive
// range: 0x10027790-0x10027816 inclusive
// range: 0x10027820-0x100278bc inclusive
// range: 0x100278c0-0x10027ad5 inclusive
// range: 0x10027ae0-0x10027b85 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10027710(int *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined4 *param_7)

{
  uint *puVar1;
  int *piVar2;
  LPVOID pvVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  HANDLE pvVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  uint *puVar12;
  int *unaff_ESI;
  int local_ac;
  int local_a4;
  int *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  int *local_70;
  int local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint *local_34;
  uint *local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;

  uVar10 = param_2 >> 1;
  local_7c = param_4;
  local_78 = param_5;
  local_60 = param_2;
  if (uVar10 < param_5) {
LAB_10027750:
    local_64 = param_6[1];
    if ((uint)param_6[3] < (uint)param_6[1]) {
      local_64 = param_6[3];
    }
    if (local_64 != 0) {
      local_68 = *param_6;
      bVar5 = false;
      local_6c = param_6[2];
      uVar10 = 0;
      local_74 = *param_7;
      local_70 = (int *)param_7[1];
      do {
        iVar9 = *(int *)(local_68 + uVar10 * 4);
        piVar6 = unaff_ESI;
        if (iVar9 != 0) {
          puVar12 = *(uint **)(iVar9 + 0x2f4);
          puVar1 = *(uint **)(iVar9 + 0x2f0);
          local_54 = (uint *)*local_70;
          if (puVar12 == (uint *)0x0) {
            puVar12 = (uint *)&DAT_00000004;
          }
          local_50 = local_6c + uVar10 * 4;
          local_5c = puVar12;
          local_58 = puVar1;
          piVar6 = FUN_100be180();
          if (piVar6 == (int *)0x0) goto LAB_10027b7a;
          if (*piVar6 == 0) {
            piVar6 = FUN_100c0800();
          }
          else {
            piVar6 = (int *)(*piVar6 + 0x8c);
          }
          uVar7 = (uint)(puVar1 == (uint *)0xffffffff);
          if ((uint)(puVar1 == (uint *)0xffffffff) < *(uint *)(*piVar6 + 0x104)) {
            uVar7 = *(uint *)(*piVar6 + 0x104);
          }
          FUN_1002a490((int *)&local_98,(uint)puVar1,'\0',uVar7,1,(int)puVar12,(uint)puVar1,local_74
                       ,&local_54);
          iVar4 = local_90;
          iVar9 = local_94;
          piVar6 = local_98;
          if (bVar5) {
            if (local_ac == 0) {
              local_ac = local_94;
              local_a4 = local_90;
              pcVar11 = GetProcessHeap_exref;
              if (unaff_ESI != (int *)0x0) {
                do {
                  piVar2 = (int *)unaff_ESI[3];
                  if (piVar2 != (int *)0x0) {
                    piVar2[4] = 0;
                  }
                  if (*unaff_ESI != 0) {
                    pvVar3 = (LPVOID)unaff_ESI[1];
                    pvVar8 = GetProcessHeap();
                    pcVar11 = GetProcessHeap_exref;
                    HeapFree(pvVar8,0,pvVar3);
                  }
                  pvVar8 = (HANDLE)(*pcVar11)();
                  HeapFree(pvVar8,0,unaff_ESI);
                  unaff_ESI = piVar2;
                } while (piVar2 != (int *)0x0);
                goto LAB_100277a3;
              }
            }
            else {
              piVar6 = unaff_ESI;
              if (local_98 != (int *)0x0) {
                *(int **)(local_ac + 0xc) = local_98;
                local_98[4] = local_ac;
                local_ac = local_94;
                local_a4 = local_a4 + local_90;
              }
            }
          }
          else {
LAB_100277a3:
            local_a4 = iVar4;
            local_ac = iVar9;
          }
          bVar5 = true;
        }
        uVar10 = uVar10 + 1;
        unaff_ESI = piVar6;
      } while (uVar10 != local_64);
      if (bVar5) {
        *param_1 = (int)piVar6;
        param_1[1] = local_ac;
        param_1[2] = local_a4;
        return;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_10027750;
    local_7c = param_4 >> 1;
  }
  else {
    piVar6 = FUN_100be180();
    if (piVar6 == (int *)0x0) goto LAB_10027b7a;
    if (*piVar6 == 0) {
      piVar6 = FUN_100c0800();
    }
    else {
      piVar6 = (int *)(*piVar6 + 0x8c);
    }
    local_7c = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar6 + 0x104)) {
      local_7c = *(uint *)(*piVar6 + 0x104);
    }
  }
  local_4c = param_6[1] - uVar10;
  local_80 = uVar10;
  if (((uint)param_6[1] < uVar10) || (local_44 = param_6[3] - uVar10, (uint)param_6[3] < uVar10)) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  local_5c = &local_60;
  local_58 = &local_80;
  local_54 = &local_7c;
  local_2c = *param_6;
  local_50 = local_2c + uVar10 * 4;
  local_24 = param_6[2];
  local_38 = param_7[2];
  local_48 = local_24 + uVar10 * 4;
  local_40 = *param_7;
  local_3c = param_7[1];
  local_34 = &local_80;
  local_30 = &local_7c;
  local_28 = uVar10;
  local_20 = uVar10;
  local_1c = local_40;
  local_18 = local_3c;
  local_14 = local_38;
  piVar6 = FUN_100be180();
  if (piVar6 == (int *)0x0) {
LAB_10027b7a:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  iVar9 = *piVar6;
  if (iVar9 == 0) {
    piVar6 = FUN_100c0800();
    iVar4 = *piVar6;
    piVar6 = FUN_100be180();
    if (piVar6 == (int *)0x0) goto LAB_10027b7a;
    iVar9 = *piVar6;
    if (iVar9 == 0) {
      FUN_1012ed30((undefined8 *)&local_98,(uint *)(iVar4 + 0x40),&local_5c);
      goto LAB_10027a8e;
    }
    if (*(int *)(iVar9 + 0x8c) != iVar4) {
      FUN_101313c0((undefined8 *)&local_98,(uint *)(iVar4 + 0x40),iVar9,&local_5c);
      goto LAB_10027a8e;
    }
  }
  FUN_10035e90(&local_98,(undefined8 *)&local_5c,iVar9,0);
LAB_10027a8e:
  if (local_94 == 0) {
    *param_1 = local_8c;
    param_1[1] = local_88;
    param_1[2] = local_84;
    pcVar11 = HeapFree_exref;
    piVar6 = local_98;
    while (piVar6 != (int *)0x0) {
      piVar2 = (int *)piVar6[3];
      if (piVar2 != (int *)0x0) {
        piVar2[4] = 0;
      }
      if (*piVar6 != 0) {
        pvVar3 = (LPVOID)piVar6[1];
        pvVar8 = GetProcessHeap();
        pcVar11 = HeapFree_exref;
        HeapFree(pvVar8,0,pvVar3);
      }
      pvVar8 = GetProcessHeap();
      (*pcVar11)(pvVar8,0,piVar6);
      piVar6 = piVar2;
    }
  }
  else {
    if (local_8c != 0) {
      local_90 = local_90 + local_84;
      *(int *)(local_94 + 0xc) = local_8c;
      *(int *)(local_8c + 0x10) = local_94;
      local_94 = local_88;
    }
    *param_1 = (int)local_98;
    param_1[1] = local_94;
    param_1[2] = local_90;
  }
  return;
}
