// rea decompile_all
// name: FUN_0059caa8
// address: 0x59caa8
// body: available
// range: 0x59caa8-0x59cb41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0059caa8(void)

{
  uint uVar1;
  uint uVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  bool bVar3;
  int in_stack_00000004;

  uVar1 = (**(code **)**(undefined4 **)(in_stack_00000004 + -0x14))();
  uVar2 = FUN_0043f234(*(undefined4 *)(in_stack_00000004 + -0x14));
  if (extraout_EDX_00 == extraout_EDX) {
    bVar3 = uVar2 < uVar1;
  }
  else {
    bVar3 = extraout_EDX_00 < extraout_EDX;
  }
  if (bVar3 != false) {
    FUN_0043f488(*(undefined4 *)(in_stack_00000004 + -0x14),in_stack_00000004 + -4,4);
    FUN_0043f488(*(undefined4 *)(in_stack_00000004 + -0x14),in_stack_00000004 + -6,2);
    if (*(short *)(in_stack_00000004 + -0x18) == 3) {
      FUN_0043f488(*(undefined4 *)(in_stack_00000004 + -0x14),in_stack_00000004 + -0xc,4);
    }
    FUN_0043f488(*(undefined4 *)(in_stack_00000004 + -0x14),in_stack_00000004 + -0x10,4);
  }
  return bVar3;
}
