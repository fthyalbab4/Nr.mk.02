// rea decompile_all
// name: FUN_005a0a98
// address: 0x5a0a98
// body: available
// range: 0x5a0a98-0x5a0b6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a0ac3 (push 0x5a0b6d followed by fs-segment stack chaining); handler 0x5a0b6d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a0a98(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_28 = (undefined1 *)0x5a0ab8;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_2c = &LAB_005a0b6d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  if (DAT_00686bc8 == 0) {
    puStack_28 = &stack0xfffffffc;
    DAT_00686bc8 = FUN_00452b40(&DAT_00451994,1);
  }
  FUN_0041636c(*(undefined4 *)PTR_DAT_00688e9c,&local_10);
  FUN_00408678(&local_c,PTR_u__Software_Game_Maker_Scores__00686bcc,local_10);
  FUN_00452d70(DAT_00686bc8,local_c,1);
  FUN_005a05a4(local_8,param_3,&local_14);
  uVar2 = local_14;
  FUN_0041636c(param_1,&local_1c);
  FUN_00408678(&local_18,L"Rank",local_1c);
  FUN_00453688(DAT_00686bc8,local_18,uVar2);
  FUN_00452bf8(DAT_00686bc8);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005a0b74;
  puStack_2c = (undefined1 *)0x5a0b6c;
  thunk_FUN_004072fc(&local_1c,6,puVar1);
  return;
}
