// rea decompile_all
// name: FUN_00576af4
// address: 0x576af4
// body: available
// range: 0x576af4-0x576bdc inclusive
// range: 0x576be4-0x576c23 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x576b17 (push 0x576c24 followed by fs-segment stack chaining); handler 0x576c24 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x576b60 (push 0x576bdd followed by fs-segment stack chaining); handler 0x576bdd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00576af4(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_28 = &LAB_00576c24;
  puStack_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_2c;
  local_c = param_1[0xa3];
  puStack_30 = (undefined1 *)0x576b2e;
  local_8 = param_1;
  piVar4 = (int *)FUN_00576014(param_1);
  puStack_30 = (undefined1 *)0x576b33;
  iVar5 = (**(code **)(*piVar4 + 0x14))();
  if (local_c <= iVar5) {
    puStack_30 = (undefined1 *)0x576b40;
    cVar3 = FUN_00575c80(local_8);
    if (cVar3 != '\0') {
      puStack_34 = (undefined1 *)0x576bf5;
      puStack_30 = (undefined1 *)param_2;
      (**(code **)(*local_8 + 0x124))(local_8,0,local_c);
      uStack_38 = 0x576c09;
      puStack_34 = (undefined1 *)param_3;
      (**(code **)(*local_8 + 0x124))(local_8,1,local_c);
      puVar1 = puStack_2c;
      *in_FS_OFFSET = puStack_34;
      puStack_2c = &LAB_00576c2b;
      puStack_30 = (undefined1 *)0x576c23;
      thunk_FUN_00406e80(&local_14,2,puVar1);
      return;
    }
  }
  puStack_30 = (undefined1 *)0x576b50;
  FUN_00576014(local_8);
  puStack_30 = (undefined1 *)0x576b55;
  FUN_0043d354();
  puStack_34 = &LAB_00576bdd;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  if (param_4 == '\0') {
    puStack_30 = &stack0xfffffffc;
    FUN_00575c2c(param_2,param_3,&local_14);
    uVar2 = local_14;
    piVar4 = (int *)FUN_00576014(local_8);
    (**(code **)(*piVar4 + 0x60))(piVar4,local_c - local_8[0xa8],uVar2);
  }
  else {
    puStack_30 = &stack0xfffffffc;
    FUN_00575c2c(param_2,param_3,&local_10);
    uVar2 = local_10;
    piVar4 = (int *)FUN_00576014(local_8);
    local_c = (**(code **)(*piVar4 + 0x38))(piVar4,uVar2);
    local_c = local_c + local_8[0xa8];
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = (undefined1 *)0x576c09;
  puStack_34 = (undefined1 *)0x576bd7;
  FUN_00576014(local_8,uStack_38,puVar1);
  puStack_34 = (undefined1 *)0x576bdc;
  FUN_0043d41c();
  return;
}
