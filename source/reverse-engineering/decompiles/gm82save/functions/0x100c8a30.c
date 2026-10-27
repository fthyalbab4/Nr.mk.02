// rea decompile_all
// name: FUN_100c8a30
// address: 0x100c8a30
// body: available
// range: 0x100c8a30-0x100c8be8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c8aae to 0x100c91a0 FUN_100c91a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100c8a30(uint *param_1)

{
  HANDLE pvVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  LPVOID pvVar7;

  FUN_100f5770(param_1);
  puVar3 = param_1 + 1;
  switch(*param_1) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 6:
    piVar5 = (int *)*puVar3;
    break;
  case 1:
    piVar5 = (int *)*puVar3;
    if (*piVar5 != 0) {
      pvVar7 = (LPVOID)piVar5[1];
LAB_100c8bd4:
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,0,pvVar7);
    }
    break;
  case 5:
    piVar5 = (int *)*puVar3;
    iVar4 = *piVar5;
    iVar2 = 2;
    if (iVar4 < 0) {
      iVar2 = iVar4 + -0x80000000;
    }
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        iVar4 = piVar5[1];
        iVar2 = 8;
      }
      else {
        if (iVar4 != 0) {
          pvVar7 = (LPVOID)piVar5[1];
          pvVar1 = GetProcessHeap();
          HeapFree(pvVar1,0,pvVar7);
        }
        iVar4 = piVar5[3];
        iVar2 = 0x10;
      }
      if (iVar4 != 0) {
        pvVar7 = *(LPVOID *)((int)piVar5 + iVar2);
        goto LAB_100c8bd4;
      }
    }
    break;
  case 7:
    FUN_100c91a0(puVar3);
    return;
  case 8:
    piVar5 = (int *)*puVar3;
    puVar3 = (uint *)piVar5[9];
    goto LAB_100c8b24;
  case 9:
    piVar5 = (int *)*puVar3;
    iVar4 = *piVar5;
    iVar2 = 1;
    if (iVar4 < 0) {
      iVar2 = iVar4 + -0x80000000;
    }
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        iVar2 = 4;
      }
      else {
        iVar4 = piVar5[1];
        iVar2 = 8;
      }
      if (iVar4 != 0) {
        pvVar7 = *(LPVOID *)((int)piVar5 + iVar2);
        pvVar1 = GetProcessHeap();
        HeapFree(pvVar1,0,pvVar7);
      }
    }
    puVar3 = (uint *)piVar5[0xb];
LAB_100c8b24:
    FUN_100c8a30(puVar3);
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,0,puVar3);
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,0,piVar5);
    return;
  case 10:
    piVar5 = (int *)*puVar3;
    puVar3 = (uint *)piVar5[1];
    puVar6 = puVar3;
    for (iVar4 = piVar5[2]; iVar4 != 0; iVar4 = iVar4 + -1) {
      FUN_100c8a30(puVar6);
      puVar6 = puVar6 + 2;
    }
    goto LAB_100c8b6d;
  default:
    piVar5 = (int *)*puVar3;
    puVar3 = (uint *)piVar5[1];
    puVar6 = puVar3;
    for (iVar4 = piVar5[2]; iVar4 != 0; iVar4 = iVar4 + -1) {
      FUN_100c8a30(puVar6);
      puVar6 = puVar6 + 2;
    }
LAB_100c8b6d:
    if (*piVar5 != 0) {
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,0,puVar3);
    }
    pvVar1 = GetProcessHeap();
    goto LAB_100c8b89;
  }
  pvVar1 = GetProcessHeap();
LAB_100c8b89:
  HeapFree(pvVar1,0,piVar5);
  return;
}
