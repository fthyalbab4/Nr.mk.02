// rea decompile_all
// name: FUN_005761d8
// address: 0x5761d8
// body: available
// range: 0x5761d8-0x5762d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57620e (push 0x5762d6 followed by fs-segment stack chaining); handler 0x5762d6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005761d8(int *param_1,int param_2,int param_3,undefined1 param_4,int *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined4 local_8;

  puStack_3c = &stack0xfffffffc;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_8 = 0;
  local_1c = *param_5;
  local_18 = param_5[1];
  iStack_14 = param_5[2];
  iStack_10 = param_5[3];
  puStack_40 = &LAB_005762d6;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  if ((char)param_1[0xbf] != '\0') {
    if ((param_2 == 0) && (param_1[0xa8] + -1 < param_3)) {
      FUN_00429c10(&local_2c,param_3 - param_1[0xa8],0xfc);
      iVar2 = FUN_00577720(param_1[0xdf],&local_2c,0);
    }
    else {
      iVar2 = 0;
      puStack_3c = &stack0xfffffffc;
    }
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x1c) == 0)) {
      (**(code **)(*param_1 + 0x120))(param_1,local_c,param_3,&local_8);
    }
    else {
      FUN_00407f0c(&local_8,*(undefined4 *)(iVar2 + 0x1c));
    }
    (**(code **)(*(int *)param_1[0x9c] + 0x90))
              ((int *)param_1[0x9c],&local_1c,local_1c + 2,local_8,local_18 + 2);
    puVar1 = puStack_3c;
  }
  puStack_3c = puVar1;
  FUN_00572940(param_1,local_c,param_3,param_4,&local_1c);
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_005762dd;
  puStack_40 = (undefined1 *)0x5762cd;
  FUN_004249e8(&local_2c,uStack_44,puVar1);
  puStack_40 = (undefined1 *)0x5762d5;
  thunk_FUN_00406e5c(&local_8);
  return;
}
