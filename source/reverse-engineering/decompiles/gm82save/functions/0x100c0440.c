// rea decompile_all
// name: FUN_100c0440
// address: 0x100c0440
// body: available
// range: 0x100c0440-0x100c04ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100c0440(int *param_1)

{
  code *pcVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  LPVOID pvVar4;
  uint uVar5;

  pvVar2 = FUN_10107380(0,0x200);
  if (pvVar2 == (LPVOID)0x0) {
    FUN_101366bc(4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar3 = FUN_10107380(0,8);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = pvVar2;
    puVar3[1] = 0x40;
    pvVar4 = FUN_10107380(0,0x100);
    if (pvVar4 != (LPVOID)0x0) {
      uVar5 = (uint)pvVar4 & 0xffffffc0;
      *(LPVOID *)(uVar5 + 0x3c) = pvVar4;
      *(undefined4 *)(uVar5 + 0x40) = 1;
      *(undefined4 *)(uVar5 + 0x44) = 1;
      *(undefined4 **)(uVar5 + 0x80) = puVar3;
      *(undefined4 *)(uVar5 + 0xc0) = 0;
      *(undefined4 *)(uVar5 + 0xc4) = 0;
      *param_1 = uVar5 + 0x40;
      param_1[1] = (int)pvVar2;
      param_1[2] = 0x40;
      *(undefined1 *)(param_1 + 3) = 0;
      return;
    }
    FUN_1013679e(0x40,0xc0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  FUN_1013679e(4,8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
