// rea decompile_all
// name: FUN_100d52a0
// address: 0x100d52a0
// body: available
// range: 0x100d52a0-0x100d5594 inclusive
// range: 0x100d55a0-0x100d5881 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100d52a0(int *param_1,uint param_2,uint param_3,void *param_4,uint param_5,int *param_6)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 unaff_ESI;
  uint uVar14;
  uint local_7c;
  int *local_78;
  undefined4 uStack_6c;
  uint local_68;
  uint local_64;
  int *local_60;
  uint *local_5c;
  int iStack_54;
  uint uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;

  bVar3 = *(byte *)(param_2 + 0xd);
  if (bVar3 < 2) {
    if ((bVar3 != 0) && (param_3 != 0)) {
LAB_100d52c5:
      FUN_100d5890(param_6);
      return;
    }
  }
  else if (bVar3 == 2) goto LAB_100d52c5;
  local_64 = param_3;
  if (param_4 == (void *)0x0) {
    local_78 = (int *)0x0;
    iVar7 = *(int *)(param_2 + 0x20);
  }
  else {
    local_60 = param_1;
    if (0x7ffffff4 < param_5) {
      FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,(int)&uStack_6c + 3,
                   &DAT_10143fa0,&PTR_s_C__Users_runneradmin__rustup_too_10144028);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar11 = param_5 + 0xb & 0x7ffffffc;
    local_78 = FUN_10107380(0,uVar11);
    if (local_78 == (int *)0x0) {
      FUN_1013679e(4,uVar11);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *local_78 = 1;
    local_78[1] = 1;
    memcpy(local_78 + 2,param_4,param_5);
    iVar7 = *(int *)(param_2 + 0x20);
    param_1 = local_60;
    local_7c = param_5;
  }
  local_60 = param_1;
  if (iVar7 != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_101524c4);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  if (*(char *)(param_2 + 0x24) == '\0') goto LAB_100d580f;
  if (param_3 < 0x7fffffff) {
    uVar11 = *(uint *)(param_2 + 0x28);
    uVar13 = *(uint *)(param_2 + 0x54);
    uVar6 = uVar11 - uVar13;
    if (uVar13 <= uVar11) {
      local_5c = (uint *)(param_2 + 0x4c);
      iVar7 = uVar13 * 0xc + 8;
      uVar14 = 0;
      local_68 = uVar6;
      do {
        uVar9 = uVar14 + (uVar14 < uVar6);
        if (uVar13 == *(uint *)(param_2 + 0x4c)) {
          FUN_10135e90(local_5c);
          uVar6 = local_68;
        }
        uVar13 = uVar13 + 1;
        iVar12 = *(int *)(param_2 + 0x50);
        *(undefined4 *)(iVar12 + -8 + iVar7) = 0;
        *(undefined4 *)(iVar12 + -4 + iVar7) = 4;
        *(undefined4 *)(iVar12 + iVar7) = 0;
        *(uint *)(param_2 + 0x54) = uVar13;
      } while ((uVar14 < uVar6) && (iVar7 = iVar7 + 0xc, uVar14 = uVar9, uVar9 <= uVar6));
    }
    param_1 = local_60;
    if (uVar13 <= uVar11) {
      FUN_10136b52(uVar11,uVar13,&PTR_s_C__Users_runneradmin__cargo_regi_101529c8);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar13 = *(uint *)(*(int *)(param_2 + 0x50) + 8 + uVar11 * 0xc);
    if (param_3 < uVar13) {
      uVar13 = *(uint *)(param_2 + 0x3c);
      if (uVar13 == *(uint *)(param_2 + 0x34)) {
        FUN_10135f30((uint *)(param_2 + 0x34));
      }
      iVar7 = *(int *)(param_2 + 0x38);
      iVar12 = uVar13 * 0x10;
      *(undefined4 *)(iVar7 + iVar12) = 4;
      *(uint *)(iVar7 + 4 + iVar12) = uVar11;
      *(uint *)(iVar7 + 8 + iVar12) = param_3;
      *(undefined4 *)(iVar7 + 0xc + iVar12) = 0;
      iVar12 = -2;
      *(uint *)(param_2 + 0x3c) = uVar13 + 1;
      if ((*(int *)(param_2 + 0x2c) == 1) &&
         (*(uint *)(param_2 + 0x30) < (uVar13 + 1) * 0x10 + *(int *)(param_2 + 0x58))) {
        iVar12 = 0x26;
        uVar13 = *(uint *)(param_2 + 0x30);
      }
      if (local_78 != (int *)0x0) {
        LOCK();
        *local_78 = *local_78 + -1;
        UNLOCK();
        if (*local_78 == 0) goto LAB_100d54eb;
      }
      goto LAB_100d54f5;
    }
    puVar2 = (uint *)(*(int *)(param_2 + 0x50) + uVar11 * 0xc);
    uVar6 = param_2;
    while (param_3 != uVar13) {
      if (uVar13 == *puVar2) {
        param_2 = uVar6;
        FUN_10135ee0(puVar2);
        uVar6 = param_2;
      }
      *(undefined4 *)(puVar2[1] + uVar13 * 8) = 0;
      uVar13 = uVar13 + 1;
      puVar2[2] = uVar13;
    }
    if (param_3 == *puVar2) {
      param_2 = uVar6;
      FUN_10135ee0(puVar2);
      uVar6 = param_2;
    }
    uVar13 = puVar2[1];
    *(int **)(uVar13 + param_3 * 8) = local_78;
    *(uint *)(uVar13 + 4 + param_3 * 8) = local_7c;
    puVar2[2] = param_3 + 1;
    iVar7 = *(int *)(param_2 + 0x3c);
    if (iVar7 == *(int *)(param_2 + 0x34)) {
      puVar2 = (uint *)(param_2 + 0x34);
      param_2 = uVar6;
      FUN_10135f30(puVar2);
    }
    iVar12 = *(int *)(param_2 + 0x38);
    iVar8 = iVar7 * 0x10;
    *(undefined4 *)(iVar12 + iVar8) = 4;
    *(uint *)(iVar12 + 4 + iVar8) = uVar11;
    *(uint *)(iVar12 + 8 + iVar8) = param_3;
    *(undefined4 *)(iVar12 + 0xc + iVar8) = 0;
    *(int *)(param_2 + 0x3c) = iVar7 + 1;
    if ((*(int *)(param_2 + 0x2c) == 1) &&
       (uVar13 = *(uint *)(param_2 + 0x30),
       uVar13 < (uint)((iVar7 + 1) * 0x10 + *(int *)(param_2 + 0x58)))) {
      iVar12 = 0x26;
      iVar7 = *(int *)(param_2 + 0x20) + 1;
      goto LAB_100d5586;
    }
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  }
  else {
    uVar13 = param_3;
    if (local_78 == (int *)0x0) {
      iVar12 = 0x27;
      iVar7 = 0;
LAB_100d5586:
      *(int *)(param_2 + 0x20) = iVar7;
      goto LAB_100d558b;
    }
    LOCK();
    *local_78 = *local_78 + -1;
    UNLOCK();
    iVar12 = 0x27;
    if (*local_78 != 0) {
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
      goto LAB_100d558b;
    }
LAB_100d54eb:
    FUN_100d4100(local_78,local_7c);
LAB_100d54f5:
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
    if (iVar12 != -2) {
LAB_100d558b:
      *param_1 = iVar12;
      param_1[1] = uVar13;
      return;
    }
  }
  FUN_100d5890(param_6);
  iVar7 = iStack_4c;
  uVar11 = uStack_50;
  if (iStack_54 != -2) {
    *(ulonglong *)(param_1 + 0xb) = CONCAT44(uStack_24,uStack_28);
    *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_2c,uStack_30);
    param_1[0xf] = iStack_18;
    *(ulonglong *)(param_1 + 0xd) = CONCAT44(uStack_1c,uStack_20);
    *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_34,uStack_38);
    *(ulonglong *)(param_1 + 3) = CONCAT44(uStack_44,uStack_48);
    *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_3c,uStack_40);
    *param_1 = iStack_54;
    param_1[1] = uStack_50;
    param_1[2] = iStack_4c;
    return;
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152444);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  if (*(char *)(param_2 + 0x24) == '\0') {
LAB_100d580f:
    FUN_10136c10("must call \'start_pattern\' first",0x1f,
                 &PTR_s_C__Users_runneradmin__cargo_regi_101529f8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (param_3 < 0x7fffffff) {
    iVar12 = *(int *)(param_2 + 0x3c);
    uVar4 = *(undefined4 *)(param_2 + 0x28);
    if (iVar12 == *(int *)(param_2 + 0x34)) {
      FUN_10135f30((uint *)(param_2 + 0x34));
      param_2 = local_7c;
    }
    iVar8 = *(int *)(param_2 + 0x38);
    iVar10 = iVar12 * 0x10;
    *(undefined4 *)(iVar8 + iVar10) = 5;
    *(undefined4 *)(iVar8 + 4 + iVar10) = uVar4;
    *(uint *)(iVar8 + 8 + iVar10) = param_3;
    *(undefined4 *)(iVar8 + 0xc + iVar10) = 0;
    *(int *)(param_2 + 0x3c) = iVar12 + 1;
    if ((*(int *)(param_2 + 0x2c) != 1) ||
       ((int *)((iVar12 + 1) * 0x10 + *(int *)(param_2 + 0x58)) <= *(int **)(param_2 + 0x30))) {
      piVar1 = (int *)(param_2 + 0x20);
      *piVar1 = *piVar1 + 1;
      if (*piVar1 == 0) {
        *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
        FUN_100d4cf0(&iStack_54,param_2 + 0x24,uStack_6c);
        iVar8 = *(int *)(iVar12 + 0x20) + 1;
        *(int *)(iVar12 + 0x20) = iVar8;
        if (uStack_50 == 0xfffffffe) {
          if (iVar8 != 0) goto LAB_100d5842;
          *(undefined4 *)(iVar12 + 0x20) = 0xffffffff;
          FUN_100d4cf0(&uStack_50,param_2 + 0x24,uVar11);
          *(int *)(iVar12 + 0x20) = *(int *)(iVar12 + 0x20) + 1;
          if (iStack_4c == -2) {
            param_1[1] = local_64;
            param_1[2] = iVar7;
            *param_1 = -2;
            return;
          }
        }
        *(ulonglong *)(param_1 + 0xc) = CONCAT44(iStack_18,uStack_1c);
        *(ulonglong *)(param_1 + 10) = CONCAT44(uStack_20,uStack_24);
        *(ulonglong *)(param_1 + 0xe) = CONCAT44(unaff_ESI,uStack_14);
        *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_28,uStack_2c);
        *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_30,uStack_34);
        *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_38,uStack_3c);
        *(ulonglong *)param_1 = CONCAT44(uStack_48,iStack_4c);
        *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_40,uStack_44);
        return;
      }
LAB_100d5842:
      FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152514);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    iVar12 = 0x26;
    iVar7 = *(int *)(param_2 + 0x20) + 1;
    local_60 = *(int **)(param_2 + 0x30);
  }
  else {
    iVar7 = 0;
    iVar12 = 0x27;
  }
  *(int *)(param_2 + 0x20) = iVar7;
  *param_1 = iVar12;
  param_1[1] = (int)local_60;
  return;
}
