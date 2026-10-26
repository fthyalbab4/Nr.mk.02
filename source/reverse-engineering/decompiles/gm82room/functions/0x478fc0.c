// rea decompile_all
// name: FUN_00478fc0
// address: 0x478fc0
// body: available
// range: 0x478fc0-0x47901a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478fc0(void)

{
  char cVar1;
  int *piVar2;
  uint extraout_EDX;

  piVar2 = (int *)FUN_004065b8();
  cVar1 = FUN_004c4988(piVar2);
  if (cVar1 != '\0') {
    (**(code **)(*piVar2 + 0xc4))();
  }
  FUN_00447750(piVar2[0xb4]);
  FUN_00447750(piVar2[0xb3]);
  FUN_00405fdc(piVar2[0x9c]);
  FUN_004beba0(piVar2,extraout_EDX & 0xfffffffc);
  if ('\0' < (char)extraout_EDX) {
    FUN_00406560(piVar2);
  }
  return;
}
