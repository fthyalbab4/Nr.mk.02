// rea decompile_all
// name: FUN_10028020
// address: 0x10028020
// body: available
// range: 0x10028020-0x10028085 inclusive
// range: 0x10028090-0x1002832b inclusive
// range: 0x10028330-0x1002836a inclusive
// range: 0x10028370-0x1002838b inclusive
// range: 0x10028390-0x10028438 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10028020(int *param_1,uint param_2,char param_3,uint param_4,uint param_5,int *param_6,
            undefined4 param_7)

{
  SIZE_T _Size;
  void *_Src;
  int iVar1;
  int *piVar2;
  LPVOID lpMem;
  code *pcVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  LPVOID pvVar7;
  int *piVar8;
  HANDLE pvVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  SIZE_T *pSVar13;
  uint uVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined8 local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  uint *local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  uint *local_44;
  uint *local_40;
  int local_3c;
  uint local_38;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;

  uVar11 = param_2 >> 1;
  local_20 = param_5;
  local_2c = param_2;
  if (uVar11 < param_5) {
LAB_1002804a:
    uVar11 = param_6[1];
    uVar12 = param_6[2];
    local_60 = 0x400000000;
    local_58 = (uint *)0x0;
    uVar14 = (uVar12 + uVar11) - uVar12;
    if (uVar12 + uVar11 < uVar12) {
      uVar14 = 0;
    }
    if (uVar11 < uVar14) {
      uVar14 = uVar11;
    }
    if (uVar14 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    pSVar13 = (SIZE_T *)(*param_6 + 8);
    do {
      _Size = *pSVar13;
      puVar6 = &local_60;
      if (_Size != 0) {
        _Src = (void *)pSVar13[-1];
        pvVar7 = FUN_10107380(0,_Size);
        if (pvVar7 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        memcpy(pvVar7,_Src,_Size);
        puVar5 = local_58;
        local_78 = local_60;
        uVar4 = local_78;
        local_70 = (uint)local_58;
        local_78._0_4_ = (int *)local_60;
        bVar16 = local_58 == (uint *)(int *)local_78;
        local_78 = uVar4;
        if (bVar16) {
          FUN_10135f30((uint *)&local_78);
        }
        iVar10 = (int)puVar5 * 0x10;
        *(SIZE_T *)(local_78._4_4_ + iVar10) = _Size;
        *(LPVOID *)(local_78._4_4_ + 4 + iVar10) = pvVar7;
        *(SIZE_T *)(local_78._4_4_ + 8 + iVar10) = _Size;
        *(uint *)(local_78._4_4_ + 0xc + iVar10) = uVar12;
        local_70 = (int)puVar5 + 1;
        puVar6 = &local_78;
      }
      uVar11 = *(uint *)(puVar6 + 1);
      local_60 = *puVar6;
      pSVar13 = pSVar13 + 3;
      uVar12 = uVar12 + 1;
      uVar14 = uVar14 - 1;
      uVar4 = local_60;
      local_58 = (uint *)uVar11;
    } while (uVar14 != 0);
    iVar10 = (int)local_60;
    local_60._4_4_ = (LPVOID)((ulonglong)local_60 >> 0x20);
    pvVar7 = local_60._4_4_;
    local_60 = uVar4;
    if (uVar11 != 0) {
      piVar8 = FUN_10107380(0,0x14);
      if (piVar8 != (int *)0x0) {
        *piVar8 = iVar10;
        piVar8[1] = (int)pvVar7;
        piVar8[2] = uVar11;
        piVar8[3] = 0;
        piVar8[4] = 0;
        *param_1 = (int)piVar8;
        param_1[1] = (int)piVar8;
        param_1[2] = 1;
        return;
      }
      FUN_1013679e(4,0x14);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((int)local_60 == 0) {
      return;
    }
    pvVar9 = GetProcessHeap();
    HeapFree(pvVar9,0,pvVar7);
    return;
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_1002804a;
    local_24 = param_4 >> 1;
  }
  else {
    piVar8 = FUN_100be180();
    if (piVar8 == (int *)0x0) goto LAB_1002842d;
    if (*piVar8 == 0) {
      piVar8 = FUN_100c0800();
    }
    else {
      piVar8 = (int *)(*piVar8 + 0x8c);
    }
    local_24 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar8 + 0x104)) {
      local_24 = *(uint *)(*piVar8 + 0x104);
    }
  }
  local_50 = param_6[1] - uVar11;
  local_28 = uVar11;
  if ((uint)param_6[1] < uVar11) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_101438c0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_3c = *param_6;
  local_34 = param_6[2];
  local_58 = &local_24;
  local_44 = &local_28;
  local_60 = CONCAT44(local_44,&local_2c);
  local_54 = local_3c + uVar11 * 0xc;
  local_4c = local_34 + uVar11;
  local_48 = param_7;
  local_30 = param_7;
  local_40 = local_58;
  local_38 = uVar11;
  piVar8 = FUN_100be180();
  if (piVar8 == (int *)0x0) {
LAB_1002842d:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  iVar10 = *piVar8;
  if (iVar10 == 0) {
    piVar8 = FUN_100c0800();
    iVar1 = *piVar8;
    piVar8 = FUN_100be180();
    if (piVar8 == (int *)0x0) goto LAB_1002842d;
    iVar10 = *piVar8;
    if (iVar10 == 0) {
      FUN_1012ef00(&local_78,(uint *)(iVar1 + 0x40),&local_60);
      goto LAB_100282e0;
    }
    if (*(int *)(iVar10 + 0x8c) != iVar1) {
      FUN_10131560(&local_78,(uint *)(iVar1 + 0x40),iVar10,&local_60);
      goto LAB_100282e0;
    }
  }
  FUN_10036eb0((undefined4 *)&local_78,&local_60,iVar10,0);
LAB_100282e0:
  if (local_78._4_4_ == 0) {
    *param_1 = local_6c;
    param_1[1] = local_68;
    param_1[2] = local_64;
    piVar8 = (int *)local_78;
    while (piVar8 != (int *)0x0) {
      piVar2 = (int *)piVar8[3];
      if (piVar2 != (int *)0x0) {
        piVar2[4] = 0;
      }
      pvVar7 = (LPVOID)piVar8[1];
      iVar10 = piVar8[2];
      if (iVar10 != 0) {
        puVar15 = (undefined4 *)((int)pvVar7 + 4);
        do {
          if (puVar15[-1] != 0) {
            lpMem = (LPVOID)*puVar15;
            pvVar9 = GetProcessHeap();
            HeapFree(pvVar9,0,lpMem);
          }
          puVar15 = puVar15 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (*piVar8 != 0) {
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,pvVar7);
      }
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,piVar8);
      piVar8 = piVar2;
    }
  }
  else {
    if (local_6c != 0) {
      local_70 = local_70 + local_64;
      *(int *)(local_78._4_4_ + 0xc) = local_6c;
      *(int *)(local_6c + 0x10) = local_78._4_4_;
      local_78._4_4_ = local_68;
    }
    *param_1 = (int)(int *)local_78;
    param_1[1] = local_78._4_4_;
    param_1[2] = local_70;
  }
  return;
}
