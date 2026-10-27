// rea decompile_all
// name: FUN_004adb08
// address: 0x4adb08
// body: available
// range: 0x4adb08-0x4adbf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4adb28 (push 0x4adbf8 followed by fs-segment stack chaining); handler 0x4adbf8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004adb08(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_004adbf8;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_2;
  FUN_004aebe0(*(undefined4 *)(param_1 + 4));
  FUN_0043f488(local_8,&local_c,4);
  FUN_0043f488(local_8,param_3,local_c);
  FUN_0040822c(&local_14,param_3 + 6);
  FUN_004ac910(param_1,local_14);
  FUN_004acb64(param_1,*param_3);
  FUN_004acc04(param_1,param_3[1]);
  FUN_004accb0(param_1,param_3[2]);
  FUN_004acc60(param_1,param_3[3]);
  FUN_004ac9b4(param_1,param_3[4]);
  iVar1 = param_3[5];
  FUN_004ad0b4(param_1,iVar1 != 0);
  if ((0 < iVar1) && (-1 < iVar1 + -1)) {
    do {
      local_10 = iVar1;
      uVar3 = FUN_004ae1e8(*(undefined4 *)(param_1 + 4),param_1,0);
      FUN_004adb08(uVar3,local_8,param_3);
      FUN_00405d08(*(undefined4 *)(*(int *)(param_1 + 4) + 4),uVar3);
      local_10 = local_10 + -1;
      iVar1 = local_10;
    } while (local_10 != 0);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004adbff;
  puStack_28 = (undefined1 *)0x4adbf7;
  thunk_FUN_00406e5c(&local_14,uStack_2c,puVar2);
  return;
}
