// rea decompile_all
// name: FUN_0041007c
// address: 0x41007c
// body: available
// range: 0x41007c-0x4100e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041007c(uint param_1)

{
  char cVar1;

  cVar1 = FUN_0040ffe4(param_1);
  if (cVar1 != '\0') {
    FUN_0040ffd4((&DAT_0067ca68)[param_1 & 0xff]);
    return;
  }
  if (DAT_0068cc68 == 0) {
    FUN_00410150();
  }
  FUN_0040ffd4(*(undefined1 *)
                (DAT_0068cc68 +
                (uint)*(ushort *)
                       (DAT_0068cc64 +
                       ((uint)*(ushort *)(DAT_0068cc60 + ((param_1 & 0xffff) >> 8) * 2) +
                       ((param_1 & 0xffff) >> 4 & 0xf)) * 2) + (param_1 & 0xf)));
  return;
}
