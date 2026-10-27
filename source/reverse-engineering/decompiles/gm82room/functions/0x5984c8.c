// rea decompile_all
// name: FUN_005984c8
// address: 0x5984c8
// body: available
// range: 0x5984c8-0x5984f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unable to track spacebase fully for stack */

undefined1 * FUN_005984c8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_stack_00000000;
  undefined4 uStack_8;
  int iStack_4;

  uVar3 = param_1 + 3U & 0xfffffffc;
  uVar2 = uVar3;
  if (0xffc < (int)uVar3) {
    do {
      uVar3 = uVar2;
      uVar2 = uVar3 - 0x1000;
    } while (-1 < (int)(uVar3 - 0x1000));
  }
  iVar1 = -uVar3;
  *(undefined1 **)((int)&stack0x00000000 + iVar1) = &stack0x00000004;
  *(int *)((int)&iStack_4 + iVar1) = (int)&iStack_4 + iVar1;
  *(undefined4 *)((int)&uStack_8 + iVar1) = in_stack_00000000;
  return &stack0x00000004 + iVar1;
}
