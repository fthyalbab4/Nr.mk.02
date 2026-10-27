// rea decompile_all
// name: FUN_100f41a0
// address: 0x100f41a0
// body: available
// range: 0x100f41a0-0x100f48c2 inclusive
// range: 0x100f48cb-0x100f4b84 inclusive
// range: 0x100f4cb7-0x100f4cd2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100f41a0(int *param_1,int *param_2,int *param_3)

{
  SIZE_T *pSVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  SIZE_T _Size;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  LPVOID pvVar10;
  undefined4 uVar11;
  HANDLE pvVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  SIZE_T SVar17;
  uint *lpMem;
  bool bVar18;
  int local_188;
  uint local_174;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int local_124;
  uint uStack_120;
  undefined8 local_11c;
  undefined8 local_114;
  int local_10c;
  int iStack_108;
  LPVOID local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  int iStack_e8;
  uint local_e4;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48 [7];
  undefined4 local_2c [7];

  uVar9 = FUN_100f0c40(param_2);
  if (uVar9 != 0x7b) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_101544d4);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  local_dc = 0x100f41b5;
  iVar3 = *param_2;
  uVar4 = *(undefined4 *)(iVar3 + 0x58);
  iVar5 = param_3[2];
  pSVar1 = (SIZE_T *)(iVar3 + 0x50);
  uVar2 = *(undefined8 *)(iVar3 + 0x50);
  if (iVar5 == 0) {
    uStack_154 = *(undefined4 *)(iVar3 + 0x58);
    uStack_15c = (undefined4)*(undefined8 *)pSVar1;
    uStack_158 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
    local_160 = *(undefined4 *)(iVar3 + 0x58);
    local_168 = *(undefined8 *)pSVar1;
    SVar17 = param_2[2];
    if (SVar17 == 0) {
      pvVar10 = (LPVOID)0x1;
    }
    else {
      pvVar6 = (void *)param_2[1];
      pvVar10 = FUN_10107380(0,SVar17);
      if (pvVar10 == (LPVOID)0x0) {
LAB_100f4cb7:
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      memcpy(pvVar10,pvVar6,SVar17);
    }
    iVar3 = *param_3;
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_154,uStack_158);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_15c,local_160);
    *(undefined8 *)(param_1 + 10) = local_168;
    *param_1 = 0x1b;
    param_1[7] = SVar17;
    param_1[8] = (int)pvVar10;
    param_1[9] = SVar17;
    if (iVar3 == 0) {
      return;
    }
    lpMem = (uint *)param_3[1];
    goto LAB_100f44fd;
  }
  iVar15 = iVar5 + -1;
  param_3[2] = iVar15;
  lpMem = (uint *)param_3[1];
  uVar9 = lpMem[iVar5 * 2 + -2];
  local_bc = lpMem[iVar5 * 2 + -1];
  local_c0 = uVar9;
  if (uVar9 < 2) {
    uStack_154 = *(undefined4 *)(iVar3 + 0x58);
    uStack_15c = (undefined4)*(undefined8 *)pSVar1;
    uStack_158 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
    local_160 = *(undefined4 *)(iVar3 + 0x58);
    local_168 = *(undefined8 *)pSVar1;
    SVar17 = param_2[2];
    if (SVar17 == 0) {
      pvVar10 = (LPVOID)0x1;
    }
    else {
      pvVar6 = (void *)param_2[1];
      pvVar10 = FUN_10107380(0,SVar17);
      if (pvVar10 == (LPVOID)0x0) goto LAB_100f4cb7;
      memcpy(pvVar10,pvVar6,SVar17);
    }
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_154,uStack_158);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_15c,local_160);
    *(undefined8 *)(param_1 + 10) = local_168;
    *param_1 = 0x1b;
    param_1[7] = SVar17;
    param_1[8] = (int)pvVar10;
    param_1[9] = SVar17;
    goto LAB_100f44d0;
  }
  local_e4 = local_bc;
  local_e0 = iVar5;
  uVar11 = FUN_100f1250(param_2);
  if ((char)uVar11 == '\0') {
    SVar17 = param_2[2];
LAB_100f43bc:
    uStack_154 = *(undefined4 *)(iVar3 + 0x58);
    uStack_15c = (undefined4)*(undefined8 *)pSVar1;
    uStack_158 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
    if (SVar17 == 0) {
      pvVar10 = (LPVOID)0x1;
      local_168 = uVar2;
      local_160 = uVar4;
    }
    else {
      pvVar6 = (void *)param_2[1];
      local_168 = uVar2;
      local_160 = uVar4;
      pvVar10 = FUN_10107380(0,SVar17);
      if (pvVar10 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      memcpy(pvVar10,pvVar6,SVar17);
    }
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_154,uStack_158);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_15c,local_160);
    *(undefined8 *)(param_1 + 10) = local_168;
    *param_1 = 0x1a;
    param_1[7] = SVar17;
    param_1[8] = (int)pvVar10;
    param_1[9] = SVar17;
  }
  else {
    FUN_100f0910(param_2);
    SVar17 = *pSVar1;
    _Size = param_2[2];
    if (SVar17 == _Size) goto LAB_100f43bc;
    FUN_100f6290((undefined4 *)&local_168,param_2);
    local_48[0] = 5;
    local_2c[0] = 0x19;
    FUN_100f6790(&local_124,(int *)&local_168,local_48,(undefined8 *)local_2c);
    if (*pSVar1 == _Size) {
      uStack_154 = *(undefined4 *)(iVar3 + 0x58);
      uStack_15c = (undefined4)*(undefined8 *)pSVar1;
      uStack_158 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
      if (_Size == 0) {
        pvVar10 = (LPVOID)0x1;
        local_168 = uVar2;
        local_160 = uVar4;
      }
      else {
        pvVar6 = (void *)param_2[1];
        local_168 = uVar2;
        local_160 = uVar4;
        pvVar10 = FUN_10107380(0,_Size);
        if (pvVar10 == (LPVOID)0x0) goto LAB_100f4cb7;
        memcpy(pvVar10,pvVar6,_Size);
      }
      *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_154,uStack_158);
      *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_15c,local_160);
      *(undefined8 *)(param_1 + 10) = local_168;
      *param_1 = 0x1a;
      param_1[7] = _Size;
      param_1[8] = (int)pvVar10;
      param_1[9] = _Size;
LAB_100f467e:
      if (local_124 != -1) {
LAB_100f468d:
        if (iStack_108 != 0) {
          pvVar12 = GetProcessHeap();
          HeapFree(pvVar12,0,local_104);
        }
      }
    }
    else {
      uVar13 = FUN_100f0c40(param_2);
      if (uVar13 == 0x2c) {
        uVar11 = FUN_100f1250(param_2);
        if (((char)uVar11 == '\0') || (FUN_100f0910(param_2), *pSVar1 == _Size)) {
          uStack_a4 = *(undefined4 *)(iVar3 + 0x58);
          uStack_ac = (undefined4)*(undefined8 *)pSVar1;
          uStack_a8 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
          local_b8 = uVar2;
          local_b0 = uVar4;
          FUN_1002c180((SIZE_T *)(param_1 + 7),(void *)param_2[1],_Size);
          *param_1 = 0x1a;
          *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_ac,local_b0);
          *(undefined8 *)(param_1 + 10) = local_b8;
          *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_a4,uStack_a8);
          goto LAB_100f467e;
        }
        uVar14 = FUN_100f0c40(param_2);
        pvVar10 = local_104;
        uVar13 = uStack_120;
        if (uVar14 == 0x7d) {
          if (local_124 == -1) {
            local_188 = -1;
            bVar8 = false;
            bVar18 = false;
            SVar17 = *pSVar1;
            goto joined_r0x100f48ed;
          }
          *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_f0,local_f4);
          *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_f8,local_fc);
          *(ulonglong *)(param_1 + 0xe) = CONCAT44(iStack_e8,local_ec);
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_100,local_104);
          *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_108,local_10c);
          *(undefined8 *)(param_1 + 4) = local_114;
          *(undefined8 *)(param_1 + 2) = local_11c;
          *param_1 = local_124;
          param_1[1] = uStack_120;
        }
        else {
          bVar18 = local_124 == -1;
          if (bVar18) {
LAB_100f4909:
            local_188 = local_124;
            FUN_100f6290((undefined4 *)&local_168,param_2);
            FUN_100f6790(&local_88,(int *)&local_168,local_48,(undefined8 *)local_2c);
            if (local_88 == -1) {
              bVar8 = true;
              SVar17 = *pSVar1;
              local_174 = local_84;
              goto joined_r0x100f48ed;
            }
            *(undefined8 *)(param_1 + 0xc) = local_58;
            *(undefined8 *)(param_1 + 10) = local_60;
            *(undefined8 *)(param_1 + 0xe) = local_50;
            *(undefined8 *)(param_1 + 8) = local_68;
            *(undefined8 *)(param_1 + 6) = local_70;
            *(undefined8 *)(param_1 + 4) = local_78;
            *(undefined8 *)(param_1 + 2) = local_80;
            *param_1 = local_88;
            param_1[1] = local_84;
            goto LAB_100f4af3;
          }
          if (local_124 == 0x19) {
            if (*(char *)(iVar3 + 0x67) != '\0') {
              uVar13 = 0;
              if (iStack_108 != 0) {
                pvVar12 = GetProcessHeap();
                HeapFree(pvVar12,0,pvVar10);
              }
              goto LAB_100f4909;
            }
            param_1[6] = local_10c;
            *(undefined8 *)(param_1 + 2) = local_11c;
            *(undefined8 *)(param_1 + 4) = local_114;
            *(ulonglong *)param_1 = CONCAT44(uStack_120,0x19);
            *(ulonglong *)(param_1 + 9) = CONCAT44(local_fc,uStack_100);
            *(ulonglong *)(param_1 + 0xb) = CONCAT44(local_f4,uStack_f8);
            param_1[0xf] = iStack_e8;
            *(ulonglong *)(param_1 + 0xd) = CONCAT44(local_ec,uStack_f0);
            param_1[7] = iStack_108;
            param_1[8] = (int)local_104;
          }
          else {
            *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_f0,local_f4);
            *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_f8,local_fc);
            *(ulonglong *)(param_1 + 0xe) = CONCAT44(iStack_e8,local_ec);
            *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_100,local_104);
            *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_108,local_10c);
            *(undefined8 *)(param_1 + 4) = local_114;
            *(undefined8 *)(param_1 + 2) = local_11c;
            *param_1 = local_124;
            param_1[1] = uStack_120;
          }
        }
      }
      else {
        if (local_124 != -1) {
          *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_f0,local_f4);
          *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_f8,local_fc);
          *(ulonglong *)(param_1 + 0xe) = CONCAT44(iStack_e8,local_ec);
          *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_100,local_104);
          *(ulonglong *)(param_1 + 6) = CONCAT44(iStack_108,local_10c);
          *(undefined8 *)(param_1 + 4) = local_114;
          *(undefined8 *)(param_1 + 2) = local_11c;
          *param_1 = local_124;
          param_1[1] = uStack_120;
          goto LAB_100f44d0;
        }
        bVar8 = false;
        local_188 = -1;
        bVar18 = false;
        SVar17 = *pSVar1;
        uVar13 = uStack_120;
joined_r0x100f48ed:
        if ((SVar17 == _Size) || (uVar14 = FUN_100f0c40(param_2), uVar14 != 0x7d)) {
          uStack_8c = *(undefined4 *)(iVar3 + 0x58);
          uStack_94 = (undefined4)*(undefined8 *)pSVar1;
          uStack_90 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
          local_a0 = uVar2;
          local_98 = uVar4;
          FUN_1002c180((SIZE_T *)(param_1 + 7),(void *)param_2[1],_Size);
          *param_1 = 0x1a;
          *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_94,local_98);
          *(undefined8 *)(param_1 + 10) = local_a0;
          *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_8c,uStack_90);
          if (!bVar8) goto LAB_100f44d0;
        }
        else {
          uVar11 = FUN_100f69c0(param_2);
          if (((char)uVar11 != '\0') && (uVar14 = FUN_100f0c40(param_2), uVar14 == 0x3f)) {
            FUN_100f1250(param_2);
          }
          local_c4 = *(undefined4 *)(iVar3 + 0x58);
          uStack_cc = (undefined4)*(undefined8 *)pSVar1;
          uStack_c8 = (undefined4)((ulonglong)*(undefined8 *)pSVar1 >> 0x20);
          local_d8 = uVar2;
          local_d0 = uVar4;
          if (!(bool)(bVar8 & local_174 < uVar13)) {
                    /* WARNING: Could not recover jumptable at 0x100f48c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(local_dc + *(int *)(&DAT_100f4cd4 + (uVar9 - 2) * 4)))();
            return;
          }
          FUN_1002c180((SIZE_T *)(param_1 + 7),(void *)param_2[1],_Size);
          *(ulonglong *)(param_1 + 0xe) = CONCAT44(local_c4,uStack_c8);
          *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_cc,local_d0);
          *(undefined8 *)(param_1 + 10) = local_d8;
          *param_1 = 0x18;
        }
LAB_100f4af3:
        if (bVar18 && local_188 != -1) goto LAB_100f468d;
      }
    }
  }
LAB_100f44d0:
  FUN_100f4d00(&local_c0);
  puVar16 = lpMem;
  for (; iVar15 != 0; iVar15 = iVar15 + -1) {
    FUN_100f4d00(puVar16);
    puVar16 = puVar16 + 2;
  }
LAB_100f44fd:
  pvVar12 = GetProcessHeap();
  HeapFree(pvVar12,0,lpMem);
  return;
}
