// rea decompile_all
// name: FUN_00749dbc
// address: 0x749dbc
// body: available
// range: 0x749dbc-0x749e38 inclusive
// range: 0x749e55-0x749e70 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x749df5 (push 0x749e71 followed by fs-segment stack chaining); handler 0x749e71 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x749e12 (push 0x749e39 followed by fs-segment stack chaining); handler 0x749e39 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00749dbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_8;

  if (param_4 == 0) {
    puStack_24 = (undefined1 *)0x749ddf;
    local_8 = FUN_0074a094(&LAB_00744474,1);
  }
  else {
    local_8 = param_4;
  }
  puStack_28 = &LAB_00749e71;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  puStack_30 = (undefined1 *)0x749e04;
  puStack_24 = &stack0xfffffffc;
  iVar2 = FUN_0043f190(&PTR_FUN_00432364,1);
  puStack_34 = &LAB_00749e39;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_0043f0cc(iVar2,1);
  *(undefined1 *)(iVar2 + 0x29) = 0;
  FUN_00749cd0(param_1);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_38;
  *in_FS_OFFSET = local_2c;
  puStack_24 = &LAB_00749e78;
  if (param_4 == 0) {
    puStack_28 = (undefined1 *)0x749e70;
    FUN_00405a7c(local_8,local_2c,puVar1);
  }
  return;
}
