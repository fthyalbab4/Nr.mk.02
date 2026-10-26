// rea decompile_all
// name: FUN_0045f758
// address: 0x45f758
// body: available
// range: 0x45f758-0x45f81e inclusive
// range: 0x45f836-0x45f87f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45f778 (push 0x45f880 followed by fs-segment stack chaining); handler 0x45f880 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45f7f0 (push 0x45f81f followed by fs-segment stack chaining); handler 0x45f81f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045f758(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  int *local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_8 = 0;
  puStack_2c = &LAB_0045f880;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined4 *)0x45f785;
  FUN_004173d8(param_2,&local_8);
  puStack_34 = (undefined4 *)0x45f797;
  FUN_00408778(&local_8,1,1);
  puStack_34 = (undefined4 *)0x45f7a4;
  iVar3 = FUN_0045ed60(DAT_00774534,local_8);
  if (iVar3 == 0) {
    local_14 = local_8;
    local_10 = 0x11;
    puStack_34 = &local_14;
    puStack_38 = (undefined1 *)0x0;
    uStack_3c = 0x45f7c7;
    FUN_0040b75c(PTR_PTR_0078293c,&local_18);
    uStack_3c = 0x45f7d6;
    FUN_0041bef4(&PTR_LAB_0045419c,1,local_18);
    uStack_3c = 0x45f7db;
    FUN_00406618();
  }
  puStack_34 = (undefined4 *)0x45f7e2;
  piVar4 = (int *)(**(code **)(iVar3 + 0x50))(iVar3,1);
  puStack_38 = &LAB_0045f81f;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  piVar4[7] = param_1;
  puStack_34 = (undefined4 *)&stack0xfffffffc;
  local_c = piVar4;
  iVar3 = FUN_00405d20(param_1,CONCAT22(extraout_var,0xfffc));
  piVar4[6] = iVar3;
  (**(code **)(*local_c + 0x54))(local_c,param_2);
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = (undefined4 *)0x45f83e;
  FUN_00405a7c(*(undefined4 *)(param_1 + 0xc),uStack_3c,puVar1);
  piVar4 = local_c;
  *(int **)(param_1 + 0xc) = local_c;
  local_c[5] = param_1;
  puStack_34 = (undefined4 *)0x45f852;
  iVar3 = FUN_00405d20(param_1,CONCAT22(extraout_var_00,0xfffd));
  piVar4[4] = iVar3;
  puStack_34 = (undefined4 *)0x45f862;
  FUN_00405d08(param_1,param_1);
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0045f887;
  puStack_2c = (undefined1 *)0x45f877;
  thunk_FUN_00406e5c(&local_18,uStack_30,puVar2);
  puStack_2c = (undefined1 *)0x45f87f;
  thunk_FUN_00406e5c(&local_8);
  return;
}
