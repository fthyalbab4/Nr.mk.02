// rea decompile_all
// name: FUN_00452238
// address: 0x452238
// body: available
// range: 0x452238-0x452263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00452238(undefined4 param_1)

{
  undefined4 local_c;
  undefined1 local_8;

  local_8 = 0x11;
  local_c = param_1;
  FUN_0041c0bc(&PTR_LAB_004510e0,1,PTR_PTR_00781d1c,0,&local_c);
  FUN_00406618();
  return;
}
