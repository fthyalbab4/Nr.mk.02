// rea decompile_all
// name: FUN_004c560c
// address: 0x4c560c
// body: available
// range: 0x4c560c-0x4c58b4 inclusive
// range: 0x4c591a-0x4c5923 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c563d (push 0x4c5913 followed by fs-segment stack chaining); handler 0x4c5913 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c57e0 (push 0x4c58b5 followed by fs-segment stack chaining); handler 0x4c58b5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004c560c(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  char local_e;
  byte local_d;
  int *local_c;
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_d = 0;
  if (param_2 == (int *)0x0) {
LAB_004c591a:
    return (uint)local_d;
  }
  *(undefined1 *)(param_1 + 0x350) = 0;
  puStack_30 = &LAB_004c5913;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_2;
  local_8 = param_1;
  if (param_2[0x70] == 0) {
    if ((int *)param_2[0x6f] == (int *)0x0) {
      puStack_38 = (undefined1 *)0x4c5764;
      FUN_0040670c();
      goto LAB_004c591a;
    }
    puStack_38 = (undefined1 *)0x4c5671;
    puStack_2c = &stack0xfffffffc;
    (**(code **)(*(int *)param_2[0x6f] + 0x48))();
    puStack_38 = (undefined1 *)0x4c5679;
    FUN_004c5560(local_8);
    puStack_38 = (undefined1 *)0x4c5688;
    uVar3 = FUN_004dee2c(&PTR_FUN_004d7824,1,local_8);
    *(undefined4 *)(local_8 + 0x354) = uVar3;
    puStack_38 = (undefined1 *)0x4c569f;
    iVar4 = thunk_FUN_004dc3d8(local_c[0x6f]);
    if (iVar4 != 0) {
      puStack_38 = (undefined1 *)0x4c56b5;
      FUN_004de48c(*(undefined4 *)(local_8 + 0x354),*(undefined1 *)(iVar4 + 0x34));
    }
    puStack_38 = (undefined1 *)0x4c56cf;
    FUN_004deef4(*(undefined4 *)(local_8 + 0x354),*(undefined4 *)(local_c[0x6f] + 0x54));
    *(undefined1 *)(*(int *)(local_8 + 0x354) + 0x70) = 1;
    puStack_38 = (undefined1 *)0x4c56ea;
    iVar4 = thunk_FUN_004dc3d8(local_c[0x6f]);
    if (iVar4 != 0) {
      puStack_38 = (undefined1 *)0x4c56ff;
      FUN_004de0a0(*(undefined4 *)(local_8 + 0x354),*(undefined4 *)(iVar4 + 0x48));
    }
    iVar4 = local_c[0x6f];
    *(int *)(local_8 + 0x358) = iVar4;
    puStack_38 = (undefined1 *)0x4c5718;
    iVar4 = FUN_004dbe08(iVar4);
    iVar4 = iVar4 + -1;
    if (-1 < iVar4) {
      do {
        puStack_38 = (undefined1 *)0x4c5730;
        uVar3 = FUN_004dbe18(*(undefined4 *)(local_8 + 0x358),iVar4);
        puStack_38 = (undefined1 *)0x4c5742;
        FUN_004dc050(*(undefined4 *)(local_8 + 0x358),iVar4);
        puStack_38 = (undefined1 *)0x4c5757;
        FUN_004dbf94(*(undefined4 *)(*(int *)(local_8 + 0x354) + 0x38),0,uVar3);
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
  }
  else {
    *(int *)(param_1 + 0x354) = param_2[0x70];
    puStack_2c = &stack0xfffffffc;
  }
  puStack_38 = (undefined1 *)0x4c5773;
  FUN_004ee1fc(local_8,0);
  *(int *)(*(int *)(local_8 + 0x354) + 0x6c) = local_8;
  if ((*(char *)((int)local_c + 0x1b3) == '\0') && (local_c[0x6f] == 0)) {
    local_e = '\0';
  }
  else {
    local_e = '\x01';
  }
  if (local_e != '\0') {
    puStack_38 = (undefined1 *)0x4c57b1;
    DAT_007881ac = FUN_004c056c(local_c);
    DAT_007881a4 = local_8;
    puStack_38 = (undefined1 *)0x4c57c3;
    FUN_004c5418();
  }
  puStack_38 = (undefined1 *)0x0;
  puStack_3c = (undefined1 *)0x4c57d5;
  FUN_004efb90(local_8,0x448,0xffffffff);
  puStack_3c = &LAB_004c58b5;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  local_1c = FUN_004edfcc(local_c);
  local_20 = 0;
  FUN_004ee09c(local_c,&local_20,&local_18);
  cVar2 = FUN_004de108(*(undefined4 *)(local_8 + 0x354));
  if (cVar2 != '\0') {
    local_18 = local_18 + local_c[0x12];
  }
  *(undefined1 *)(local_8 + 0x361) = 1;
  iVar4 = FUN_0051d8ec(*(undefined4 *)PTR_DAT_007828e0,&local_18,0);
  if (iVar4 != 0) {
    iVar5 = GetSystemMetrics(0xf);
    iVar6 = FUN_004dbe08(*(undefined4 *)(*(int *)(local_8 + 0x354) + 0x38));
    iVar5 = iVar5 * iVar6 + local_14;
    iVar4 = FUN_0051c1d8(iVar4);
    if (iVar4 < iVar5) {
      local_14 = local_14 - local_c[0x13];
    }
  }
  iVar4 = FUN_004a8960();
  if (iVar4 == 0x50050) {
    (**(code **)(*local_c + 0x90))();
  }
  (**(code **)(**(int **)(local_8 + 0x354) + 0x44))(*(int **)(local_8 + 0x354),local_18,local_14);
  puVar1 = puStack_38;
  uVar7 = 0;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_004c58bc;
  if (local_e != '\0') {
    puStack_3c = (undefined1 *)0x4c58b4;
    uVar7 = FUN_004c5450(0,uStack_40,puVar1);
  }
  return uVar7;
}
