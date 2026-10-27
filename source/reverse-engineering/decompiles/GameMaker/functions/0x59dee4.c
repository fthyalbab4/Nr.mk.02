// rea decompile_all
// name: FUN_0059dee4
// address: 0x59dee4
// body: available
// range: 0x59dee4-0x59dfa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59defe (push 0x59dfa9 followed by fs-segment stack chaining); handler 0x59dfa9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059dee4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *local_14;
  undefined1 local_10;
  undefined4 local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  puStack_24 = &LAB_0059dfa9;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00404350(param_1 + 0xd0,*(undefined4 *)(param_1 + 0xd8));
  FUN_0043f488(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xd0),
               *(undefined4 *)(param_1 + 0xd8));
  FUN_0043f488(*(undefined4 *)(param_1 + 0xb0),&local_8,4);
  local_8 = FUN_00592f20(local_8);
  iVar2 = FUN_005859a4(*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xd0),
                       *(undefined4 *)(param_1 + 0xd8));
  *(int *)(param_1 + 0xe0) = iVar2;
  if (iVar2 != local_8) {
    FUN_0040b75c(PTR_PTR_00781620,&local_c);
    local_14 = &LAB_0059dfc4;
    local_10 = 0x11;
    FUN_00592d3c(local_c,&local_14,0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0059dfb0;
  puStack_24 = (undefined1 *)0x59dfa8;
  thunk_FUN_00406e5c(&local_c,uStack_28,puVar1);
  return;
}
