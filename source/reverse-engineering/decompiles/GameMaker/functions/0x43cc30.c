// rea decompile_all
// name: FUN_0043cc30
// address: 0x43cc30
// body: available
// range: 0x43cc30-0x43cc8b inclusive
// range: 0x43cc93-0x43cc97 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43cc58 (push 0x43cc8c followed by fs-segment stack chaining); handler 0x43cc8c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043cc30(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  if (0 < *(int *)(param_1[2] + 8)) {
    puStack_14 = (undefined1 *)0x43cc4d;
    (**(code **)(*param_1 + 0x20))();
    puStack_18 = &LAB_0043cc8c;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    while( true ) {
      puVar2 = puStack_14;
      iVar1 = *(int *)(param_1[2] + 8);
      if (iVar1 < 1) break;
      FUN_00405a7c(*(undefined4 *)(*(int *)(param_1[2] + 4) + -4 + iVar1 * 4));
    }
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x43cc93;
    puStack_18 = (undefined1 *)0x43cc8b;
    (**(code **)(*param_1 + 0x24))(param_1,*param_1,puVar2);
    return;
  }
  return;
}
