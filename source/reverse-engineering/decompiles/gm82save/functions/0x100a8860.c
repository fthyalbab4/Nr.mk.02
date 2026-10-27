// rea decompile_all
// name: FUN_100a8860
// address: 0x100a8860
// body: available
// range: 0x100a8860-0x100a8873 inclusive
// range: 0x100a8880-0x100a88ba inclusive
// range: 0x100a88c0-0x100a88f2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100a8860(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  HANDLE pvVar3;
  int iVar4;
  undefined4 *puVar5;

  puVar1 = (undefined4 *)param_1[1];
  puVar5 = puVar1;
  for (iVar4 = param_1[2]; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = (int *)*puVar5;
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      FUN_1011b0a0((LPVOID)*puVar5);
    }
    puVar5 = puVar5 + 3;
  }
  if (*param_1 != 0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,puVar1);
  }
  puVar1 = (undefined4 *)param_1[4];
  puVar5 = puVar1;
  for (iVar4 = param_1[5]; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = (int *)*puVar5;
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      FUN_1011b0a0((LPVOID)*puVar5);
    }
    puVar5 = puVar5 + 3;
  }
  if (param_1[3] != 0) {
    pvVar3 = GetProcessHeap();
    HeapFree(pvVar3,0,puVar1);
  }
  return;
}
