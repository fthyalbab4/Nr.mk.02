// rea decompile_all
// name: FUN_00441c98
// address: 0x441c98
// body: available
// range: 0x441c98-0x441d0f inclusive
// range: 0x441d33-0x441d37 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x441ca9 (push 0x441d10 followed by fs-segment stack chaining); handler 0x441d10 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441c98(void)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00441d10;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00405d08(*(undefined4 *)(in_stack_00000004 + -8),
               *(undefined4 *)(*(int *)(in_stack_00000004 + -0x10) + 0x2c));
  (**(code **)(**(int **)(in_stack_00000004 + -0x10) + 0x20))
            (*(int **)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -8),
             in_stack_00000004 + -0xc);
  if ((*(byte *)(*(int *)(in_stack_00000004 + -8) + 0x1c) & 0x10) != 0) {
    iVar2 = FUN_0043a95c(*(undefined4 *)(in_stack_00000004 + -0xc));
    if (iVar2 == *(int *)(in_stack_00000004 + -8)) {
      puVar1 = (ushort *)(*(int *)(in_stack_00000004 + -8) + 0x1c);
      *puVar1 = *puVar1 | 0x200;
    }
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}
