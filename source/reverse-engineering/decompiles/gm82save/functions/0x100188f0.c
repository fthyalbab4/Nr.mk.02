// rea decompile_all
// name: FUN_100188f0
// address: 0x100188f0
// body: available
// range: 0x100188f0-0x10018ba7 inclusive
// range: 0x10018bb0-0x10018bea inclusive
// range: 0x10018bf0-0x10018c0b inclusive
// range: 0x10018c10-0x10018c8b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100188f0(int *param_1,int param_2,uint param_3,int *param_4,uint param_5,undefined4 param_6)

{
  int iVar1;
  LPVOID pvVar2;
  LPVOID lpMem;
  code *pcVar3;
  int *piVar4;
  HANDLE pvVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 local_a5;
  int *local_a4;
  LPVOID local_a0;
  int local_9c;
  int local_98;
  LPVOID local_94;
  int local_90;
  int *local_8c;
  int *local_88;
  uint local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined1 *local_54;
  uint *local_50;
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
      local_80 = 0x400000000;
      local_78 = (ulonglong)param_5 << 0x20;
      local_70 = CONCAT44(local_70._4_4_,param_6);
      FUN_1002c740((undefined8 *)&local_38,param_4,&local_80);
      piVar4 = local_38;
      pvVar2 = pvStack_34;
      iVar7 = local_30;
      goto joined_r0x1001898a;
    }
    local_84 = param_3 >> 1;
  }
  else {
    piVar4 = FUN_100be180();
    if (piVar4 == (int *)0x0) goto LAB_10018c80;
    if (*piVar4 == 0) {
      piVar4 = FUN_100c0800();
    }
    else {
      piVar4 = (int *)(*piVar4 + 0x8c);
    }
    local_84 = param_3 >> 1;
    if (param_3 >> 1 <= *(uint *)(*piVar4 + 0x104)) {
      local_84 = *(uint *)(*piVar4 + 0x104);
    }
  }
  local_80 = *(undefined8 *)param_4;
  local_78 = *(longlong *)(param_4 + 2);
  local_70._0_4_ = param_4[4];
  FUN_10091fb0((undefined8 *)&local_38,(int *)&local_80);
  if ((char)local_14 == '\x02') {
    local_80 = 0x400000000;
    local_78 = (ulonglong)param_5 << 0x20;
    local_70 = CONCAT44(local_70._4_4_,param_6);
    FUN_1002c740((undefined8 *)&local_a4,(int *)&local_38,&local_80);
    piVar4 = local_a4;
    pvVar2 = local_a0;
    iVar7 = local_9c;
joined_r0x1001898a:
    if (iVar7 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (piVar4 != (int *)0x0) {
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,pvVar2);
      }
    }
    else {
      puVar6 = FUN_10107380(0,0x14);
      if (puVar6 == (undefined4 *)0x0) {
        FUN_1013679e(4,0x14);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *puVar6 = piVar4;
      puVar6[1] = pvVar2;
      puVar6[2] = iVar7;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *param_1 = (int)puVar6;
      param_1[1] = (int)puVar6;
      param_1[2] = 1;
    }
    return;
  }
  local_50 = &local_84;
  local_3c = local_28;
  local_70 = local_24;
  local_60 = local_14;
  local_54 = &local_a5;
  local_68 = local_1c;
  local_80 = CONCAT44(param_6,param_5);
  local_78 = CONCAT44(local_50,local_54);
  local_5c = param_5;
  local_58 = param_6;
  piVar4 = FUN_100be180();
  if (piVar4 == (int *)0x0) {
LAB_10018c80:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  iVar7 = *piVar4;
  if (iVar7 == 0) {
    piVar4 = FUN_100c0800();
    iVar1 = *piVar4;
    piVar4 = FUN_100be180();
    if (piVar4 == (int *)0x0) goto LAB_10018c80;
    iVar7 = *piVar4;
    if (iVar7 == 0) {
      FUN_1012d260((undefined8 *)&local_a4,(uint *)(iVar1 + 0x40),(undefined4 *)&local_80);
      goto LAB_10018b5c;
    }
    if (*(int *)(iVar7 + 0x8c) != iVar1) {
      FUN_1012fc30((undefined8 *)&local_a4,(uint *)(iVar1 + 0x40),iVar7,(undefined4 *)&local_80);
      goto LAB_10018b5c;
    }
  }
  FUN_1002e310((int *)&local_a4,&local_80,iVar7);
LAB_10018b5c:
  if (local_a0 != (LPVOID)0x0) {
    if (local_98 != 0) {
      local_9c = local_9c + local_90;
      *(int *)((int)local_a0 + 0xc) = local_98;
      *(LPVOID *)(local_98 + 0x10) = local_a0;
      local_a0 = local_94;
    }
    *param_1 = (int)local_a4;
    param_1[1] = (int)local_a0;
    param_1[2] = local_9c;
    return;
  }
  *param_1 = local_98;
  param_1[1] = (int)local_94;
  param_1[2] = local_90;
  local_88 = local_a4;
  while (local_88 != (int *)0x0) {
    local_8c = (int *)local_88[3];
    if (local_8c != (int *)0x0) {
      local_8c[4] = 0;
    }
    pvVar2 = (LPVOID)local_88[1];
    iVar7 = local_88[2];
    if (iVar7 != 0) {
      puVar6 = (undefined4 *)((int)pvVar2 + 4);
      do {
        if (puVar6[-1] != 0) {
          lpMem = (LPVOID)*puVar6;
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,lpMem);
        }
        puVar6 = puVar6 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    piVar4 = local_88;
    if (*local_88 != 0) {
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar2);
    }
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,piVar4);
    local_88 = local_8c;
  }
  return;
}
