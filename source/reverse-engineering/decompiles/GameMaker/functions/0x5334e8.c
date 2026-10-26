// rea decompile_all
// name: FUN_005334e8
// address: 0x5334e8
// body: available
// range: 0x5334e8-0x533584 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005334e8(void)

{
  float10 in_ST0;

  (**(code **)(**(int **)(*(int *)(*(int *)PTR_DAT_007828b0 + 0x388) + 0x2c0) + 0x44))();
  FUN_004ee858(*(undefined4 *)(*(int *)PTR_DAT_007828b0 + 0x388),0xff000018);
  DAT_0077b578 = 1;
  FUN_00407eb8(&PTR_u_Game_Information_0077b57c,L"Game Information");
  DAT_0077b580 = 0xffffffff;
  DAT_0077b584 = 0xffffffff;
  DAT_0077b588 = 600;
  DAT_0077b58c = 400;
  DAT_0077b590 = 1;
  DAT_0077b594 = 1;
  DAT_0077b598 = 0;
  DAT_0077b59c = 1;
  DAT_0078895c = 0;
  FUN_004199b0();
  _DAT_00788964 = (double)in_ST0;
  return;
}
