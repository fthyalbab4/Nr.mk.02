// rea decompile_all
// name: FUN_100052c0
// address: 0x100052c0
// body: available
// range: 0x100052c0-0x10005318 inclusive
// range: 0x10005320-0x10005364 inclusive
// range: 0x10005370-0x1000537a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100052c0(int *param_1)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  LPVOID pvVar4;
  HANDLE pvVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  LPVOID pvVar9;

  puVar2 = (uint *)*param_1;
  uVar3 = puVar2[0x10];
  pvVar4 = (LPVOID)puVar2[1];
  for (uVar8 = *puVar2 & 0xfffffffe; uVar8 != (uVar3 & 0xfffffffe); uVar8 = uVar8 + 2) {
    uVar6 = uVar8 >> 1 & 0x1f;
    if (uVar6 == 0x1f) {
      pvVar9 = *(LPVOID *)((int)pvVar4 + 0x5d0);
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar4);
    }
    else {
      iVar7 = uVar6 * 0x30;
      pcVar1 = (char *)((int)pvVar4 + iVar7);
      pvVar9 = pvVar4;
      if (*(int *)((int)pvVar4 + iVar7 + 8) == -2) {
        FUN_100071e0((int *)(pcVar1 + 0xc));
      }
      else {
        FUN_10005ed0(pcVar1);
      }
    }
    pvVar4 = pvVar9;
  }
  if (pvVar4 != (LPVOID)0x0) {
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,pvVar4);
  }
  FUN_100a8860((int *)(puVar2 + 0x21));
  pvVar4 = (LPVOID)puVar2[-1];
  pvVar5 = GetProcessHeap();
  HeapFree(pvVar5,0,pvVar4);
  return;
}
