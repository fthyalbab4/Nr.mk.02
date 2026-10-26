// rea decompile_all
// name: FUN_005b6f80
// address: 0x5b6f80
// body: available
// range: 0x5b6f80-0x5b7019 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b6f80(void)

{
  int in_stack_00000004;
  short *in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined1 local_108 [256];
  undefined4 local_8;

  if (0x40 < *(byte *)(in_stack_0000000c + 1)) {
    FUN_0041bfec(&PTR_LAB_005b5d34,1,PTR_PTR_00781c9c);
    in_stack_00000008 = (short *)FUN_00406618();
  }
  if (*in_stack_00000008 == 9) {
    local_8 = *(undefined4 *)(in_stack_00000008 + 4);
  }
  else if (*in_stack_00000008 == 0x4009) {
    local_8 = **(undefined4 **)(in_stack_00000008 + 4);
  }
  else {
    FUN_005b6f68();
  }
  FUN_005b6e84(local_8,in_stack_0000000c + 3 + (uint)*(byte *)(in_stack_0000000c + 1),
               *(byte *)(in_stack_0000000c + 2) + 1,local_108);
  if (in_stack_00000004 != 0) {
    FUN_004249d4(in_stack_00000004);
  }
  FUN_005b6b14(local_8,in_stack_0000000c,local_108,in_stack_00000004,in_stack_00000010);
  return;
}
