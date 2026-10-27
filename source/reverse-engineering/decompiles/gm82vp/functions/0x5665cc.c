// rea decompile_all
// name: FUN_005665cc
// address: 0x5665cc
// body: available
// range: 0x5665cc-0x566693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005665cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4,
                 double param_5,double param_6,double param_7)

{
  DAT_0083b1fc = (float)(_DAT_00566694 + (float10)param_7);
  DAT_0083b200 = (float)(_DAT_00566694 + (float10)param_6);
  DAT_0083b204 = (float)*(double *)PTR_DAT_00689120;
  DAT_0083b208 = FUN_0056382c(param_1,param_2,param_3,DAT_00686448,DAT_0068644c);
  DAT_0083b20c = (float)(_DAT_00566694 + (float10)param_5);
  DAT_0083b210 = (float)(_DAT_00566694 + (float10)param_4);
  DAT_0083b214 = (float)*(double *)PTR_DAT_00689120;
  DAT_0083b218 = FUN_0056382c(param_2);
  (**(code **)(**(int **)PTR_DAT_00689570 + 0xf4))();
  (**(code **)(**(int **)PTR_DAT_00689570 + 0x130))();
  (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
  return;
}
