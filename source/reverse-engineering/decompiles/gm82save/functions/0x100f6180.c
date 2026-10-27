// rea decompile_all
// name: FUN_100f6180
// address: 0x100f6180
// body: available
// range: 0x100f6180-0x100f6269 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100f6180(undefined4 *param_1)

{
  uint *lpMem;
  int iVar1;
  HANDLE pvVar2;
  uint uVar3;
  uint *puVar4;
  LPVOID pvVar5;

  lpMem = (uint *)*param_1;
  FUN_100f5bd0(lpMem);
  uVar3 = *lpMem;
  if (uVar3 == 0xffffffff) {
    FUN_100f6180(lpMem + 1);
    FUN_100f6180(lpMem + 2);
    goto switchD_100f61b2_caseD_0;
  }
  iVar1 = 2;
  if (0x10ffff < uVar3) {
    iVar1 = uVar3 - 0x110000;
  }
  switch(iVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    goto switchD_100f61b2_caseD_0;
  case 4:
    uVar3 = lpMem[1];
    iVar1 = 2;
    if ((int)uVar3 < 0) {
      iVar1 = uVar3 + 0x80000000;
    }
    if (iVar1 == 0) goto switchD_100f61b2_caseD_0;
    if (iVar1 == 1) {
      uVar3 = lpMem[2];
      iVar1 = 8;
    }
    else {
      if (uVar3 != 0) {
        pvVar5 = (LPVOID)lpMem[2];
        pvVar2 = GetProcessHeap();
        HeapFree(pvVar2,0,pvVar5);
      }
      uVar3 = lpMem[4];
      iVar1 = 0x10;
    }
    if (uVar3 == 0) goto switchD_100f61b2_caseD_0;
    pvVar5 = *(LPVOID *)((int)lpMem + iVar1 + 4);
    break;
  case 6:
    FUN_100f5ac0(lpMem + 1);
    goto switchD_100f61b2_caseD_0;
  default:
    uVar3 = lpMem[3];
    if (uVar3 != 0) {
      puVar4 = (uint *)lpMem[2];
      do {
        FUN_100f0720(puVar4);
        puVar4 = puVar4 + 0x16;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (lpMem[1] == 0) goto switchD_100f61b2_caseD_0;
    pvVar5 = (LPVOID)lpMem[2];
  }
  pvVar2 = GetProcessHeap();
  HeapFree(pvVar2,0,pvVar5);
switchD_100f61b2_caseD_0:
  pvVar2 = GetProcessHeap();
  HeapFree(pvVar2,0,lpMem);
  return;
}
