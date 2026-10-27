// rea decompile_all
// name: FUN_00564528
// address: 0x564528
// body: available
// range: 0x564528-0x5645d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00564528(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,double param_6,double param_7,double param_8)

{
  undefined1 local_90 [140];

  FUN_00531620(local_90,param_2,param_3,(float)param_6,(float)param_7,(float)param_8);
  (**(code **)PTR_DAT_00688bd8)();
  (**(code **)(**(int **)PTR_DAT_00689570 + 0x98))();
  (**(code **)PTR_DAT_00689630)();
  (**(code **)(**(int **)PTR_DAT_00689570 + 0x94))();
  return;
}
