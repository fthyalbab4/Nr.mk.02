// rea decompile_all
// name: FUN_0048d0cc
// address: 0x48d0cc
// body: available
// range: 0x48d0cc-0x48d18e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048d0cc(void)

{
  int *piVar1;
  int in_stack_00000004;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  piVar1 = *(int **)(in_stack_00000004 + -8);
  local_c = piVar1[2];
  local_8 = piVar1[1];
  local_14 = *piVar1;
  local_10 = piVar1[3];
  FUN_0045b850(*(undefined4 *)(*(int *)(in_stack_00000004 + -0xc) + 0x44),
               *(undefined4 *)(in_stack_00000004 + -0x10));
  local_2c = local_14;
  local_28 = local_10;
  local_24 = *piVar1;
  local_20 = piVar1[1];
  local_1c = local_c;
  local_18 = local_8;
  (**(code **)(**(int **)(in_stack_00000004 + -0xc) + 0x68))
            (*(int **)(in_stack_00000004 + -0xc),&local_2c,2);
  FUN_0045b850(*(undefined4 *)(*(int *)(in_stack_00000004 + -0xc) + 0x44),
               *(undefined4 *)(in_stack_00000004 + 0xc));
  local_1c = local_14 + -1;
  local_2c = local_c;
  local_28 = local_8;
  local_24 = piVar1[2];
  local_20 = piVar1[3];
  local_18 = local_10;
  local_14 = local_1c;
  (**(code **)(**(int **)(in_stack_00000004 + -0xc) + 0x68))
            (*(int **)(in_stack_00000004 + -0xc),&local_2c,2);
  return;
}
