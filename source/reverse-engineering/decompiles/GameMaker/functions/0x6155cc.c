// rea decompile_all
// name: FUN_006155cc
// address: 0x6155cc
// body: available
// range: 0x6155cc-0x615668 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6155e7 (push 0x61568b followed by fs-segment stack chaining); handler 0x61568b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x615604 (push 0x615669 followed by fs-segment stack chaining); handler 0x615669 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006155cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_0061568b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x6155f6;
  local_8 = FUN_005e3fb4(&PTR_FUN_00614a74,1);
  puStack_34 = &LAB_00615669;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puVar4 = &local_c;
  puStack_30 = &stack0xfffffffc;
  FUN_00615530(param_1,&local_14);
  puVar2 = &DAT_006156a4;
  uVar3 = local_14;
  FUN_006154f8(param_1,&local_18);
  uVar1 = local_18;
  FUN_00408480(&local_10,3);
  FUN_00613434(local_8,local_10,0,uVar1,puVar2,uVar3,puVar4);
  FUN_0040839c(param_2,L"Basic ",local_c);
  *in_FS_OFFSET = uVar1;
  FUN_00405a7c(local_8,uVar1,uVar3,&LAB_00615670);
  return;
}
