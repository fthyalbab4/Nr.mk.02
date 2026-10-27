// rea decompile_all
// name: FUN_1008f1e0
// address: 0x1008f1e0
// body: available
// range: 0x1008f1e0-0x1008f2e3 inclusive
// range: 0x1008f2f0-0x1008f367 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1008f1e0(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  LPVOID pvVar3;
  int *piVar4;
  HANDLE pvVar5;
  int *piVar6;
  code *pcVar7;
  int *local_28;
  LPVOID local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  LPVOID local_14;

  iVar1 = param_2[4];
  FUN_10038ca0(&local_28,param_3);
  piVar2 = local_20;
  pvVar3 = local_24;
  piVar6 = local_28;
  if (local_28 < local_20) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10141d14);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  piVar4 = FUN_100be180();
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 0) {
      piVar4 = FUN_100c0800();
    }
    else {
      piVar4 = (int *)(*piVar4 + 0x8c);
    }
    FUN_10028440((int *)&local_28,(uint)piVar2,'\0',*(uint *)(*piVar4 + 0x104),1,(int)pvVar3,
                 (uint)piVar2);
    if (piVar6 != (int *)0x0) {
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar3);
    }
    local_14 = local_24;
    local_1c = local_28;
    local_18 = local_20;
    if (*param_2 == 1) {
      local_14 = (LPVOID)param_2[2];
      piVar6 = (int *)param_2[1];
      if (local_14 == (LPVOID)0x0) {
        local_14 = local_24;
        if (piVar6 != (int *)0x0) {
          pcVar7 = HeapFree_exref;
          do {
            piVar2 = (int *)piVar6[3];
            if (piVar2 != (int *)0x0) {
              piVar2[4] = 0;
            }
            if (*piVar6 != 0) {
              pvVar3 = (LPVOID)piVar6[1];
              pvVar5 = GetProcessHeap();
              pcVar7 = HeapFree_exref;
              HeapFree(pvVar5,0,pvVar3);
            }
            pvVar5 = GetProcessHeap();
            (*pcVar7)(pvVar5,0,piVar6);
            piVar6 = piVar2;
          } while (piVar2 != (int *)0x0);
        }
      }
      else {
        local_18 = (int *)param_2[3];
        local_1c = piVar6;
        if (local_28 != (int *)0x0) {
          *(int **)((int)local_14 + 0xc) = local_28;
          local_28[4] = (int)local_14;
          local_18 = (int *)((int)local_18 + (int)local_20);
          local_14 = local_24;
        }
      }
    }
    param_1[4] = iVar1;
    *param_1 = 1;
    param_1[1] = local_1c;
    param_1[2] = local_14;
    param_1[3] = local_18;
    return;
  }
  FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}
