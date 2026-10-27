// rea decompile_all
// name: FUN_005c4c04
// address: 0x5c4c04
// body: available
// range: 0x5c4c04-0x5c4c7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c4c23 (push 0x5c4c7f followed by fs-segment stack chaining); handler 0x5c4c7f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c4c04(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined1 local_14;
  int local_10;
  undefined1 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  puStack_2c = &LAB_005c4c7f;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  if (param_3 != 0) {
    puVar1 = &stack0xfffffffc;
    if (*param_1 != 0) {
      FUN_004082dc(param_1,&DAT_005c4c9c);
      puVar1 = puStack_28;
    }
    puStack_28 = puVar1;
    local_14 = 0x11;
    local_c = 0x11;
    local_18 = param_2;
    local_10 = param_3;
    FUN_00417d4c(L"%s=\"%s\"",&local_18,1,&local_8);
    FUN_004082dc(param_1,local_8);
    puVar1 = puStack_28;
  }
  puStack_28 = puVar1;
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005c4c86;
  puStack_2c = (undefined1 *)0x5c4c7e;
  thunk_FUN_00406e5c(&local_8,uStack_30,puVar1);
  return;
}
