// rea decompile_all
// name: FUN_0056d0ec
// address: 0x56d0ec
// body: available
// range: 0x56d0ec-0x56d17b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056d0ec(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int *in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;

  if ((*in_stack_00000010 != in_stack_00000010[2]) && (in_stack_00000010[1] != in_stack_00000010[3])
     ) {
    if ((char)param_1 == '\0') {
      FUN_0056cf08(in_stack_00000018 + -0x40,in_stack_00000014,1,param_1);
      FUN_0056cf08(in_stack_00000018 + -0x70,param_3,0,param_2);
    }
    else {
      FUN_0056cf08(in_stack_00000018 + -0x70,param_3,0,param_2);
      FUN_0056cf08(in_stack_00000018 + -0x40,in_stack_00000014,1,param_1);
    }
  }
  return;
}
