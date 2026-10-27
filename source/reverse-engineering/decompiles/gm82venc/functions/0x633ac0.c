// rea decompile_all
// name: FUN_00633ac0
// address: 0x633ac0
// body: available
// range: 0x633ac0-0x633b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00633ac0(void)

{
  undefined4 uVar1;
  float10 in_ST0;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;

  *in_stack_00000004 = 0;
  local_c = *(undefined4 *)(in_stack_0000000c + 8);
  uVar1 = *(undefined4 *)(in_stack_0000000c + 0x20);
  local_14 = uVar1;
  uStack_10 = *(undefined4 *)(in_stack_0000000c + 0x24);
  uStack_8 = *(undefined4 *)(in_stack_0000000c + 0xc);
  if (*(double *)(in_stack_0000000c + 0x20) < *(double *)(in_stack_0000000c + 8)) {
    local_14 = local_c;
    uStack_10 = *(undefined4 *)(in_stack_0000000c + 0xc);
    local_c = uVar1;
    uStack_8 = *(undefined4 *)(in_stack_0000000c + 0x24);
  }
  FUN_004047d4();
  *(double *)(in_stack_00000004 + 2) =
       (double)(((float10)(double)CONCAT44(uStack_10,local_14) -
                (float10)(double)CONCAT44(uStack_8,local_c)) * in_ST0 +
               (float10)(double)CONCAT44(uStack_8,local_c));
  return;
}
