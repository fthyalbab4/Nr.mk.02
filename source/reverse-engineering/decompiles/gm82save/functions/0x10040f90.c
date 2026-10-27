// rea decompile_all
// name: FUN_10040f90
// address: 0x10040f90
// body: available
// range: 0x10040f90-0x10041161 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10040f90(undefined4 param_1,int param_2)

{
  code *pcVar1;
  LPVOID pvVar2;
  HANDLE hHeap;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint local_110;
  int iStack_10c;
  LPVOID local_108;
  int local_104;
  int local_100;
  undefined4 local_fc;
  longlong local_f8 [11];
  int local_a0;
  LPVOID local_9c;
  undefined4 local_98;
  longlong local_88 [11];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  LPVOID local_20;
  undefined4 local_1c;

  local_fc = param_1;
  FUN_100a3830(local_f8,DAT_10163000);
  pvVar2 = FUN_10107380(0,0x8000);
  if (pvVar2 == (LPVOID)0x0) {
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  plVar4 = local_f8;
  plVar5 = local_88;
  for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(int *)plVar5 = (int)*plVar4;
    plVar4 = (longlong *)((int)plVar4 + 4);
    plVar5 = (longlong *)((int)plVar5 + 4);
  }
  local_30 = 0;
  local_2c = 1;
  local_28 = 0;
  local_24 = 0x8000;
  local_1c = 0;
  local_20 = pvVar2;
  FUN_10092830(&local_110,local_88,*(int *)(param_2 + 4),*(undefined ***)(param_2 + 8));
  if ((char)local_110 == -1) {
    plVar4 = local_88;
    plVar5 = local_f8;
    for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(int *)plVar5 = (int)*plVar4;
      plVar4 = (longlong *)((int)plVar4 + 4);
      plVar5 = (longlong *)((int)plVar5 + 4);
    }
    local_100 = param_2;
    FUN_1004f710((undefined2 *)&local_110,local_f8);
    local_104 = local_a0;
    if ((char)local_110 == -1) {
      local_a0 = 0xffffffff;
      if (local_104 != -1) {
        FUN_100053b0(local_f8);
        local_108 = local_9c;
        local_f8[0] = CONCAT44(local_f8[0]._4_4_,local_98);
        (*(code *)0x44006c)();
        pvVar2 = local_108;
        (*(code *)0x44006c)();
        (*(code *)0x43f254)(local_98,0);
        if (iStack_10c != 0) {
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,pvVar2);
        }
        return;
      }
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_100053b0(local_f8);
    FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,local_f8,&PTR_FUN_1013f548,
                 &PTR_s_src_lib_rs_10140684);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,local_f8,&PTR_FUN_1013f548,
               &PTR_s_src_lib_rs_10140694);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
