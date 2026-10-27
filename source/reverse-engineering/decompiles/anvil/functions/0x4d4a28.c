// rea decompile_all
// name: FUN_004d4a28
// address: 0x4d4a28
// body: available
// range: 0x4d4a28-0x4d4b55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d4a49 (push 0x4d4b73 followed by fs-segment stack chaining); handler 0x4d4b73 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d4a69 (push 0x4d4b56 followed by fs-segment stack chaining); handler 0x4d4b56 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d4a28(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_004d4b73;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_14 = 0;
  local_10 = (int *)0x0;
  puStack_34 = (undefined1 *)0x4d4a5e;
  local_c = param_3;
  local_8 = param_1;
  FUN_004d5948(param_1);
  puStack_38 = &LAB_004d4b56;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  local_10 = (int *)FUN_004d36fc(&PTR_FUN_004d2430,1,5,5);
  (**(code **)(*local_10 + 8))(local_10,local_8);
  FUN_004d43a8(local_8);
  iVar2 = FUN_004d3f14(local_10);
  if (iVar2 < param_2) {
    FUN_0040b9d0(PTR_LAB_00688c38,&local_18);
    FUN_0041bd4c(&LAB_0042dc24,1,local_18);
    FUN_00406ab4();
  }
  local_14 = FUN_00464e1c(&PTR_LAB_004597c0,1);
  if (-1 < param_2 + -1) {
    iVar3 = 0;
    iVar2 = param_2;
    do {
      FUN_004d3eb4(local_10,iVar3,local_14);
      FUN_004d3de8(local_8,local_14);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004d3de8(local_8,local_c);
  iVar2 = FUN_004d3f14(local_10);
  if (param_2 <= iVar2 + -1) {
    iVar2 = ((iVar2 + -1) - param_2) + 1;
    do {
      FUN_004d3eb4(local_10,param_2,local_14);
      FUN_004d3de8(local_8,local_14);
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004d4b5d;
  puStack_38 = (undefined1 *)0x4d4b45;
  FUN_004d594c(local_8,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x4d4b4d;
  FUN_00405fdc(local_14);
  puStack_38 = (undefined1 *)0x4d4b55;
  FUN_00405fdc(local_10);
  return;
}
