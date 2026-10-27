// rea decompile_all
// name: FUN_00563b84
// address: 0x563b84
// body: available
// range: 0x563b84-0x563c3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00563b84(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4,
                 double param_5,double param_6,double param_7,double param_8,double param_9,
                 double param_10,double param_11,double param_12)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [76];

  if (*(int *)PTR_DAT_00689570 != 0) {
    FUN_00531620(local_50,param_2,param_3,(float)param_4,(float)param_5,(float)param_6);
    FUN_00531620(local_5c,extraout_EDX,extraout_ECX,(float)param_7,(float)param_8,(float)param_9);
    FUN_00531620(local_68,extraout_EDX_00,extraout_ECX_00,(float)param_10,(float)param_11,
                 (float)param_12);
    (**(code **)PTR_DAT_00688bac)();
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x94))();
  }
  return;
}
