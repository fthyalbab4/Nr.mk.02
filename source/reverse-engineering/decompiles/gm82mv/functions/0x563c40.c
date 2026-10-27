// rea decompile_all
// name: FUN_00563c40
// address: 0x563c40
// body: available
// range: 0x563c40-0x563d5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00563c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4,
                 double param_5)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  double in_stack_00000024;
  double in_stack_0000002c;
  double in_stack_00000034;
  double in_stack_0000003c;
  double in_stack_00000044;
  double in_stack_0000004c;
  double in_stack_00000054;
  double in_stack_0000005c;
  double in_stack_00000064;
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [76];

  if (*(int *)PTR_DAT_00689570 != 0) {
    FUN_00531620(local_50,param_2,param_3,(float)in_stack_00000024,(float)in_stack_0000002c,
                 (float)in_stack_00000034);
    FUN_00531620(local_5c,extraout_EDX,extraout_ECX,(float)in_stack_0000003c,
                 (float)in_stack_00000044,(float)in_stack_0000004c);
    FUN_00531620(local_68,extraout_EDX_00,extraout_ECX_00,(float)in_stack_00000054,
                 (float)in_stack_0000005c,(float)in_stack_00000064);
    (**(code **)PTR_DAT_00688bac)();
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x94))();
    if (param_5 != param_4) {
      (**(code **)PTR_DAT_0068925c)();
      (**(code **)(**(int **)PTR_DAT_00689570 + 0x94))();
    }
  }
  return;
}
