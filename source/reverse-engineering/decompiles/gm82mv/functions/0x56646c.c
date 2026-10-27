// rea decompile_all
// name: FUN_0056646c
// address: 0x56646c
// body: available
// range: 0x56646c-0x5665c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056646c(void)

{
  double dVar1;
  double dVar2;
  float10 in_ST0;
  double in_stack_00000004;
  double in_stack_0000000c;
  double in_stack_00000014;
  double in_stack_0000001c;
  double in_stack_00000024;

  FUN_004048a8();
  dVar1 = (double)in_ST0;
  if (dVar1 != 0.0) {
    dVar2 = ((in_stack_00000014 - in_stack_00000024) * in_stack_00000004 * 0.5) / dVar1;
    dVar1 = ((in_stack_0000000c - in_stack_0000001c) * in_stack_00000004 * 0.5) / dVar1;
    DAT_0083b1fc = (float)((float10)in_stack_00000024 - (float10)dVar1);
    DAT_0083b200 = (float)((float10)in_stack_0000001c + (float10)dVar2);
    DAT_0083b204 = (float)*(double *)PTR_DAT_00689120;
    DAT_0083b208 = DAT_00686444;
    DAT_0083b20c = (float)((float10)in_stack_00000014 - (float10)dVar1);
    DAT_0083b210 = (float)((float10)in_stack_0000000c + (float10)dVar2);
    DAT_0083b214 = (float)*(double *)PTR_DAT_00689120;
    DAT_0083b218 = DAT_00686444;
    DAT_0083b21c = (float)((float10)in_stack_00000014 + (float10)dVar1);
    DAT_0083b220 = (float)((float10)in_stack_0000000c - (float10)dVar2);
    DAT_0083b224 = (float)*(double *)PTR_DAT_00689120;
    DAT_0083b228 = DAT_00686444;
    DAT_0083b22c = (float)((float10)in_stack_00000024 + (float10)dVar1);
    DAT_0083b230 = (float)((float10)in_stack_0000001c - (float10)dVar2);
    DAT_0083b234 = (float)*(double *)PTR_DAT_00689120;
    DAT_0083b238 = DAT_00686444;
    (**(code **)(**(int **)PTR_DAT_00689570 + 0xf4))();
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x130))();
    (**(code **)(**(int **)PTR_DAT_00689570 + 0x120))();
  }
  return;
}
