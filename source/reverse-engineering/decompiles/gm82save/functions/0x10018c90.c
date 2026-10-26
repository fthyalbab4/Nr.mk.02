// rea decompile_all
// name: FUN_10018c90
// address: 0x10018c90
// body: available
// range: 0x10018c90-0x10018f14 inclusive
// range: 0x10018f20-0x10018fb1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10018c90(int *param_1,int param_2,uint param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  LPVOID pvVar3;
  int *piVar4;
  HANDLE pvVar5;
  undefined4 *puVar6;
  int iVar7;
  code *pcVar8;
  undefined1 local_95;
  int *local_94;
  LPVOID local_90;
  int local_8c;
  int local_88;
  LPVOID local_84;
  int local_80;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 *local_58;
  uint *local_54;
  undefined4 local_50;
  undefined4 local_3c;
  int *local_38;
  LPVOID pvStack_34;
  int local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;

  if (param_2 == 0) {
    if (param_3 == 0) {
      local_78 = 0x400000000;
      local_70 = 0;
      uStack_6c = param_5;
      FUN_1002c9f0((undefined8 *)&local_38,param_4,&local_78);
      piVar4 = local_38;
      pvVar3 = pvStack_34;
      iVar7 = local_30;
      goto joined_r0x10018d1e;
    }
    local_7c = param_3 >> 1;
  }
  else {
    piVar4 = FUN_100be180();
    if (piVar4 == (int *)0x0) goto LAB_10018fa6;
    if (*piVar4 == 0) {
      piVar4 = FUN_100c0800();
    }
    else {
      piVar4 = (int *)(*piVar4 + 0x8c);
    }
    local_7c = param_3 >> 1;
    if (param_3 >> 1 <= *(uint *)(*piVar4 + 0x104)) {
      local_7c = *(uint *)(*piVar4 + 0x104);
    }
  }
  local_68 = param_4[4];
  local_78 = *(undefined8 *)param_4;
  local_70 = (undefined4)*(undefined8 *)(param_4 + 2);
  uStack_6c = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 2) >> 0x20);
  FUN_10091fb0((undefined8 *)&local_38,(int *)&local_78);
  if ((char)local_14 == '\x02') {
    local_78 = 0x400000000;
    local_70 = 0;
    uStack_6c = param_5;
    FUN_1002c9f0((undefined8 *)&local_94,(int *)&local_38,&local_78);
    piVar4 = local_94;
    pvVar3 = local_90;
    iVar7 = local_8c;
joined_r0x10018d1e:
    if (iVar7 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (piVar4 != (int *)0x0) {
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,pvVar3);
      }
    }
    else {
      puVar6 = FUN_10107380(0,0x14);
      if (puVar6 == (undefined4 *)0x0) {
        FUN_1013679e(4,0x14);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      *puVar6 = piVar4;
      puVar6[1] = pvVar3;
      puVar6[2] = iVar7;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *param_1 = (int)puVar6;
      param_1[1] = (int)puVar6;
      param_1[2] = 1;
    }
    return;
  }
  local_54 = &local_7c;
  local_3c = local_28;
  uStack_6c = (undefined4)local_24;
  local_68 = (int)((ulonglong)local_24 >> 0x20);
  local_5c = local_14;
  local_58 = &local_95;
  local_64 = local_1c;
  local_78 = CONCAT44(local_54,local_58);
  local_70 = param_5;
  local_50 = param_5;
  piVar4 = FUN_100be180();
  if (piVar4 == (int *)0x0) {
LAB_10018fa6:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  iVar7 = *piVar4;
  if (iVar7 == 0) {
    piVar4 = FUN_100c0800();
    iVar1 = *piVar4;
    piVar4 = FUN_100be180();
    if (piVar4 == (int *)0x0) goto LAB_10018fa6;
    iVar7 = *piVar4;
    if (iVar7 == 0) {
      FUN_1012d350((undefined8 *)&local_94,(uint *)(iVar1 + 0x40),&local_78);
      goto LAB_10018ed1;
    }
    if (*(int *)(iVar7 + 0x8c) != iVar1) {
      FUN_1012fd00((undefined8 *)&local_94,(uint *)(iVar1 + 0x40),iVar7,&local_78);
      goto LAB_10018ed1;
    }
  }
  FUN_1002e630(&local_94,&local_78,iVar7);
LAB_10018ed1:
  if (local_90 != (LPVOID)0x0) {
    if (local_88 != 0) {
      local_8c = local_8c + local_80;
      *(int *)((int)local_90 + 0xc) = local_88;
      *(LPVOID *)(local_88 + 0x10) = local_90;
      local_90 = local_84;
    }
    *param_1 = (int)local_94;
    param_1[1] = (int)local_90;
    param_1[2] = local_8c;
    return;
  }
  *param_1 = local_88;
  param_1[1] = (int)local_84;
  param_1[2] = local_80;
  pcVar8 = HeapFree_exref;
  piVar4 = local_94;
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[3];
    if (piVar2 != (int *)0x0) {
      piVar2[4] = 0;
    }
    if (*piVar4 != 0) {
      pvVar3 = (LPVOID)piVar4[1];
      pvVar5 = GetProcessHeap();
      pcVar8 = HeapFree_exref;
      HeapFree(pvVar5,0,pvVar3);
    }
    pvVar5 = GetProcessHeap();
    (*pcVar8)(pvVar5,0,piVar4);
    piVar4 = piVar2;
  }
  return;
}
