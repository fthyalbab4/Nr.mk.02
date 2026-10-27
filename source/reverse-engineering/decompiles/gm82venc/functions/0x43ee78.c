// rea decompile_all
// name: FUN_0043ee78
// address: 0x43ee78
// body: available
// range: 0x43ee78-0x43eef2 inclusive
// range: 0x43ef16-0x43ef1a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ee89 (push 0x43eef3 followed by fs-segment stack chaining); handler 0x43eef3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043ee78(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_0043eef3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar1 = FUN_00440f94(*(undefined4 *)(in_stack_00000004 + -0x10),
                       *(undefined4 *)(in_stack_00000004 + -0x1c));
  uVar1 = (**(code **)(**(int **)(in_stack_00000004 + -0x10) + 0x14))
                    (*(int **)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -0xc),
                     uVar1);
  *(undefined4 *)(in_stack_00000004 + -8) = uVar1;
  iVar2 = FUN_00406268(*(undefined4 *)(in_stack_00000004 + -8));
  *(int *)(*(int *)(in_stack_00000004 + -0x10) + 0x2c) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(*(int *)(in_stack_00000004 + -0x10) + 0x2c) =
         *(undefined4 *)(*(int *)(in_stack_00000004 + -0x10) + 0x18);
  }
  *in_FS_OFFSET = uStack_1c;
  return;
}
