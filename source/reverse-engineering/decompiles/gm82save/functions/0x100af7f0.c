// rea decompile_all
// name: FUN_100af7f0
// address: 0x100af7f0
// body: available
// range: 0x100af7f0-0x100af848 inclusive
// range: 0x100af850-0x100af8a8 inclusive
// range: 0x100af8b0-0x100af8ca inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100af7f0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  LPVOID pvVar3;
  uint uVar4;
  HANDLE pvVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  LPVOID pvVar9;

  puVar1 = (uint *)*param_1;
  uVar2 = puVar1[0x10];
  pvVar3 = (LPVOID)puVar1[1];
  for (uVar8 = *puVar1 & 0xfffffffe; uVar8 != (uVar2 & 0xfffffffe); uVar8 = uVar8 + 2) {
    uVar6 = uVar8 >> 1 & 0x1f;
    if (uVar6 == 0x1f) {
      pvVar9 = *(LPVOID *)((int)pvVar3 + 0x4d8);
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar3);
    }
    else {
      uVar4 = *(uint *)((int)pvVar3 + uVar6 * 0x28);
      iVar7 = uVar4 - 3;
      if (uVar4 < 3) {
        iVar7 = 3;
      }
      pvVar9 = pvVar3;
      if ((iVar7 == 0) || (iVar7 == 1)) {
        if (*(int *)((int)pvVar3 + uVar6 * 0x28 + 4) != 0) {
          pvVar3 = *(LPVOID *)((int)pvVar3 + uVar6 * 0x28 + 8);
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,pvVar3);
        }
      }
      else if (iVar7 != 2) {
        FUN_100ae070(uVar4,*(PSRWLOCK *)((int)pvVar3 + uVar6 * 0x28 + 4));
      }
    }
    pvVar3 = pvVar9;
  }
  if (pvVar3 != (LPVOID)0x0) {
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,pvVar3);
  }
  FUN_100a8860((int *)(puVar1 + 0x21));
  pvVar3 = (LPVOID)puVar1[-1];
  pvVar5 = GetProcessHeap();
  HeapFree(pvVar5,0,pvVar3);
  return;
}
