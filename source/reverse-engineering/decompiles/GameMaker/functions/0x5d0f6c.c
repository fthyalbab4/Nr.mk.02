// rea decompile_all
// name: FUN_005d0f6c
// address: 0x5d0f6c
// body: available
// range: 0x5d0f6c-0x5d1080 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d0f96 (push 0x5d10b3 followed by fs-segment stack chaining); handler 0x5d10b3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d0fff (push 0x5d1081 followed by fs-segment stack chaining); handler 0x5d1081 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d0f6c(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined2 extraout_var;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_1c = 0;
  local_18 = 0;
  local_c = 0;
  puStack_2c = (undefined1 *)0x5d0f8b;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_30 = &LAB_005d10b3;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x5d0fa5;
  puStack_2c = &stack0xfffffffc;
  local_10 = FUN_00452480(&DAT_004512d4,1);
  puStack_38 = (undefined1 *)0x5d0fb5;
  FUN_00452568(local_10,0x80000001);
  puStack_38 = (undefined1 *)0x5d0fc1;
  piVar2 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  puStack_38 = (undefined1 *)0x5d0fce;
  FUN_0043e910(piVar2,CONCAT22(extraout_var,0x3a));
  puStack_38 = (undefined1 *)0x5d0fd8;
  FUN_0043e6d4(piVar2,local_8);
  iVar4 = 0;
  puStack_38 = (undefined1 *)0x5d0fe7;
  FUN_00407f0c(&local_8,L"\\Software\\Game Maker\\");
  puStack_38 = (undefined1 *)0x5d0ff1;
  local_14 = (int *)FUN_005d2d24(DAT_00789b88);
  puStack_3c = &LAB_005d1081;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  while( true ) {
    cVar1 = FUN_005d2dac(local_14);
    if (cVar1 == '\0') break;
    FUN_005d2d34(local_14,&local_18);
    FUN_004080e4(&local_c,local_18);
    iVar3 = (**(code **)(*piVar2 + 0x14))();
    if (iVar3 <= iVar4) {
      iVar4 = 0;
    }
    (**(code **)(*piVar2 + 0xc))(piVar2,iVar4,&local_1c,&DAT_005d1108,local_8);
    uStack_40 = local_1c;
    FUN_00408480(&local_8,3);
    FUN_004529cc(local_10,local_8);
    iVar4 = iVar4 + 1;
  }
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_005d1088;
  if (local_14 != (int *)0x0) {
    puStack_3c = (undefined1 *)0x5d1080;
    (**(code **)(*local_14 + -4))(local_14,1);
  }
  return;
}
