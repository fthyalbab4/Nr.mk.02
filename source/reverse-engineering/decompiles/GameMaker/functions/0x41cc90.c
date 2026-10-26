// rea decompile_all
// name: FUN_0041cc90
// address: 0x41cc90
// body: available
// range: 0x41cc90-0x41cd1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041cc90(void)

{
  DAT_00785dbc = FUN_0041bfec(&PTR_LAB_00411414,1,PTR_PTR_00781a14);
  DAT_00785dc0 = FUN_0041bfec(&PTR_LAB_00411c1c,1,PTR_PTR_00782188);
  *(undefined1 **)PTR_DAT_00781698 = &LAB_0041c7d0;
  *(undefined1 **)PTR_DAT_00781c48 = &LAB_0041cc80;
  *(undefined ***)PTR_DAT_00781984 = &PTR_LAB_00410b4c;
  *(code **)PTR_DAT_00781bdc = FUN_0041c998;
  *(undefined1 **)PTR_DAT_00781c6c = &LAB_0041cb84;
  *(undefined1 **)PTR_DAT_00781cd0 = &LAB_0041cc5c;
  *(undefined1 **)PTR_DAT_00782260 = &LAB_0041c8e4;
  *(undefined1 **)PTR_DAT_00781648 = &LAB_0041c900;
  return;
}
