// rea decompile_all
// name: FUN_00442594
// address: 0x442594
// body: available
// range: 0x442594-0x442622 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4425ab (push 0x442623 followed by fs-segment stack chaining); handler 0x442623 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442594(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_18;
  int local_14 [2];
  int local_c [2];

  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  puStack_24 = &LAB_00442623;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_0042cd6c(*(undefined4 *)(in_stack_00000004 + -4),*(undefined4 *)(in_stack_00000004 + -8),
               local_c);
  iVar2 = 0;
  if (*(char *)(in_stack_00000004 + -9) != '\0') {
    FUN_0042cd6c(*(undefined4 *)(in_stack_00000004 + -0x10),*(undefined4 *)(in_stack_00000004 + -8),
                 local_14);
    iVar2 = local_14[0];
  }
  if ((iVar2 != local_c[0]) && (local_c[0] != 0)) {
    FUN_0044253c(local_c,&local_18);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0044262a;
  puStack_24 = (undefined1 *)0x442622;
  thunk_FUN_004072d8(&local_18,uStack_28,puVar1);
  return;
}
