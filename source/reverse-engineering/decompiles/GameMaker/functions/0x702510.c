// rea decompile_all
// name: FUN_00702510
// address: 0x702510
// body: available
// range: 0x702510-0x7025c4 inclusive
// range: 0x7025d6-0x7025e4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x70252c (push 0x7025c5 followed by fs-segment stack chaining); handler 0x7025c5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00702510(int param_1,int *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  undefined1 local_5;

  puStack_1c = &stack0xfffffffc;
  local_5 = 0;
  puStack_20 = &LAB_007025c5;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  (**(code **)(*param_2 + 0xc))(param_2,&local_c,4);
  if (local_c == 800) {
    FUN_00701dc0(param_1);
    (**(code **)(*param_2 + 0xc))(param_2,param_1 + 4,4);
    (**(code **)(*param_2 + 0xc))(param_2,param_1 + 8,4);
    lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)*(int *)(param_1 + 8);
    uVar2 = FUN_0040431c((int)lVar1 * 4,(int)((ulonglong)lVar1 >> 0x20));
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)*(int *)(param_1 + 8);
    if (0 < (int)lVar1) {
      uVar2 = FUN_0052f258(param_2,(int)((ulonglong)lVar1 >> 0x20));
      FUN_0043f488(uVar2,*(undefined4 *)(param_1 + 0xc),
                   *(int *)(param_1 + 4) * *(int *)(param_1 + 8) * 4);
      FUN_00405a7c(uVar2);
    }
    *in_FS_OFFSET = uStack_24;
    local_5 = 1;
  }
  else {
    *in_FS_OFFSET = uStack_24;
  }
  return local_5;
}
