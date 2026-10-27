// rea decompile_all
// name: FUN_00663e00
// address: 0x663e00
// body: available
// range: 0x663e00-0x663e2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00663e00(undefined4 param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;

  uVar1 = FUN_00405d08(param_1);
  bVar2 = (byte)param_2 < 7;
  if ((byte)param_2 < 8) {
    bVar2 = (uVar1 >> (param_2 & 0x1f) & 1) != 0;
  }
  if (bVar2) {
    FUN_00668630(param_1,param_2);
  }
  return;
}
