// rea decompile_all
// name: FUN_1002cc00
// address: 0x1002cc00
// body: available
// range: 0x1002cc00-0x1002ccf9 inclusive
// range: 0x1002cd00-0x1002cdbd inclusive
// range: 0x1002cdc0-0x1002ce05 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1002cc00(uint *param_1,int param_2,int param_3)

{
  void *_Src;
  int iVar1;
  int *piVar2;
  LPVOID lpMem;
  int *piVar3;
  uint uVar4;
  HANDLE pvVar5;
  uint uVar6;
  code *pcVar7;
  uint *local_50;
  undefined4 local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  int local_30;
  undefined1 local_2c;
  int *local_28 [2];
  int local_20;
  undefined8 local_1c;
  int local_14;

  local_40 = param_3;
  local_48 = 10;
  local_14 = param_3;
  local_1c = CONCAT44(param_2,10);
  if (param_3 == 0) {
    local_2c = true;
  }
  else {
    local_2c = *(char *)(param_2 + -1 + param_3) == '\n';
  }
  local_34 = &local_48;
  local_38 = param_3;
  local_30 = param_3;
  iStack_44 = param_2;
  local_3c = param_2;
  piVar3 = FUN_100be180();
  if (piVar3 == (int *)0x0) {
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  if (*piVar3 == 0) {
    piVar3 = FUN_100c0800();
  }
  else {
    piVar3 = (int *)(*piVar3 + 0x8c);
  }
  FUN_10018c90((int *)local_28,0,*(uint *)(*piVar3 + 0x104),&local_3c,&stack0xfffffff0);
  if ((local_20 == 0) || (local_28[0] == (int *)0x0)) {
    if (local_28[0] == (int *)0x0) {
      return;
    }
  }
  else {
    uVar4 = 0;
    piVar3 = local_28[0];
    do {
      local_20 = local_20 + -1;
      uVar4 = uVar4 + piVar3[2];
      if (local_20 == 0) break;
      piVar3 = (int *)piVar3[3];
    } while (piVar3 != (int *)0x0);
    if (*param_1 - param_1[2] < uVar4) {
      FUN_101359e0(param_1,param_1[2],uVar4,&DAT_00000004,8);
    }
  }
  do {
    local_50 = param_1 + 2;
    piVar3 = (int *)local_28[0][3];
    if (piVar3 != (int *)0x0) {
      piVar3[4] = 0;
    }
    _Src = (void *)local_28[0][1];
    iVar1 = *local_28[0];
    uVar4 = local_28[0][2];
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,local_28[0]);
    if (iVar1 == -1) {
      while (piVar3 != (int *)0x0) {
        piVar2 = (int *)piVar3[3];
        if (piVar2 != (int *)0x0) {
          piVar2[4] = 0;
        }
        pcVar7 = HeapFree_exref;
        if (*piVar3 != 0) {
          lpMem = (LPVOID)piVar3[1];
          pvVar5 = GetProcessHeap();
          pcVar7 = HeapFree_exref;
          HeapFree(pvVar5,0,lpMem);
        }
        pvVar5 = GetProcessHeap();
        (*pcVar7)(pvVar5,0,piVar3);
        piVar3 = piVar2;
      }
      return;
    }
    uVar6 = param_1[2];
    if (*param_1 - uVar6 < uVar4) {
      FUN_101359e0(param_1,uVar6,uVar4,&DAT_00000004,8);
      uVar6 = param_1[2];
LAB_1002cd4b:
      memcpy((void *)(uVar6 * 8 + param_1[1]),_Src,uVar4 * 8);
    }
    else if (uVar4 != 0) goto LAB_1002cd4b;
    *local_50 = uVar6 + uVar4;
    if (iVar1 != 0) {
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,_Src);
    }
    local_28[0] = piVar3;
    if (piVar3 == (int *)0x0) {
      return;
    }
  } while( true );
}
