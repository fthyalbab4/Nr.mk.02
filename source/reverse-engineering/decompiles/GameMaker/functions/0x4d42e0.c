// rea decompile_all
// name: FUN_004d42e0
// address: 0x4d42e0
// body: available
// range: 0x4d42e0-0x4d4367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d42fb (push 0x4d4368 followed by fs-segment stack chaining); handler 0x4d4368 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d42e0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = &stack0xfffffffc;
  puStack_1c = &LAB_004d4368;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004eded0(param_1);
  FUN_00407eb8(param_1 + 0xaa,param_4);
  if (-1 < param_3) {
    FUN_0051b88c(param_1,param_3);
  }
  if (-1 < param_5) {
    FUN_0051b8c8(param_1,param_5);
  }
  if ((param_5 < 0) && (param_3 < 0)) {
    FUN_005176f8(param_1,4);
  }
  (**(code **)(*param_1 + 0x110))();
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d436f;
  puStack_1c = (undefined1 *)0x4d4367;
  FUN_00405a7c(param_1,uStack_20,puVar1);
  return;
}
