// rea decompile_all
// name: FUN_0063cb38
// address: 0x63cb38
// body: available
// range: 0x63cb38-0x63cb78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0063cb38(uint param_1)

{
  undefined4 local_c;
  undefined1 uStack_5;

  local_c = *(undefined4 *)PTR_DAT_00782228;
  uStack_5 = (byte)(param_1 >> 0x18);
  if ((uStack_5 < 0x80) ||
     (0x180 < (param_1 >> 0x10 & 0xff) + (param_1 >> 8 & 0xff) + (param_1 & 0xff))) {
    local_c = *(undefined4 *)PTR_DAT_007818f0;
  }
  return local_c;
}
