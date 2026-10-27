// rea decompile_all
// name: FUN_004c8318
// address: 0x4c8318
// body: available
// range: 0x4c8318-0x4c835f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004c8318(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar3 = 0;
  if (*(int *)(*(int *)(param_1 + 8) + 8) == 0) {
    return 0;
  }
  do {
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 8) + 8);
    } while (iVar4 + -1 < 0);
    iVar2 = 0;
    do {
      iVar1 = FUN_004c8304(param_1,iVar2);
      if (iVar3 == *(int *)(iVar1 + 0x14)) {
        iVar3 = iVar3 + 1;
        break;
      }
      if (iVar2 == *(int *)(*(int *)(param_1 + 8) + 8) + -1) {
        return iVar3;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  } while( true );
}
