// rea decompile_all
// name: FUN_00450604
// address: 0x450604
// body: available
// range: 0x450604-0x450663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00450604(void)

{
  DAT_007880c4 = GetModuleHandleW(L"USER32.DLL");
  DAT_007880a0 = &LAB_0044ff54;
  DAT_007880a4 = &LAB_00450094;
  DAT_007880a8 = FUN_0044fff0;
  DAT_007880ac = &LAB_00450140;
  DAT_007880b0 = &LAB_004501ec;
  DAT_007880b4 = &LAB_004502dc;
  DAT_007880b8 = &LAB_004503cc;
  DAT_007880bc = &LAB_004504bc;
  return;
}
