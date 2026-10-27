// rea decompile_all
// name: FUN_005e4400
// address: 0x5e4400
// body: available
// range: 0x5e4400-0x5e44c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e4440 (push 0x5e44c9 followed by fs-segment stack chaining); handler 0x5e44c9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e4400(int param_1,char param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int extraout_ECX;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffb8;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 auStack_2c [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x5e4418;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
  }
  for (iVar1 = param_4 * 2 + 1; -1 < iVar1; iVar1 = iVar1 + -1) {
    auStack_2c[0] = *(undefined4 *)(param_5 + iVar1 * 4);
  }
  puStack_34 = &LAB_005e44c9;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_005e1dd0(param_6,auStack_2c,param_4,&local_8);
  FUN_00407eb8(param_1 + 0x20,local_8);
  *(int *)(param_1 + 0x18) = param_3;
  if (param_3 == 0) {
    uVar3 = 0x5e4473;
    FUN_005df5ec(param_1,0,*(undefined4 *)(param_1 + 0x20));
  }
  else {
    FUN_0041b4f0(param_3,&local_c);
    FUN_00407eb8(param_1 + 0x1c,local_c);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    puVar2 = &LAB_005e4504;
    in_stack_ffffffb8 = *(undefined4 *)(param_1 + 0x1c);
    FUN_00408480(&local_10,3);
    FUN_005df5ec(param_1,0,local_10,in_stack_ffffffb8,puVar2);
  }
  *in_FS_OFFSET = in_stack_ffffffb8;
  thunk_FUN_00406e80(&local_10,3,uVar3,&LAB_005e44d0);
  return;
}
