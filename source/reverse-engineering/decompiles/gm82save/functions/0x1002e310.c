// rea decompile_all
// name: FUN_1002e310
// address: 0x1002e310
// body: available
// range: 0x1002e310-0x1002e62b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1002e310(int *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  longlong lVar11;
  byte in_stack_00000008;
  int local_ac [4];
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  char local_58;
  undefined2 local_57;
  undefined1 local_55;
  int local_54 [4];
  uint local_44;
  undefined4 local_40;
  uint *local_38;
  char local_24;

  local_94 = param_2[1];
  local_9c = *param_2;
  local_8c = param_2[2];
  local_70 = *(undefined4 *)(param_3 + 0x88);
  local_78 = param_3 + 0x8c;
  local_74 = 0;
  local_7c = *(undefined4 *)(param_2 + 4);
  local_6c = 0;
  local_84 = param_2[3];
  local_ac[0] = 0;
  iVar4 = *(int *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar5 = *(int *)(*(int *)(param_3 + 0x90) + 0x80);
  uVar1 = *(uint *)(*(int *)(param_3 + 0x90) + 0x84);
  iVar6 = *(int *)(param_3 + 0x98);
  if (iVar6 <= (int)(uVar1 - *(int *)(*(int *)(param_3 + 0x90) + 0x80))) {
    FUN_10135f80((int *)(param_3 + 0x90),iVar6 * 2);
    iVar6 = *(int *)(param_3 + 0x98);
  }
  iVar2 = *(int *)(param_3 + 0x94);
  uVar7 = iVar6 - 1U & uVar1;
  *(undefined1 **)(iVar2 + uVar7 * 8) = &LAB_1008b8e0;
  *(int **)(iVar2 + 4 + uVar7 * 8) = local_ac;
  *(uint *)(*(int *)(param_3 + 0x90) + 0x84) = uVar1 + 1;
  iVar6 = *(int *)(param_3 + 0x8c);
  do {
    uVar1 = *(uint *)(iVar6 + 0xf8);
    if ((uVar1 & 0x10000) != 0) {
      uVar7 = uVar1;
      if ((uVar1 & 0xff) == 0) goto LAB_1002e438;
      goto LAB_1002e425;
    }
    LOCK();
    bVar10 = uVar1 == *(uint *)(iVar6 + 0xf8);
    if (bVar10) {
      *(uint *)(iVar6 + 0xf8) = uVar1 | 0x10000;
    }
    UNLOCK();
  } while (!bVar10);
  uVar7 = uVar1 | 0x10000;
  if ((uVar1 & 0xff) != 0) {
LAB_1002e425:
    if ((iVar4 != iVar5 && -1 < iVar4 - iVar5) || ((uVar7 >> 8 & 0xff) == (uVar1 & 0xff))) {
      FUN_10139520(iVar6 + 0xec,1);
    }
  }
LAB_1002e438:
  FUN_100188f0(local_54,(uint)in_stack_00000008,**(uint **)(param_2 + 6),
               (int *)((int)param_2 + 0x34),*(uint *)((int)param_2 + 0x24),
               *(undefined4 *)(param_2 + 5));
  do {
    if (local_74 == 3) {
joined_r0x1002e5d9:
      if (local_ac[0] != 1) {
        if (local_ac[0] != 2) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141c10);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        FUN_100c0bc0();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *param_1 = local_54[0];
      param_1[1] = local_54[1];
      param_1[2] = local_54[2];
      param_1[3] = local_ac[1];
      iVar4 = 0x14;
      iVar5 = 0x10;
      local_54[1] = local_ac[2];
      local_54[2] = local_ac[3];
LAB_1002e60f:
      *(int *)((int)param_1 + iVar5) = local_54[1];
      *(int *)((int)param_1 + iVar4) = local_54[2];
      return;
    }
    lVar11 = FUN_10052290(param_3);
    if ((code *)lVar11 == (code *)0x0) {
      if (local_74 != 3) {
        FUN_10138cf0(param_3,&local_74);
      }
      goto joined_r0x1002e5d9;
    }
    if (lVar11 == CONCAT44(local_ac,&LAB_1008b8e0)) {
      piVar8 = local_ac;
      piVar9 = local_54;
      for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      if (local_24 == '\x02') {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1014139c);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_60 = local_84;
      local_68 = local_8c;
      local_57 = local_7c._1_2_;
      local_55 = local_7c._3_1_;
      local_58 = local_24;
      FUN_100188f0(param_1 + 3,(uint)in_stack_00000008,*local_38,(int *)&local_68,local_44,local_40)
      ;
      FUN_100048c0(local_54);
      iVar5 = 4;
      *param_1 = local_54[0];
      iVar4 = 8;
      goto LAB_1002e60f;
    }
    (*(code *)lVar11)((int)((ulonglong)lVar11 >> 0x20));
  } while( true );
}
