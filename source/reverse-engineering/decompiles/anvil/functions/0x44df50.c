// rea decompile_all
// name: FUN_0044df50
// address: 0x44df50
// body: available
// range: 0x44df50-0x44df8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0044df50(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  double in_stack_00000004;
  double in_stack_0000000c;

  iVar1 = FUN_004048c4();
  iVar2 = FUN_004048c4();
  if (extraout_EDX_00 == extraout_EDX && iVar2 == iVar1) {
    uVar3 = 0;
  }
  else if (in_stack_0000000c < in_stack_00000004) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = CONCAT31((int3)(CONCAT22((short)((uint)extraout_EDX >> 0x10),
                                     (ushort)(in_stack_0000000c < in_stack_00000004) << 8 |
                                     (ushort)(NAN(in_stack_0000000c) || NAN(in_stack_00000004)) <<
                                     10 | (ushort)(in_stack_0000000c == in_stack_00000004) << 0xe)
                           >> 8),1);
  }
  return uVar3;
}
