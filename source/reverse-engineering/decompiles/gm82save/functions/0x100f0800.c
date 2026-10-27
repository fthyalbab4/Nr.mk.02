// rea decompile_all
// name: FUN_100f0800
// address: 0x100f0800
// body: available
// range: 0x100f0800-0x100f08f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f0849 to 0x100f6180 FUN_100f6180 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100f08ae to 0x100f5ac0 FUN_100f5ac0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100f0800(uint *param_1)

{
  LPVOID lpMem;
  HANDLE pvVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *lpMem_00;

  FUN_100f5bd0(param_1);
  uVar3 = *param_1;
  if (uVar3 == 0xffffffff) {
    FUN_100f6180(param_1 + 1);
    FUN_100f6180(param_1 + 2);
    return;
  }
  iVar2 = 2;
  if (0x10ffff < uVar3) {
    iVar2 = uVar3 - 0x110000;
  }
  switch(iVar2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    goto switchD_100f0831_caseD_0;
  case 4:
    uVar3 = param_1[1];
    iVar2 = 2;
    if ((int)uVar3 < 0) {
      iVar2 = uVar3 + 0x80000000;
    }
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 == 1) {
      uVar3 = param_1[2];
      iVar2 = 8;
    }
    else {
      if (uVar3 != 0) {
        lpMem = (LPVOID)param_1[2];
        pvVar1 = GetProcessHeap();
        HeapFree(pvVar1,0,lpMem);
      }
      uVar3 = param_1[4];
      iVar2 = 0x10;
    }
    if (uVar3 == 0) {
      return;
    }
    lpMem_00 = *(uint **)((int)param_1 + iVar2 + 4);
    pvVar1 = GetProcessHeap();
    break;
  case 6:
    FUN_100f5ac0(param_1 + 1);
    return;
  default:
    lpMem_00 = (uint *)param_1[2];
    puVar4 = lpMem_00;
    for (uVar3 = param_1[3]; uVar3 != 0; uVar3 = uVar3 - 1) {
      FUN_100f0720(puVar4);
      puVar4 = puVar4 + 0x16;
    }
    if (param_1[1] == 0) {
      return;
    }
    pvVar1 = GetProcessHeap();
  }
  HeapFree(pvVar1,0,lpMem_00);
switchD_100f0831_caseD_0:
  return;
}
