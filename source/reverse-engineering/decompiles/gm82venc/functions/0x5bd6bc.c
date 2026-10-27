// rea decompile_all
// name: FUN_005bd6bc
// address: 0x5bd6bc
// body: available
// range: 0x5bd6bc-0x5bd76a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bd6bc(void)

{
  int iVar1;

  FUN_005bd598(0,0);
  FUN_005bd598(1,0);
  FUN_005bd598(2,0xc);
  FUN_005bd598(3,0x10);
  FUN_005bd598(4,0xffffffff);
  FUN_005bd598(5,0x80);
  FUN_005bd598(6,0x80);
  FUN_005bd598(7,0x80);
  FUN_005bd598(8,0);
  FUN_005bd598(9,0x80);
  FUN_005bd598(10,0x80);
  iVar1 = FUN_0058213c();
  FUN_005bd598(0xb,iVar1 + -1);
  FUN_005bd49c();
  return;
}
