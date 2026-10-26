// rea decompile_all
// name: FUN_00576f6c
// address: 0x576f6c
// body: available
// range: 0x576f6c-0x576fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x576f83 (push 0x576fe8 followed by fs-segment stack chaining); handler 0x576fe8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00576f6c(void)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  int in_stack_00000004;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00576fe8;
  iStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1c;
  (**(code **)(**(int **)(in_stack_00000004 + -4) + 0x120))
            (*(int **)(in_stack_00000004 + -4),0,
             *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x28c));
  puVar1 = puStack_18;
  *in_FS_OFFSET = (int)&local_8;
  puStack_18 = &LAB_00576fef;
  iStack_1c = 0x576fe7;
  thunk_FUN_00406e5c(&local_8,&local_8,puVar1);
  return;
}
