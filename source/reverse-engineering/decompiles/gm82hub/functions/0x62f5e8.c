// rea decompile_all
// name: FUN_0062f5e8
// address: 0x62f5e8
// body: available
// range: 0x62f5e8-0x62f680 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062f5e8(void)

{
  int iVar1;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;

  *in_stack_00000004 = 0;
  iVar1 = FUN_004048b8();
  if ((extraout_EDX == 0) && (iVar1 == 1)) {
    *(double *)(in_stack_00000004 + 2) =
         (double)(int)((double)*(int *)PTR_DAT_00688f94 < *(double *)(in_stack_0000000c + 8));
  }
  else {
    iVar1 = FUN_004048b8();
    if ((extraout_EDX_00 == 0) && (iVar1 == 2)) {
      *(double *)(in_stack_00000004 + 2) =
           (double)(int)(*(double *)(in_stack_0000000c + 8) < (double)*(int *)PTR_DAT_00688f94);
    }
    else {
      *(double *)(in_stack_00000004 + 2) =
           (double)(int)((double)*(int *)PTR_DAT_00688f94 == *(double *)(in_stack_0000000c + 8));
    }
  }
  return;
}
