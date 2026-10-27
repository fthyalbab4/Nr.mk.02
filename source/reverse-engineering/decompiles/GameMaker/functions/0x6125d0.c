// rea decompile_all
// name: FUN_006125d0
// address: 0x6125d0
// body: available
// range: 0x6125d0-0x61266b inclusive
// range: 0x612683-0x6126aa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6125f5 (push 0x6126ab followed by fs-segment stack chaining); handler 0x6126ab lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x612612 (push 0x61266c followed by fs-segment stack chaining); handler 0x61266c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006125d0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  int *piVar2;
  int iStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;

  local_c = 0;
  local_10 = (int *)0x0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = (undefined1 *)0x6125ea;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_2c = &LAB_006126ab;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  puStack_34 = (undefined1 *)0x612604;
  puStack_28 = &stack0xfffffffc;
  local_10 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  puStack_38 = &LAB_0061266c;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  piVar2 = &local_c;
  puStack_34 = &stack0xfffffffc;
  FUN_00610ae8(local_8,&DAT_006126dc,&DAT_006126c8,piVar2,*(undefined4 *)(param_1 + 0x50));
  while (puVar1 = puStack_30, local_c != 0) {
    FUN_005e07ec(&local_c,&DAT_006126f0,1,&local_18,1);
    FUN_00415f30(local_18,&local_14);
    (**(code **)(*local_10 + 0x38))(local_10,local_14);
  }
  *in_FS_OFFSET = (int)piVar2;
  *in_FS_OFFSET = (int)puStack_38;
  puStack_30 = &LAB_006126b2;
  puStack_34 = (undefined1 *)0x61269d;
  thunk_FUN_00406e80(&local_18,2,puVar1);
  puStack_34 = (undefined1 *)0x6126aa;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
