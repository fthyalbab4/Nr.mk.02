// rea decompile_all
// name: FUN_005646c8
// address: 0x5646c8
// body: available
// range: 0x5646c8-0x56479b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005646c8(undefined4 param_1)

{
  _DAT_00721d8c = param_1;
  FUN_00404f38(&DAT_00721d90,0x68,0);
  DAT_00721d90 = 0x3f800000;
  DAT_00721d94 = 0x3f800000;
  DAT_00721d98 = 0x3f800000;
  DAT_00721d9c = 0x3f800000;
  DAT_00721da0 = 0x3f800000;
  DAT_00721da4 = 0x3f800000;
  DAT_00721da8 = 0x3f800000;
  DAT_00721dac = 0x3f800000;
  DAT_00721dcc = 0;
  DAT_00721dc0 = 0;
  DAT_00721dc4 = 0;
  DAT_00721dc8 = 0;
  DAT_00721dbc = 0x3f800000;
  DAT_00721db0 = 0x3f800000;
  DAT_00721db4 = 0x3f800000;
  DAT_00721db8 = 0x3f800000;
  DAT_00721dd0 = 0x3f800000;
  (**(code **)(**(int **)PTR_DAT_00689570 + 0xa8))();
  (**(code **)(**(int **)PTR_DAT_00689570 + 200))();
  return;
}
