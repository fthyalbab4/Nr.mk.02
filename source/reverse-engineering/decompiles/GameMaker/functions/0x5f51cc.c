// rea decompile_all
// name: FUN_005f51cc
// address: 0x5f51cc
// body: available
// range: 0x5f51cc-0x5f5274 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f51ee (push 0x5f5275 followed by fs-segment stack chaining); handler 0x5f5275 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f51cc(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_8 = 0;
  puStack_28 = &LAB_005f5275;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x3a) != 0) {
    if (param_4 == -1) {
      local_10 = 0;
      local_c = 0x11;
      puStack_24 = &stack0xfffffffc;
      FUN_005e1dd0(*(undefined4 *)(&DAT_0077db40 + (param_2 & 0xff) * 4),&local_10,0,&local_8);
      (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_1,param_2,local_8);
      puVar1 = puStack_24;
    }
    else {
      FUN_005e1dd0(*(undefined4 *)(&DAT_0077db40 + (param_2 & 0xff) * 4),param_3,param_4,&local_14);
      (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_1,param_2,local_14);
      puVar1 = puStack_24;
    }
  }
  puStack_24 = puVar1;
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005f527c;
  puStack_28 = (undefined1 *)0x5f526c;
  thunk_FUN_00406e5c(&local_14,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x5f5274;
  thunk_FUN_00406e5c(&local_8);
  return;
}
