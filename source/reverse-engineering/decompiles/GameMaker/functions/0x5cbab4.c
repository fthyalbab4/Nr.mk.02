// rea decompile_all
// name: FUN_005cbab4
// address: 0x5cbab4
// body: available
// range: 0x5cbab4-0x5cbb9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cbad4 (push 0x5cbba0 followed by fs-segment stack chaining); handler 0x5cbba0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cbab4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int *in_FS_OFFSET;
  undefined4 *puStackY_34;
  undefined4 *puVar1;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_005cbba0;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  if (param_2 == 0) {
    puVar1 = (undefined4 *)0x5cbb1a;
    FUN_00407f0c(&local_8,&DAT_005cbbbc);
  }
  else {
    puVar1 = &local_8;
    puStack_20 = &stack0xfffffffc;
    FUN_005cb8cc(param_1,0,&DAT_005cbbbc);
    FUN_005cb8cc(param_1,1,0,&local_c);
    puStackY_34 = &local_10;
    FUN_005cb8cc(param_1,2,0);
  }
  if (param_5 == '\0') {
    FUN_00429418(&local_8,param_3);
  }
  else if (param_5 == '\x01') {
    FUN_00429418(&local_c,param_3);
  }
  else if (param_5 == '\x02') {
    FUN_00429418(&local_10,param_3);
  }
  FUN_00407eb8(param_4,0);
  FUN_005c4c04(param_4,L"version",local_8);
  FUN_005c4c04(param_4,L"encoding",local_c);
  FUN_005c4c04(param_4,L"standalone",local_10);
  *in_FS_OFFSET = (int)puStackY_34;
  thunk_FUN_00406e80(&local_10,3,puVar1,&LAB_005cbba7);
  return;
}
