// rea decompile_all
// name: FUN_100d4130
// address: 0x100d4130
// body: available
// range: 0x100d4130-0x100d4962 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100d4130(uint *param_1,int *param_2,int *param_3,char param_4,int param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  uint in_stack_ffffff8c;
  int *piVar10;
  int *local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *piStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_18;

  if (param_5 == 1) {
    FUN_100d5890(param_3);
    piVar3 = local_6c;
    piVar6 = local_68;
    piVar7 = local_64;
    if (local_6c != (int *)0xfffffffe) {
LAB_100d42ff:
      param_1[0xf] = uStack_30;
      *(ulonglong *)(param_1 + 0xd) = CONCAT44(local_34,uStack_38);
      *(ulonglong *)(param_1 + 0xb) = CONCAT44(local_3c,uStack_40);
      *(ulonglong *)(param_1 + 9) = CONCAT44(local_44,uStack_48);
      *(ulonglong *)(param_1 + 7) = CONCAT44(local_4c,uStack_50);
      *(ulonglong *)(param_1 + 5) = CONCAT44(local_54,uStack_58);
      *(ulonglong *)(param_1 + 3) = CONCAT44(local_5c,piStack_60);
      *param_1 = (uint)piVar3;
      param_1[1] = (uint)piVar6;
      param_1[2] = (uint)piVar7;
      return;
    }
    local_70 = local_68;
    piVar3 = local_64;
    if (param_4 == '\0') {
      if (param_2[8] != 0) goto LAB_100d4957;
      param_2[8] = -1;
      piVar6 = (int *)param_2[0xf];
      if (piVar6 == (int *)param_2[0xd]) {
        FUN_10135f30((uint *)(param_2 + 0xd));
      }
      iVar5 = param_2[0xe];
      uVar9 = 7;
    }
    else {
      if (param_2[8] != 0) goto LAB_100d494b;
      param_2[8] = -1;
      piVar6 = (int *)param_2[0xf];
      if (piVar6 == (int *)param_2[0xd]) {
        FUN_10135f30((uint *)(param_2 + 0xd));
      }
      iVar5 = param_2[0xe];
      uVar9 = 6;
    }
    puVar1 = (undefined4 *)(iVar5 + (int)piVar6 * 0x10);
    *puVar1 = uVar9;
    puVar1[1] = 0;
    puVar1[2] = 4;
    puVar1[3] = 0;
    param_2[0xf] = (int)piVar6 + 1U;
    if ((param_2[0xb] == 1) &&
       (uVar8 = param_2[0xc], uVar8 < ((int)piVar6 + 1U) * 0x10 + param_2[0x16])) {
LAB_100d4628:
      param_2[8] = param_2[8] + 1;
      *param_1 = 0x26;
      param_1[1] = uVar8;
      return;
    }
    piVar7 = param_2 + 8;
    *piVar7 = *piVar7 + 1;
    if (*piVar7 != 0) goto LAB_100d493f;
    param_2[8] = -1;
    FUN_100d4cf0(&local_6c,(int)(param_2 + 9),(uint)piVar3);
    iVar5 = param_2[8];
    param_2[8] = iVar5 + 1;
    if (local_68 != (int *)0xfffffffe) goto LAB_100d47e8;
    if (iVar5 + 1 != 0) goto LAB_100d493f;
    param_2[8] = -1;
    FUN_100d4cf0(&local_68,(int)(param_2 + 9),(uint)piVar6);
    param_2[8] = param_2[8] + 1;
  }
  else if (param_5 == 0) {
    if ((*(int *)param_3[6] == 1) && (((int *)param_3[6])[1] != 0)) {
      if (param_4 == '\0') {
        if (param_2[8] != 0) {
LAB_100d4957:
          FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_101524d4);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        param_2[8] = -1;
        iVar5 = param_2[0xf];
        if (iVar5 == param_2[0xd]) {
          FUN_10135f30((uint *)(param_2 + 0xd));
        }
        iVar4 = param_2[0xe];
        uVar9 = 7;
      }
      else {
        if (param_2[8] != 0) {
LAB_100d494b:
          FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152574);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        param_2[8] = -1;
        iVar5 = param_2[0xf];
        if (iVar5 == param_2[0xd]) {
          FUN_10135f30((uint *)(param_2 + 0xd));
        }
        iVar4 = param_2[0xe];
        uVar9 = 6;
      }
      puVar1 = (undefined4 *)(iVar4 + iVar5 * 0x10);
      *puVar1 = uVar9;
      puVar1[1] = 0;
      puVar1[2] = 4;
      puVar1[3] = 0;
      param_2[0xf] = iVar5 + 1;
      if ((param_2[0xb] == 1) &&
         (uVar8 = param_2[0xc], uVar8 < (uint)((iVar5 + 1) * 0x10 + param_2[0x16]))) {
        param_2[8] = param_2[8] + 1;
        *param_1 = 0x26;
        param_1[1] = uVar8;
        return;
      }
      param_2[8] = param_2[8] + 1;
      FUN_100d5890(param_3);
      piVar3 = local_64;
      if (local_6c != (int *)0xfffffffe) {
        *(ulonglong *)(param_1 + 0xb) = CONCAT44(local_3c,uStack_40);
        *(ulonglong *)(param_1 + 9) = CONCAT44(local_44,uStack_48);
        param_1[0xf] = uStack_30;
        *(ulonglong *)(param_1 + 0xd) = CONCAT44(local_34,uStack_38);
        *(ulonglong *)(param_1 + 7) = CONCAT44(local_4c,uStack_50);
        *(ulonglong *)(param_1 + 3) = CONCAT44(local_5c,piStack_60);
        *(ulonglong *)(param_1 + 5) = CONCAT44(local_54,uStack_58);
        *param_1 = (uint)local_6c;
        param_1[1] = (uint)local_68;
        param_1[2] = (uint)local_64;
        return;
      }
      if (param_2[8] != 0) {
LAB_100d493f:
        FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152514);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      param_2[8] = -1;
      FUN_100d4cf0(&local_6c,(int)(param_2 + 9),in_stack_ffffff8c);
      iVar5 = param_2[8];
      param_2[8] = iVar5 + 1;
      if (local_68 == (int *)0xfffffffe) {
        if (iVar5 + 1 != 0) goto LAB_100d493f;
        param_2[8] = -1;
        FUN_100d4cf0(&local_68,(int)(param_2 + 9),(uint)piVar3);
        param_2[8] = param_2[8] + 1;
        if (local_64 == (int *)0xfffffffe) {
          param_1[1] = (uint)local_6c;
          param_1[2] = (uint)local_6c;
          *param_1 = 0xfffffffe;
          return;
        }
      }
      goto LAB_100d47e8;
    }
    FUN_100d5890(param_3);
    piVar3 = local_6c;
    piVar6 = local_68;
    piVar7 = local_64;
    if (local_6c != (int *)0xfffffffe) goto LAB_100d42ff;
    local_70 = local_68;
    piVar3 = local_64;
    if (param_4 == '\0') {
      if (param_2[8] != 0) goto LAB_100d4957;
      param_2[8] = -1;
      piVar6 = (int *)param_2[0xf];
      if (piVar6 == (int *)param_2[0xd]) {
        FUN_10135f30((uint *)(param_2 + 0xd));
      }
      iVar5 = param_2[0xe];
      uVar9 = 7;
    }
    else {
      if (param_2[8] != 0) goto LAB_100d494b;
      param_2[8] = -1;
      piVar6 = (int *)param_2[0xf];
      if (piVar6 == (int *)param_2[0xd]) {
        FUN_10135f30((uint *)(param_2 + 0xd));
      }
      iVar5 = param_2[0xe];
      uVar9 = 6;
    }
    puVar1 = (undefined4 *)(iVar5 + (int)piVar6 * 0x10);
    *puVar1 = uVar9;
    puVar1[1] = 0;
    puVar1[2] = 4;
    puVar1[3] = 0;
    param_2[0xf] = (int)piVar6 + 1U;
    if ((param_2[0xb] == 1) &&
       (uVar8 = param_2[0xc], uVar8 < ((int)piVar6 + 1U) * 0x10 + param_2[0x16])) {
      param_2[8] = param_2[8] + 1;
      *param_1 = 0x26;
      param_1[1] = uVar8;
      return;
    }
    piVar7 = param_2 + 8;
    *piVar7 = *piVar7 + 1;
    if (*piVar7 != 0) goto LAB_100d493f;
    param_2[8] = -1;
    piStack_28 = piVar6;
    FUN_100d4cf0(&local_6c,(int)(param_2 + 9),(uint)piVar3);
    iVar5 = param_2[8];
    param_2[8] = iVar5 + 1;
    if (local_68 != (int *)0xfffffffe) goto LAB_100d47e8;
    if (iVar5 + 1 != 0) goto LAB_100d493f;
    param_2[8] = -1;
    FUN_100d4cf0(&local_68,(int)(param_2 + 9),(uint)local_24);
    param_2[8] = param_2[8] + 1;
    if (local_64 != (int *)0xfffffffe) goto LAB_100d47e8;
    if (param_4 == '\0') {
      local_70 = (int *)0x100d4757;
      FUN_100db640(&local_64,(int)param_2);
    }
    else {
      local_70 = (int *)0x100d4750;
      FUN_100db6c0(&local_64,(int)param_2);
    }
    if (local_64 != (int *)0xfffffffe) {
LAB_100d4847:
      *(ulonglong *)(param_1 + 0xe) = CONCAT44(piStack_28,uStack_2c);
      *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_30,local_34);
      *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_38,local_3c);
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_40,local_44);
      *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_48,local_4c);
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_50,local_54);
      *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_58,local_5c);
      *param_1 = (uint)local_64;
      param_1[1] = (uint)piStack_60;
      return;
    }
    local_6c = piStack_60;
    local_70 = (int *)0x100d4776;
    FUN_100db740(&local_64,(int)param_2);
    piVar3 = local_6c;
    if (local_64 != (int *)0xfffffffe) goto LAB_100d4847;
    local_1c = piStack_60;
    local_70 = local_68;
    FUN_100d4cb0(&local_64,(int)param_2,(uint)local_6c);
    piVar6 = local_1c;
    if (local_64 != (int *)0xfffffffe) goto LAB_100d47e8;
    local_70 = local_1c;
    FUN_100d4cb0(&local_64,(int)param_2,(uint)piVar3);
    if (local_64 != (int *)0xfffffffe) goto LAB_100d47e8;
    local_70 = piVar6;
    FUN_100d4cb0(&local_64,(int)param_2,(uint)local_20);
    local_68 = local_6c;
  }
  else {
    local_18 = param_5 + -1;
    local_1c = (int *)0x0;
    local_20 = param_3;
    local_24 = param_2;
    FUN_100da590((int *)&local_70,(int)param_2,&local_24);
    piVar3 = local_70;
    piVar6 = local_6c;
    piVar7 = local_68;
    if ((local_70 != (int *)0xfffffffe) ||
       (piVar10 = local_6c, FUN_100d5890(param_3), piVar3 = local_6c, piVar6 = local_68,
       piVar7 = local_64, local_6c != (int *)0xfffffffe)) goto LAB_100d42ff;
    local_24 = local_64;
    piStack_28 = local_68;
    if (param_4 == '\0') {
      if (param_2[8] != 0) goto LAB_100d4957;
      param_2[8] = -1;
      piVar6 = (int *)param_2[0xf];
      if (piVar6 == (int *)param_2[0xd]) {
        FUN_10135f30((uint *)(param_2 + 0xd));
      }
      iVar5 = param_2[0xe];
      uVar9 = 7;
    }
    else {
      if (param_2[8] != 0) goto LAB_100d494b;
      param_2[8] = -1;
      piVar6 = (int *)param_2[0xf];
      if (piVar6 == (int *)param_2[0xd]) {
        FUN_10135f30((uint *)(param_2 + 0xd));
      }
      iVar5 = param_2[0xe];
      uVar9 = 6;
    }
    puVar1 = (undefined4 *)(iVar5 + (int)piVar6 * 0x10);
    *puVar1 = uVar9;
    puVar1[1] = 0;
    puVar1[2] = 4;
    puVar1[3] = 0;
    param_2[0xf] = (int)piVar6 + 1U;
    if ((param_2[0xb] == 1) &&
       (uVar8 = param_2[0xc], uVar8 < ((int)piVar6 + 1U) * 0x10 + param_2[0x16])) goto LAB_100d4628;
    piVar3 = param_2 + 8;
    *piVar3 = *piVar3 + 1;
    if (*piVar3 != 0) goto LAB_100d493f;
    param_2[8] = -1;
    FUN_100d4cf0(&local_6c,(int)(param_2 + 9),(uint)piVar10);
    iVar5 = param_2[8];
    param_2[8] = iVar5 + 1;
    if (local_68 != (int *)0xfffffffe) goto LAB_100d47e8;
    if (iVar5 + 1 != 0) goto LAB_100d493f;
    param_2[8] = -1;
    FUN_100d4cf0(&local_68,(int)(param_2 + 9),(uint)local_20);
    param_2[8] = param_2[8] + 1;
    if (local_64 != (int *)0xfffffffe) goto LAB_100d47e8;
    local_70 = local_20;
    FUN_100d4cb0(&local_64,(int)param_2,(uint)piVar6);
  }
  if (local_64 == (int *)0xfffffffe) {
    param_1[1] = (uint)local_68;
    param_1[2] = (uint)piVar6;
    *param_1 = 0xfffffffe;
    return;
  }
LAB_100d47e8:
  *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_30,local_34);
  *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_38,local_3c);
  *(ulonglong *)(param_1 + 0xe) = CONCAT44(piStack_28,uStack_2c);
  *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_40,local_44);
  *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_48,local_4c);
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_50,local_54);
  *(ulonglong *)param_1 = CONCAT44(piStack_60,local_64);
  *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_58,local_5c);
  return;
}
