// rea decompile_all
// name: FUN_100da120
// address: 0x100da120
// body: available
// range: 0x100da120-0x100da294 inclusive
// range: 0x100da2a0-0x100da582 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100da120(uint *param_1,int param_2,int *param_3,char param_4,uint param_5,uint param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int iStack_60;
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
  uint local_34;
  uint uStack_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int *local_20;
  undefined4 local_1c;
  uint local_18;

  local_1c = 0;
  local_18 = param_5;
  local_20 = param_3;
  local_24 = param_2;
  FUN_100da590((int *)&local_70,param_2,&local_24);
  uVar7 = local_68;
  if (local_70 != 0xfffffffe) {
    *(ulonglong *)(param_1 + 0xb) = CONCAT44(uStack_40,local_44);
    *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_48,local_4c);
    param_1[0xf] = local_34;
    *(ulonglong *)(param_1 + 0xd) = CONCAT44(uStack_38,local_3c);
    *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_50,local_54);
    *(ulonglong *)(param_1 + 3) = CONCAT44(iStack_60,local_64);
    *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_58,local_5c);
    *param_1 = local_70;
    param_1[1] = local_6c;
    param_1[2] = local_68;
    return;
  }
  if (param_6 == param_5) {
    param_1[1] = local_6c;
    param_1[2] = local_68;
  }
  else {
    if (*(int *)(param_2 + 0x20) != 0) {
      FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152544);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    local_2c = local_6c;
    uVar2 = *(uint *)(param_2 + 0x3c);
    if (uVar2 == *(uint *)(param_2 + 0x34)) {
      FUN_10135f30((uint *)(param_2 + 0x34));
    }
    iVar4 = *(int *)(param_2 + 0x38);
    *(undefined4 *)(iVar4 + uVar2 * 0x10) = 0;
    *(undefined4 *)(iVar4 + 4 + uVar2 * 0x10) = 0;
    *(uint *)(param_2 + 0x3c) = uVar2 + 1;
    if ((*(int *)(param_2 + 0x2c) == 1) &&
       (uVar5 = *(uint *)(param_2 + 0x30), uVar5 < (uVar2 + 1) * 0x10 + *(int *)(param_2 + 0x58))) {
LAB_100da235:
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
      *param_1 = 0x26;
      param_1[1] = uVar5;
      return;
    }
    iVar4 = *(int *)(param_2 + 0x20) + 1;
    uVar5 = param_6 - param_5;
    *(int *)(param_2 + 0x20) = iVar4;
    puVar9 = param_1;
    if (param_5 <= param_6 && uVar5 != 0) {
      do {
        local_28 = uVar5;
        if (param_4 == '\0') {
          if (iVar4 != 0) {
            FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_101524d4);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
          puVar6 = *(uint **)(param_2 + 0x3c);
          if (puVar6 == *(uint **)(param_2 + 0x34)) {
            FUN_10135f30((uint *)(param_2 + 0x34));
          }
          iVar4 = *(int *)(param_2 + 0x38);
          uVar8 = 7;
        }
        else {
          if (iVar4 != 0) {
            FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152574);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
          puVar6 = *(uint **)(param_2 + 0x3c);
          if (puVar6 == *(uint **)(param_2 + 0x34)) {
            FUN_10135f30((uint *)(param_2 + 0x34));
          }
          iVar4 = *(int *)(param_2 + 0x38);
          uVar8 = 6;
        }
        puVar1 = (undefined4 *)(iVar4 + (int)puVar6 * 0x10);
        *puVar1 = uVar8;
        puVar1[1] = 0;
        puVar1[2] = 4;
        puVar1[3] = 0;
        *(int *)(param_2 + 0x3c) = (int)puVar6 + 1;
        if ((*(int *)(param_2 + 0x2c) == 1) &&
           (uVar5 = *(uint *)(param_2 + 0x30),
           uVar5 < (uint)(((int)puVar6 + 1) * 0x10 + *(int *)(param_2 + 0x58)))) goto LAB_100da235;
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        FUN_100d5890(param_3);
        if (local_6c != 0xfffffffe) {
          *(ulonglong *)(puVar9 + 0xb) = CONCAT44(local_3c,uStack_40);
          puVar9[0xf] = uStack_30;
          *(ulonglong *)(puVar9 + 9) = CONCAT44(local_44,uStack_48);
          *(ulonglong *)(puVar9 + 0xd) = CONCAT44(local_34,uStack_38);
          *(ulonglong *)(puVar9 + 7) = CONCAT44(local_4c,uStack_50);
          *(ulonglong *)(puVar9 + 3) = CONCAT44(local_5c,iStack_60);
          *(ulonglong *)(puVar9 + 5) = CONCAT44(local_54,uStack_58);
          *puVar9 = local_6c;
          puVar9[1] = local_68;
          puVar9[2] = local_64;
          return;
        }
        if (*(int *)(param_2 + 0x20) != 0) goto LAB_100da553;
        *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
        param_1 = puVar6;
        FUN_100d4cf0(&local_6c,param_2 + 0x24,uVar2);
        iVar4 = *(int *)(param_2 + 0x20) + 1;
        *(int *)(param_2 + 0x20) = iVar4;
        if (local_68 != 0xfffffffe) {
LAB_100da486:
          *(ulonglong *)(param_1 + 0xc) = CONCAT44(local_3c,uStack_40);
          *(ulonglong *)(param_1 + 10) = CONCAT44(local_44,uStack_48);
          *(ulonglong *)(param_1 + 0xe) = CONCAT44(local_34,uStack_38);
          *(ulonglong *)(param_1 + 8) = CONCAT44(local_4c,uStack_50);
          *(ulonglong *)(param_1 + 6) = CONCAT44(local_54,uStack_58);
          *(ulonglong *)(param_1 + 4) = CONCAT44(local_5c,iStack_60);
          *(ulonglong *)param_1 = CONCAT44(local_6c,local_70);
          *(ulonglong *)(param_1 + 2) = CONCAT44(local_64,local_68);
          return;
        }
        if (iVar4 != 0) goto LAB_100da553;
        *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
        param_1 = puVar6;
        FUN_100d4cf0(&local_68,param_2 + 0x24,(uint)puVar6);
        iVar4 = *(int *)(param_2 + 0x20) + 1;
        *(int *)(param_2 + 0x20) = iVar4;
        if (local_64 != 0xfffffffe) goto LAB_100da486;
        if (iVar4 != 0) goto LAB_100da553;
        *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
        puVar9 = (uint *)0x100da3a4;
        FUN_100d4cf0(&local_64,param_2 + 0x24,(uint)puVar6);
        iVar4 = *(int *)(param_2 + 0x20) + 1;
        *(int *)(param_2 + 0x20) = iVar4;
        if (iStack_60 != -2) goto LAB_100da42a;
        uVar5 = local_18 - 1;
        uVar7 = local_6c;
      } while (uVar5 != 0);
    }
    if (iVar4 != 0) {
LAB_100da553:
      FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152514);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    FUN_100d4cf0(&local_70,param_2 + 0x24,uVar7);
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
    if (local_6c != 0xfffffffe) {
LAB_100da42a:
      *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_38,local_3c);
      *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_40,local_44);
      *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_30,local_34);
      *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_48,local_4c);
      *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_50,local_54);
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_58,local_5c);
      *(ulonglong *)param_1 = CONCAT44(local_68,local_6c);
      *(ulonglong *)(param_1 + 2) = CONCAT44(iStack_60,local_64);
      return;
    }
    param_1[1] = local_28;
    param_1[2] = uVar2;
  }
  *param_1 = 0xfffffffe;
  return;
}
