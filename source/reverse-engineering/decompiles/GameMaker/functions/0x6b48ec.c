// rea decompile_all
// name: FUN_006b48ec
// address: 0x6b48ec
// body: available
// range: 0x6b48ec-0x6b49e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b4919 (push 0x6b49e8 followed by fs-segment stack chaining); handler 0x6b49e8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b48ec(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint uStack_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_18 = *param_5;
  local_14 = param_5[1];
  uStack_10 = param_5[2];
  puStack_30 = &LAB_006b49e8;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_3;
  local_8 = param_2;
  if ((((DAT_0079002c == '\x01') && (param_4 == DAT_00790030)) && (local_14 == DAT_00790034)) &&
     (*PTR_DAT_00782878 == DAT_00790038)) {
    puStack_2c = &stack0xfffffffc;
    FUN_00408034(&local_1c,local_18 & 0xffff);
    FUN_004082dc(&DAT_00790040,local_1c);
    DAT_0079003c = DAT_0079003c + 1;
  }
  else {
    FUN_006b46e0(param_1);
    *(undefined1 *)(param_1 + 0x32e) = *(undefined1 *)(param_1 + 0x32e);
    DAT_00790038 = *PTR_DAT_00782878;
    DAT_00790024 = local_8;
    DAT_00790028 = local_c;
    DAT_0079003c = 1;
    DAT_00790030 = param_4;
    DAT_00790034 = local_14;
    DAT_0079002c = '\x01';
    FUN_00408034(&DAT_00790040,local_18 & 0xffff);
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_006b49ef;
  puStack_30 = (undefined1 *)0x6b49e7;
  thunk_FUN_00406e5c(&local_1c,uStack_34,puVar1);
  return;
}
