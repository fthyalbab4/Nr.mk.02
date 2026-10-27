// rea decompile_all
// name: FUN_00445f24
// address: 0x445f24
// body: available
// range: 0x445f24-0x445fa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x445f3b (push 0x445fa6 followed by fs-segment stack chaining); handler 0x445fa6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445f24(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  int local_c [2];

  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_00445fa6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0042e188(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -4),
               local_c);
  FUN_004456f0();
  if (local_c[0] == 0) {
    FUN_0044699c(*(undefined4 *)(in_stack_00000004 + -8),0xd,in_stack_00000004);
  }
  else {
    (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x14))
              (*(int **)(in_stack_00000004 + -8),local_c,&local_10);
    FUN_00444cb8(*(undefined4 *)(in_stack_00000004 + -8),local_10);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00445fad;
  puStack_1c = (undefined1 *)0x445fa5;
  thunk_FUN_00406e5c(&local_10,uStack_20,puVar1);
  return;
}
