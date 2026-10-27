// rea decompile_all
// name: FUN_100cf820
// address: 0x100cf820
// body: available
// range: 0x100cf820-0x100cf96b inclusive
// range: 0x100cf970-0x100cfb7c inclusive
// range: 0x100cfb80-0x100cfc11 inclusive
// range: 0x100cfc20-0x100cfd1c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100cf820(undefined4 *param_1,undefined4 *param_2,uint *param_3,int *param_4,void *param_5,
            uint param_6)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *this;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  uint uVar12;
  bool bVar13;
  byte bVar14;
  bool bVar15;
  int iVar16;
  byte bVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  undefined8 uVar25;
  uint local_6c;
  int *local_50;
  int local_4c;
  char local_1c [4];
  uint uStack_18;

  param_3[2] = 0;
  param_3[9] = 0;
  param_3[0xe] = param_6;
  param_3[0x15] = 0;
  param_3[0x1a] = param_6;
  uVar3 = param_4[4];
  uVar4 = param_4[5];
  if (uVar4 < uVar3) {
LAB_100cf863:
    *param_1 = 0;
    return;
  }
  iVar5 = param_4[3];
  if (iVar5 == -1) {
    FUN_101369c0("byte slice lengths must be less than usize MAX",0x5d,
                 &PTR_s_C__Users_runneradmin__cargo_regi_101525b4);
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  iVar6 = param_4[2];
  this = (void *)*param_2;
  bVar23 = *(byte *)(param_2 + 5) == 2;
  bVar24 = (*(byte *)(param_2 + 5) & 1) != 0;
  if (*param_4 == 0) {
    local_4c = *(int *)((int)this + 0x130);
    if (local_4c != *(int *)((int)this + 0x134)) {
      bVar17 = 0;
      local_50 = (int *)&DAT_101525c4;
      if (*(char *)(param_2 + 4) != -1) {
        local_50 = param_2 + 1;
      }
      if ((char)local_50[3] == '\x02') {
        local_50 = (int *)0x0;
      }
      goto LAB_100cf91d;
    }
  }
  else if (*param_4 == 1) {
    local_4c = *(int *)((int)this + 0x130);
  }
  else {
    if (*(uint *)((int)this + 0x15c) <= (uint)param_4[1]) goto LAB_100cf863;
    local_4c = *(int *)(*(int *)((int)this + 0x158) + param_4[1] * 4);
  }
  bVar17 = 1;
  local_50 = (int *)0x0;
LAB_100cf91d:
  *param_1 = 0;
  bVar2 = *(byte *)(param_4 + 6);
  bVar13 = false;
  uVar20 = 0;
  uVar18 = param_6;
  local_6c = uVar3;
  do {
    if (uVar20 == 0) {
      if ((bool)(bVar17 & uVar3 < local_6c)) {
        return;
      }
      if (bVar13 && (bVar23 || bVar24)) {
        return;
      }
      if (local_50 != (int *)0x0) {
        (**(code **)(local_50[1] + 0x10))
                  (local_1c,*local_50 + 8 + (*(int *)(local_50[1] + 8) - 1U & 0xfffffff8),iVar6,
                   iVar5,local_6c,uVar4);
        if (local_1c[0] == '\0') {
          return;
        }
        local_6c = uStack_18;
      }
    }
    if ((!(bool)(bVar17 & local_6c != uVar3)) && (!bVar13 || !bVar23 && !bVar24)) {
      uVar20 = param_3[0x18];
      if (uVar20 < uVar18) {
        FUN_10136a50(uVar20 - uVar18,uVar20,uVar20,&PTR_s_C__Users_runneradmin__cargo_regi_10152808)
        ;
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      FUN_100cdfd0((int)this,param_3,(uVar20 - uVar18) * 4 + param_3[0x17],uVar18,(int)(param_3 + 3)
                   ,iVar6,iVar5,local_6c,local_4c);
      uVar20 = param_3[9];
    }
    if (param_3[5] < uVar20) {
      FUN_10136a50(0,uVar20,param_3[5],&PTR_s_C__Users_runneradmin__cargo_regi_101528d4);
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    uVar18 = param_3[0xe];
    uVar7 = param_3[0xd];
    uVar8 = param_3[0xc];
    piVar19 = (int *)param_3[4];
    if (param_6 == uVar18) {
      uVar9 = param_3[0xb];
      if (bVar23 || bVar24) {
        iVar21 = uVar20 << 2;
        do {
          if (iVar21 == 0) goto LAB_100cf970;
          iVar10 = *piVar19;
          piVar19 = piVar19 + 1;
          uVar25 = FUN_100cec70(this);
          uVar18 = (uint)((ulonglong)uVar25 >> 0x20);
          iVar21 = iVar21 + -4;
        } while ((int)uVar25 != 1);
        uVar22 = iVar10 * uVar7;
        uVar20 = uVar22 + param_6;
        if ((CARRY4(uVar22,param_6)) || (uVar8 < uVar20)) {
LAB_100cfce0:
          FUN_10136a50(uVar22,uVar20,uVar8,&PTR_s_C__Users_runneradmin__cargo_regi_1015284c);
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        memcpy(param_5,(void *)(uVar9 + uVar22 * 4),param_6 * 4);
      }
      else {
        piVar1 = piVar19 + uVar20;
        bVar15 = false;
        while (piVar19 != piVar1) {
          iVar21 = *piVar19;
          piVar19 = piVar19 + 1;
          uVar25 = FUN_100cec70(this);
          if ((int)uVar25 == 1) {
            uVar22 = iVar21 * uVar7;
            uVar20 = uVar22 + param_6;
            if ((CARRY4(uVar22,param_6)) || (uVar8 < uVar20)) goto LAB_100cfce0;
            memcpy(param_5,(void *)(uVar9 + uVar22 * 4),param_6 * 4);
            bVar15 = true;
            uVar18 = (uint)((ulonglong)uVar25 >> 0x20);
          }
        }
        if (!bVar15) goto LAB_100cf970;
      }
      bVar13 = true;
      param_1[1] = uVar18;
      param_1[2] = local_6c;
      *param_1 = 1;
      bVar14 = bVar2;
    }
    else {
      iVar21 = uVar20 << 2;
      while (iVar21 != 0) {
        iVar10 = *piVar19;
        piVar19 = piVar19 + 1;
        iVar16 = FUN_100cec70(this);
        iVar21 = iVar21 + -4;
        if (iVar16 == 1) {
          uVar22 = iVar10 * uVar7;
          uVar20 = uVar18 + uVar22;
          if ((!CARRY4(uVar18,uVar22)) && (uVar20 <= uVar8)) {
            FUN_10136d00(param_6,uVar18,&PTR_s_C__Users_runneradmin__cargo_regi_10152634);
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          goto LAB_100cfce0;
        }
      }
LAB_100cf970:
      bVar14 = bVar2 & bVar13;
    }
    if (bVar14 != 0) {
      return;
    }
    uVar18 = param_3[3];
    uVar20 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    param_3[3] = param_3[0xf];
    param_3[4] = param_3[0x10];
    param_3[5] = param_3[0x11];
    param_3[6] = param_3[0x12];
    param_3[0xf] = uVar18;
    param_3[0x10] = uVar20;
    param_3[0x11] = uVar7;
    param_3[0x12] = uVar8;
    local_6c = local_6c + 1;
    uVar7 = param_3[0x13];
    uVar20 = param_3[0x15];
    *(undefined8 *)(param_3 + 0x13) = *(undefined8 *)(param_3 + 7);
    uVar18 = param_3[0xe];
    uVar8 = param_3[0x17];
    uVar22 = param_3[0x18];
    uVar9 = param_3[0x19];
    uVar12 = param_3[10];
    param_3[7] = uVar7;
    param_3[8] = param_3[0x14];
    param_3[9] = param_3[0x15];
    param_3[10] = param_3[0x16];
    param_3[0x16] = uVar12;
    param_3[0x17] = param_3[0xb];
    param_3[0x18] = param_3[0xc];
    param_3[0x19] = param_3[0xd];
    param_3[0xb] = uVar8;
    param_3[0xc] = uVar22;
    param_3[0xd] = uVar9;
    param_3[0xe] = param_3[0x1a];
    param_3[0x1a] = uVar18;
    param_3[0x15] = 0;
    if (uVar4 < local_6c) {
      return;
    }
  } while( true );
}
