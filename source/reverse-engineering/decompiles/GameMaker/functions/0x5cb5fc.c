// rea decompile_all
// name: FUN_005cb5fc
// address: 0x5cb5fc
// body: available
// range: 0x5cb5fc-0x5cb666 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cb60c (push 0x5cb667 followed by fs-segment stack chaining); handler 0x5cb667 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cb5fc(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int iVar3;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;

  puStack_c = &stack0xfffffffc;
  local_8 = 0;
  puStack_10 = &LAB_005cb667;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_005caf28(*(undefined4 *)(in_stack_00000004 + -0xc),&local_8);
  if (local_8 != 0) {
    iVar3 = in_stack_00000004;
    cVar2 = FUN_005cb488(L"schemaLocation",*(undefined4 *)(in_stack_00000004 + -8));
    if (cVar2 == '\0') {
      FUN_005cb488(L"noNamespaceSchemaLocation",*(undefined4 *)(in_stack_00000004 + -8),iVar3,
                   in_stack_00000004);
    }
  }
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_005cb66e;
  puStack_10 = (undefined1 *)0x5cb666;
  FUN_0040b140(&local_8,uStack_14,puVar1);
  return;
}
