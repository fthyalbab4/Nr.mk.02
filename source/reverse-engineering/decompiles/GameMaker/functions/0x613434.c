// rea decompile_all
// name: FUN_00613434
// address: 0x613434
// body: available
// range: 0x613434-0x6134ad inclusive
// range: 0x6134b5-0x6134c6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61345f (push 0x6134ae followed by fs-segment stack chaining); handler 0x6134ae lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00613434(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;

  local_8 = param_3;
  if (param_2 != 0) {
    puStack_18 = (undefined1 *)0x613451;
    local_8 = FUN_00405a4c(&LAB_00433630,1);
    puStack_1c = &LAB_006134ae;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    if (param_3 == 0) {
      puStack_18 = &stack0xfffffffc;
      param_3 = FUN_005e02c8(1);
    }
    FUN_005e3478(local_8,param_2,param_3);
    FUN_0043f254(local_8);
    FUN_006135e0(param_1,local_8,0xffffffff);
    puVar1 = puStack_1c;
    *in_FS_OFFSET = param_4;
    puStack_1c = (undefined1 *)0x6134bf;
    uStack_20 = 0x6134ad;
    FUN_0041ef80(&local_8,param_4,puVar1);
    return;
  }
  puStack_18 = (undefined1 *)0x6134bf;
  FUN_00407eb8(param_4,0);
  return;
}
