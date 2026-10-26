// rea decompile_all
// name: FUN_00629f28
// address: 0x629f28
// body: available
// range: 0x629f28-0x629f5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00629f28(void)

{
  char cVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (DAT_006887dc < 1) {
    cVar1 = FUN_00629edc();
    if (cVar1 != '\0') {
      uVar2 = FUN_00629d44(DAT_006887e4);
      if ((char)uVar2 != '\0') {
        DAT_006887dc = 1;
      }
    }
  }
  return uVar2;
}
