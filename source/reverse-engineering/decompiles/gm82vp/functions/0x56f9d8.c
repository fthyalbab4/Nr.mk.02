// rea decompile_all
// name: FUN_0056f9d8
// address: 0x56f9d8
// body: available
// range: 0x56f9d8-0x56fa60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56f9fb (push 0x56fa61 followed by fs-segment stack chaining); handler 0x56fa61 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056f9d8(int param_1,undefined4 param_2,char param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x56f9f0;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_1c = &LAB_0056fa61;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_0056fdf4(param_1);
  cVar2 = FUN_00516494(*(undefined4 *)(param_1 + 4),local_8);
  if (cVar2 != '\0') {
    if (param_3 != '\0') {
      FUN_0056e3b8(*(undefined4 *)(param_1 + 4),0);
    }
    if (param_4 != '\0') {
      FUN_0056e3dc(*(undefined4 *)(param_1 + 4));
    }
    if (param_3 != '\0') {
      FUN_0056e4f8(*(undefined4 *)(param_1 + 4));
    }
    FUN_0056fb50(param_1);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0056fa68;
  puStack_1c = (undefined1 *)0x56fa60;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
