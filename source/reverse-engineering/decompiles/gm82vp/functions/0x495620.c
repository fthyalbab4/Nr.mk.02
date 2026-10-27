// rea decompile_all
// name: FUN_00495620
// address: 0x495620
// body: available
// range: 0x495620-0x4958c8 inclusive
// range: 0x49592e-0x495937 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x495651 (push 0x495927 followed by fs-segment stack chaining); handler 0x495927 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4957f4 (push 0x4958c9 followed by fs-segment stack chaining); handler 0x4958c9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00495620(int param_1,int *param_2)

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
LAB_0049592e:
    return (uint)local_d;
  }
  *(undefined1 *)(param_1 + 0x350) = 0;
  puStack_30 = &LAB_00495927;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_2;
  local_8 = param_1;
  if (param_2[0x70] == 0) {
    if ((int *)param_2[0x6f] == (int *)0x0) {
      puStack_38 = (undefined1 *)0x495778;
      FUN_00406ba8();
      goto LAB_0049592e;
    }
    puStack_38 = (undefined1 *)0x495685;
    puStack_2c = &stack0xfffffffc;
    (**(code **)(*(int *)param_2[0x6f] + 0x48))();
    puStack_38 = (undefined1 *)0x49568d;
    FUN_00495574(local_8);
    puStack_38 = (undefined1 *)0x49569c;
    uVar3 = FUN_004abedc(&PTR_FUN_004a48d4,1,local_8);
    *(undefined4 *)(local_8 + 0x354) = uVar3;
    puStack_38 = (undefined1 *)0x4956b3;
    iVar4 = thunk_FUN_004a9488(local_c[0x6f]);
    if (iVar4 != 0) {
      puStack_38 = (undefined1 *)0x4956c9;
      FUN_004ab53c(*(undefined4 *)(local_8 + 0x354),*(undefined1 *)(iVar4 + 0x34));
    }
    puStack_38 = (undefined1 *)0x4956e3;
    FUN_004abfa4(*(undefined4 *)(local_8 + 0x354),*(undefined4 *)(local_c[0x6f] + 0x54));
    *(undefined1 *)(*(int *)(local_8 + 0x354) + 0x70) = 1;
    puStack_38 = (undefined1 *)0x4956fe;
    iVar4 = thunk_FUN_004a9488(local_c[0x6f]);
    if (iVar4 != 0) {
      puStack_38 = (undefined1 *)0x495713;
      FUN_004ab150(*(undefined4 *)(local_8 + 0x354),*(undefined4 *)(iVar4 + 0x48));
    }
    iVar4 = local_c[0x6f];
    *(int *)(local_8 + 0x358) = iVar4;
    puStack_38 = (undefined1 *)0x49572c;
    iVar4 = FUN_004a8eb8(iVar4);
    iVar4 = iVar4 + -1;
    if (-1 < iVar4) {
      do {
        puStack_38 = (undefined1 *)0x495744;
        uVar3 = FUN_004a8ec8(*(undefined4 *)(local_8 + 0x358),iVar4);
        puStack_38 = (undefined1 *)0x495756;
        FUN_004a9100(*(undefined4 *)(local_8 + 0x358),iVar4);
        puStack_38 = (undefined1 *)0x49576b;
        FUN_004a9044(*(undefined4 *)(*(int *)(local_8 + 0x354) + 0x38),0,uVar3);
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
  }
  else {
    *(int *)(param_1 + 0x354) = param_2[0x70];
    puStack_2c = &stack0xfffffffc;
  }
  puStack_38 = (undefined1 *)0x495787;
  FUN_004bb1b4(local_8,0);
  *(int *)(*(int *)(local_8 + 0x354) + 0x6c) = local_8;
  if ((*(char *)((int)local_c + 0x1b3) == '\0') && (local_c[0x6f] == 0)) {
    local_e = '\0';
  }
  else {
    local_e = '\x01';
  }
  if (local_e != '\0') {
    puStack_38 = (undefined1 *)0x4957c5;
    DAT_0068f1ac = FUN_00490580(local_c);
    DAT_0068f1a4 = local_8;
    puStack_38 = (undefined1 *)0x4957d7;
    FUN_0049542c();
  }
  puStack_38 = (undefined1 *)0x0;
  puStack_3c = (undefined1 *)0x4957e9;
  FUN_004bcb48(local_8,0x448,0xffffffff);
  puStack_3c = &LAB_004958c9;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  local_1c = FUN_004baf84(local_c);
  local_20 = 0;
  FUN_004bb054(local_c,&local_20,&local_18);
  cVar2 = FUN_004ab1b8(*(undefined4 *)(local_8 + 0x354));
  if (cVar2 != '\0') {
    local_18 = local_18 + local_c[0x12];
  }
  *(undefined1 *)(local_8 + 0x361) = 1;
  iVar4 = FUN_004e98dc(*(undefined4 *)PTR_DAT_00689620,&local_18,0);
  if (iVar4 != 0) {
    iVar5 = GetSystemMetrics(0xf);
    iVar6 = FUN_004a8eb8(*(undefined4 *)(*(int *)(local_8 + 0x354) + 0x38));
    iVar5 = iVar5 * iVar6 + local_14;
    iVar4 = FUN_004e8264(iVar4);
    if (iVar4 < iVar5) {
      local_14 = local_14 - local_c[0x13];
    }
  }
  iVar4 = FUN_0048b734();
  if (iVar4 == 0x50050) {
    (**(code **)(*local_c + 0x90))();
  }
  (**(code **)(**(int **)(local_8 + 0x354) + 0x44))(*(int **)(local_8 + 0x354),local_18,local_14);
  puVar1 = puStack_38;
  uVar7 = 0;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_004958d0;
  if (local_e != '\0') {
    puStack_3c = (undefined1 *)0x4958c8;
    uVar7 = FUN_00495464(0,uStack_40,puVar1);
  }
  return uVar7;
}
