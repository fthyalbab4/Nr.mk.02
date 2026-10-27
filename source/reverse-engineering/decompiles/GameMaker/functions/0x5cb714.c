// rea decompile_all
// name: FUN_005cb714
// address: 0x5cb714
// body: available
// range: 0x5cb714-0x5cb8a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cb736 (push 0x5cb8a7 followed by fs-segment stack chaining); handler 0x5cb8a7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cb714(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int *unaff_EBX;
  int *unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined1 local_60 [16];
  int *local_50;
  int *local_4c;
  undefined1 local_48 [16];
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_10;
  int *local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = (int *)&DAT_0000000b;
  do {
    local_8 = (int *)0x0;
    local_10 = (int *)((int)local_10 + -1);
  } while (local_10 != (int *)0x0);
  puStack_24 = &LAB_005cb8a7;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (int *)0x5cb740;
  FUN_005ca7f8(param_1);
  local_2c = (int *)0x5cb74a;
  FUN_005cae94(param_1,&local_c);
  local_2c = (int *)0x5cb755;
  (**(code **)(*local_c + 0x14))(local_c,&local_8);
  local_2c = (int *)0x5cb75d;
  iVar4 = (**(code **)(*local_8 + 0xc))();
  if (0 < iVar4) {
    local_2c = (int *)0x5cb76f;
    FUN_005cae94(param_1,&stack0xffffffe8);
    local_2c = (int *)0x5cb77a;
    (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,&stack0xffffffec);
    local_30 = (int *)0x5cb78a;
    local_2c = unaff_EBX;
    FUN_00429c6c(&local_28,0,1);
    piVar1 = local_2c;
    iVar4 = *local_2c;
    local_2c = (int *)0x5cb796;
    (**(code **)(iVar4 + 0x10))(piVar1,&local_28,&local_10);
    local_2c = (int *)0x5cb79e;
    cVar3 = (**(code **)(*local_10 + 0x38))();
    if (cVar3 == '\a') {
      local_2c = (int *)0x5cb7ac;
      FUN_005cae94(param_1,&local_38);
      local_2c = (int *)0x5cb7b7;
      (**(code **)(*local_38 + 0x14))(local_38,&local_34);
      local_2c = local_34;
      uVar5 = 1;
      local_30 = (int *)0x5cb7c7;
      FUN_00429c6c(local_48,0,1);
      piVar1 = local_2c;
      iVar4 = *local_2c;
      local_2c = (int *)0x5cb7d3;
      (**(code **)(iVar4 + 0x10))(piVar1,local_48,&local_30);
      local_2c = (int *)0x5cb7de;
      (**(code **)(*local_30 + 0x34))(local_30,&local_2c);
      piVar1 = local_2c;
      local_2c = (int *)0x5cb7eb;
      FUN_00408640(piVar1,&DAT_005cb8c4);
      if ((bool)uVar5) {
        local_2c = (int *)0x5cb7f7;
        FUN_005cae94(param_1,&local_50);
        local_2c = (int *)0x5cb802;
        (**(code **)(*local_50 + 0x14))(local_50,&local_4c);
        local_2c = local_4c;
        local_30 = (int *)0x5cb812;
        FUN_00429c6c(local_60,0,1);
        piVar1 = local_2c;
        iVar4 = *local_2c;
        local_2c = (int *)0x5cb81d;
        (**(code **)(iVar4 + 0x10))(piVar1,local_60,param_2);
        goto LAB_005cb826;
      }
    }
  }
  local_2c = (int *)0x5cb826;
  FUN_0040b140(param_2);
LAB_005cb826:
  puVar2 = puStack_20;
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_005cb8ae;
  puStack_24 = (undefined1 *)0x5cb83b;
  FUN_004249e8(local_60,local_28,puVar2);
  puStack_24 = (undefined1 *)0x5cb843;
  FUN_0040b140(&local_50);
  puStack_24 = (undefined1 *)0x5cb84b;
  FUN_0040b140(&local_4c);
  puStack_24 = (undefined1 *)0x5cb853;
  FUN_004249e8(local_48);
  puStack_24 = (undefined1 *)0x5cb85b;
  FUN_0040b140(&local_38);
  puStack_24 = (undefined1 *)0x5cb863;
  FUN_0040b140(&local_34);
  puStack_24 = (undefined1 *)0x5cb86b;
  FUN_0040b140(&local_30);
  puStack_24 = (undefined1 *)0x5cb873;
  thunk_FUN_00406e5c(&local_2c);
  puStack_24 = (undefined1 *)0x5cb87b;
  FUN_004249e8(&local_28);
  puStack_24 = (undefined1 *)0x5cb883;
  FUN_0040b140(&stack0xffffffe8);
  puStack_24 = (undefined1 *)0x5cb88b;
  FUN_0040b140(&stack0xffffffec);
  puStack_24 = (undefined1 *)0x5cb89e;
  FUN_00408e44(&local_10,&DAT_005c0e3c,2);
  puStack_24 = (undefined1 *)0x5cb8a6;
  FUN_0040b140(&local_8);
  return;
}
