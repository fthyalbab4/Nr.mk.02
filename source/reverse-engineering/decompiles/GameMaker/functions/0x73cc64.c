// rea decompile_all
// name: FUN_0073cc64
// address: 0x73cc64
// body: available
// range: 0x73cc64-0x73cd5e inclusive
// range: 0x73cd66-0x73cd7e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x73cc81 (push 0x73cd7f followed by fs-segment stack chaining); handler 0x73cd7f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x73ccb2 (push 0x73cd5f followed by fs-segment stack chaining); handler 0x73cd5f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0073cc64(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStackY_454;
  undefined4 uStack_448;
  undefined1 *puStack_444;
  undefined1 *puStack_440;
  undefined4 local_438;
  undefined4 local_434 [7];
  undefined4 local_418;
  undefined1 local_214 [520];
  HANDLE local_c;
  undefined1 local_5;

  puStack_440 = &stack0xfffffffc;
  local_438 = 0;
  puStack_444 = &LAB_0073cd7f;
  uStack_448 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_448;
  uStackY_454 = 0x73cc92;
  local_c = (HANDLE)FUN_00732d14();
  puVar1 = puStack_440;
  local_5 = local_c != (HANDLE)0xffffffff;
  if ((bool)local_5) {
    uStackY_454 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_454;
    FUN_00738660(local_434,0x428);
    local_434[0] = 0x428;
    iVar2 = FUN_005a6558(local_c,local_434);
    while (iVar2 != 0) {
      if (*(char *)(in_stack_00000004 + -1) == '\0') {
        FUN_004080c8(&local_438,local_214,0x104);
        (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x3c))
                  (*(int **)(in_stack_00000004 + -8),local_438,local_418);
      }
      else {
        (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x3c))
                  (*(int **)(in_stack_00000004 + -8),0,local_418);
      }
      iVar2 = FUN_005a6578(local_c,local_434);
    }
    *in_FS_OFFSET = uStackY_454;
    uStackY_454 = 0x73cd5e;
    CloseHandle(local_c);
    return;
  }
  *in_FS_OFFSET = uStack_448;
  puStack_440 = &LAB_0073cd86;
  puStack_444 = (undefined1 *)0x73cd7e;
  thunk_FUN_00406e5c(&local_438,uStack_448,puVar1);
  return;
}
