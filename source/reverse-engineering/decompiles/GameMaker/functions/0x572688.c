// rea decompile_all
// name: FUN_00572688
// address: 0x572688
// body: available
// range: 0x572688-0x5726c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00572688(int param_1)

{
  char cVar1;
  int iVar2;

  if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
    cVar1 = FUN_004f7a54(param_1);
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x1c) & 0x40) == 0)) {
      iVar2 = FUN_00513780(param_1,1);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 700) != 0)) {
        (**(code **)(**(int **)(iVar2 + 700) + 0xc))();
      }
    }
  }
  return;
}
