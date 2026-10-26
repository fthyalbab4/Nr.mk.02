// rea decompile_all
// name: FUN_005f057c
// address: 0x5f057c
// body: available
// range: 0x5f057c-0x5f05c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f057c(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  undefined4 *puVar2;
  undefined *puVar3;

  uVar1 = FUN_0040b268(in_stack_00000004 + 0x294);
  puVar3 = &DAT_005f05c4;
  puVar2 = *(undefined4 **)(in_stack_00000004 + 0x280);
  (**(code **)*puVar2)();
  FUN_0040b268(in_stack_00000004 + 0x298,extraout_EDX,extraout_ECX,puVar2,puVar3,uVar1);
  (**(code **)**(undefined4 **)(in_stack_00000004 + 0x280))();
  return 0;
}
