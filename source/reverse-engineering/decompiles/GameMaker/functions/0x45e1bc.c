// rea decompile_all
// name: FUN_0045e1bc
// address: 0x45e1bc
// body: available
// range: 0x45e1bc-0x45e384 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45e204 (push 0x45e3ac followed by fs-segment stack chaining); handler 0x45e3ac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45e246 (push 0x45e385 followed by fs-segment stack chaining); handler 0x45e385 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045e1bc(int *param_1,HICON param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 uStack_70;
  undefined1 local_58;
  undefined1 local_57;
  short local_56;
  int local_50;
  undefined4 local_4c;
  ICONINFO local_48;
  int local_34;
  undefined1 local_2e [2];
  undefined2 local_2c;
  undefined2 local_2a;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  char local_5;

  local_5 = param_3;
  FUN_00404f08(local_2e,6,0);
  FUN_00404f08(&local_58,0x10,0);
  uStack_70 = 0x45e1f4;
  GetIconInfo(param_2,&local_48);
  FUN_0045e1b0();
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  puStack_74 = (undefined1 *)0x2;
  puStack_78 = (undefined1 *)0x45e217;
  FUN_0045e074(local_48.hbmMask,&local_c,&local_14);
  puStack_74 = (undefined1 *)0xffffffff;
  puStack_78 = (undefined1 *)0x45e227;
  FUN_0045e074(local_48.hbmColor,&local_10,&local_18);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  puStack_78 = &LAB_0045e385;
  uStack_7c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7c;
  puStack_74 = &stack0xfffffffc;
  local_1c = FUN_00404304(local_c);
  local_20 = FUN_00404304(local_14);
  local_24 = FUN_00404304(local_10);
  local_28 = FUN_00404304(local_18);
  uVar4 = 2;
  FUN_0045e0e4(local_48.hbmMask,0,local_1c,2,local_20);
  uVar3 = 0xffffffff;
  FUN_0045e0e4(local_48.hbmColor,0,local_24,0xffffffff,local_28);
  if (local_5 != '\0') {
    local_34 = local_10 + 0x16 + local_18 + local_14;
    (**(code **)(*param_1 + 0x10))(param_1,&local_34,4);
  }
  local_2c = 1;
  local_2a = 1;
  (**(code **)(*param_1 + 0x10))(param_1,local_2e,6);
  iVar2 = local_24;
  local_58 = *(undefined1 *)(local_24 + 4);
  local_57 = *(undefined1 *)(local_24 + 8);
  local_56 = *(short *)(local_24 + 0xc) * *(short *)(local_24 + 0xe);
  local_50 = local_10 + local_18 + local_14;
  local_4c = 0x16;
  (**(code **)(*param_1 + 0x10))(param_1,&local_58,0x10);
  piVar1 = (int *)(iVar2 + 8);
  *piVar1 = *piVar1 + *(int *)(iVar2 + 8);
  (**(code **)(*param_1 + 0x10))(param_1,local_24,local_10);
  (**(code **)(*param_1 + 0x10))(param_1,local_28,local_18);
  (**(code **)(*param_1 + 0x10))(param_1,local_20,local_14);
  *in_FS_OFFSET = uVar3;
  FUN_00404338(local_24,local_10,uVar4,&LAB_0045e38c);
  FUN_00404338(local_28,local_18);
  FUN_00404338(local_1c,local_c);
  FUN_00404338(local_20,local_14);
  return;
}
