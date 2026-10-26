// rea decompile_all
// name: FUN_00705964
// address: 0x705964
// body: available
// range: 0x705964-0x7059d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00705964(void)

{
  int iVar1;

  iVar1 = FUN_004047b0(900000000);
  DAT_007907f4 = iVar1 + 100000000;
  CoCreateGuid((GUID *)&DAT_007907f8);
  FUN_006bc964();
  FUN_006965e8();
  FUN_0062c554();
  FUN_00651d8c();
  FUN_006f5304();
  FUN_00692994();
  FUN_0064d820();
  FUN_00722118();
  FUN_00655154();
  FUN_006fc71c();
  FUN_006fa0cc();
  FUN_006cc4d0();
  FUN_00712e6c();
  FUN_005334e8();
  FUN_00708bd0();
  FUN_0071d8ec();
  FUN_007149c4();
  return;
}
