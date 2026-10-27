// rea decompile_all
// name: FUN_005e1e50
// address: 0x5e1e50
// body: available
// range: 0x5e1e50-0x5e1fdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e1e50(void)

{
  short sVar1;
  undefined4 uVar2;
  int in_stack_00000004;

  FUN_005e1cbc();
  if (3 < *(ushort *)(in_stack_00000004 + -0x28)) {
    FUN_0043ca88(*(undefined4 *)(in_stack_00000004 + -0x24),in_stack_00000004 + -0x14,4);
  }
  FUN_0043ca88(*(undefined4 *)(in_stack_00000004 + -0x24),in_stack_00000004 + -0x20,0xc);
  sVar1 = *(short *)(in_stack_00000004 + -0x16);
  if (sVar1 == 0) {
    uVar2 = FUN_00404324(*(undefined4 *)(in_stack_00000004 + -0x1c));
    *(undefined4 *)(in_stack_00000004 + -0x78) = uVar2;
    if (*(short *)(in_stack_00000004 + -0x61) == 0) {
      FUN_0043ca88(*(undefined4 *)(in_stack_00000004 + -0x24),
                   *(undefined4 *)(in_stack_00000004 + -0x78),
                   *(undefined4 *)(in_stack_00000004 + -0x20));
      return;
    }
    FUN_005e1d58(*(undefined4 *)(in_stack_00000004 + -0x78));
  }
  else if (sVar1 == 1) {
    uVar2 = FUN_00404324(*(undefined4 *)(in_stack_00000004 + -0x1c));
    *(undefined4 *)(in_stack_00000004 + -0x7c) = uVar2;
    if (*(short *)(in_stack_00000004 + -0x61) == 0) {
      FUN_0043ca88(*(undefined4 *)(in_stack_00000004 + -0x24),
                   *(undefined4 *)(in_stack_00000004 + -0x7c),
                   *(undefined4 *)(in_stack_00000004 + -0x20));
      return;
    }
    FUN_005e1d58(*(undefined4 *)(in_stack_00000004 + -0x7c));
  }
  else if (sVar1 == 2) {
    uVar2 = FUN_00404324(*(undefined4 *)(in_stack_00000004 + -0x1c));
    *(undefined4 *)(in_stack_00000004 + -0x80) = uVar2;
    if (*(short *)(in_stack_00000004 + -0x61) == 0) {
      FUN_0043ca88(*(undefined4 *)(in_stack_00000004 + -0x24),
                   *(undefined4 *)(in_stack_00000004 + -0x80),
                   *(undefined4 *)(in_stack_00000004 + -0x20));
      return;
    }
    FUN_005e1d58(*(undefined4 *)(in_stack_00000004 + -0x80));
  }
  else if (sVar1 == 3) {
    uVar2 = FUN_00404324(*(undefined4 *)(in_stack_00000004 + -0x1c));
    *(undefined4 *)(in_stack_00000004 + -0x84) = uVar2;
    if (*(short *)(in_stack_00000004 + -0x61) == 0) {
      FUN_0043ca88(*(undefined4 *)(in_stack_00000004 + -0x24),
                   *(undefined4 *)(in_stack_00000004 + -0x84),
                   *(undefined4 *)(in_stack_00000004 + -0x20));
    }
    else {
      FUN_005e1d58(*(undefined4 *)(in_stack_00000004 + -0x84));
    }
  }
  return;
}
