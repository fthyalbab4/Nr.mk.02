// rea decompile_all
// name: FUN_0043fb90
// address: 0x43fb90
// body: available
// range: 0x43fb90-0x43fc1f inclusive
// range: 0x43fc6c-0x43fee4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43fbb9 (push 0x43fee5 followed by fs-segment stack chaining); handler 0x43fee5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043fb90(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_EDX;
  int unaff_EBX;
  undefined4 *in_FS_OFFSET;
  unkbyte10 in_ST0;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;

  local_1c = &stack0xfffffffc;
  iVar5 = 6;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  UNLOCK();
  local_20 = &LAB_0043fee5;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puVar1 = &stack0xfffffffc;
  if (iRam00000008 == 0) {
    puVar1 = &stack0xfffffffc;
    if (*(char *)*_ImgDelayDescr_Module_Handle_00000000 == '\a') {
      local_28._0_2_ = 0xfbdc;
      local_28._2_2_ = 0x43;
      uVar4 = FUN_0042be6c(param_2,0);
      local_28._0_2_ = 0xfbe7;
      local_28._2_2_ = 0x43;
      cVar2 = FUN_004061f8(uVar4,&PTR_FUN_00435a84);
      puVar1 = local_1c;
      if (cVar2 != '\0') {
        local_28._0_2_ = 0xfbf6;
        local_28._2_2_ = 0x43;
        iVar5 = FUN_0042be6c(param_2,0);
        puVar1 = local_1c;
        if ((*(byte *)(iVar5 + 0x24) & 4) != 0) goto LAB_0043fc06;
      }
    }
    local_1c = puVar1;
    local_28._0_2_ = 0xfc06;
    local_28._2_2_ = 0x43;
    FUN_0043e224(PTR_LAB_00689278);
    puVar1 = local_1c;
  }
LAB_0043fc06:
  local_1c = puVar1;
  puVar1 = (undefined1 *)*_ImgDelayDescr_Module_Handle_00000000;
  switch(*puVar1) {
  case 1:
    local_28._0_2_ = 0xfc74;
    local_28._2_2_ = 0x43;
    cVar2 = FUN_0043e89c(param_1);
    if (cVar2 == '\a') {
      local_28._0_2_ = 0xfc83;
      local_28._2_2_ = 0x43;
      FUN_0043f3f0(param_1,&local_1c);
      local_28._0_2_ = 0xfc91;
      local_28._2_2_ = 0x43;
      FUN_0043f9ec(param_2,0,local_1c);
    }
    else {
      local_28._0_2_ = 0xfc9e;
      local_28._2_2_ = 0x43;
      uVar4 = FUN_0043f588(param_1);
      local_28._0_2_ = 0xfcab;
      local_28._2_2_ = 0x43;
      FUN_0042bee0(param_2,0,uVar4);
    }
    break;
  case 2:
    local_28._0_2_ = 0xfcb8;
    local_28._2_2_ = 0x43;
    uVar3 = FUN_0043e95c(param_1);
    local_28._0_2_ = 0xfcc6;
    local_28._2_2_ = 0x43;
    FUN_0042bee0(param_2,0,uVar3);
    break;
  case 3:
    local_28._0_2_ = 0xfcf1;
    local_28._2_2_ = 0x43;
    FUN_0043f3f0(param_1,&local_20);
    local_28._0_2_ = 0xfcfb;
    local_28._2_2_ = 0x43;
    uVar4 = FUN_0042bc38(puVar1,local_20);
    local_28._0_2_ = 0xfd08;
    local_28._2_2_ = 0x43;
    FUN_0042bee0(param_2,0,uVar4);
    break;
  case 4:
    local_28._0_2_ = 0xfd15;
    local_28._2_2_ = 0x43;
    FUN_0043f29c(param_1);
    uStack_30 = (undefined4)in_ST0;
    local_2c = (undefined4)((unkuint10)in_ST0 >> 0x20);
    local_28._0_2_ = (undefined2)((unkuint10)in_ST0 >> 0x40);
    uStack_34 = 0x43fd27;
    FUN_0042cae0(param_2,0);
    break;
  case 5:
  case 10:
    local_28._0_2_ = 0xfd37;
    local_28._2_2_ = 0x43;
    FUN_004404f0(param_1,&local_24);
    local_28._0_2_ = 0xfd4c;
    local_28._2_2_ = 0x43;
    FUN_0042c8a4(param_2,0,local_24);
    break;
  case 6:
    local_28._0_2_ = 0xfda2;
    local_28._2_2_ = 0x43;
    uVar4 = FUN_00440380(param_1,puVar1);
    local_28._0_2_ = 0xfdaf;
    local_28._2_2_ = 0x43;
    FUN_0042bee0(param_2,0,uVar4);
    break;
  case 7:
    local_28._0_2_ = 0xfdbc;
    local_28._2_2_ = 0x43;
    cVar2 = FUN_0043e89c(param_1);
    if (cVar2 == '\r') {
      local_28._0_2_ = 0xfdce;
      local_28._2_2_ = 0x43;
      FUN_00440718(param_1);
      local_28._0_2_ = 0xfddb;
      local_28._2_2_ = 0x43;
      FUN_0042bee0(param_2,0,0);
    }
    else if (cVar2 == '\x0e') {
      local_28._0_2_ = 65000;
      local_28._2_2_ = 0x43;
      FUN_00440718(param_1);
      local_28._0_2_ = 0xfdf3;
      local_28._2_2_ = 0x43;
      uVar4 = FUN_0042be6c(param_2,0);
      local_28._0_2_ = 0xfdfd;
      local_28._2_2_ = 0x43;
      FUN_0043ea50(param_1,uVar4);
    }
    else {
      local_2c = 0x43fe0e;
      local_28 = &stack0xfffffffc;
      FUN_0043f3f0(param_1,&local_38);
      local_2c = 0x43fe1c;
      FUN_0043fa34(param_2,0,local_38);
    }
    break;
  case 8:
    local_28._0_2_ = 0xfe2a;
    local_28._2_2_ = 0x43;
    cVar2 = FUN_0043e89c(param_1);
    if (cVar2 == '\r') {
      local_28._0_2_ = 0xfe36;
      local_28._2_2_ = 0x43;
      FUN_00440718(param_1);
      local_28._0_2_ = 0xfe46;
      local_28._2_2_ = 0x43;
      FUN_0042cdac(param_2,0,&DAT_0067d018);
    }
    else {
      local_28 = &stack0xffffffe8;
      local_2c = 0x43fe57;
      FUN_0043f3f0(param_1,&local_3c);
      local_2c = 0x43fe68;
      (**(code **)(*param_1 + 0x18))(param_1,param_1[6],local_3c);
      if (unaff_EBX != 0) {
        local_28._0_2_ = 0xfe7c;
        local_28._2_2_ = 0x43;
        FUN_0042cdac(param_2,0,&stack0xffffffe8);
      }
    }
    break;
  case 9:
    local_28._0_2_ = 0xfcd3;
    local_28._2_2_ = 0x43;
    uVar3 = FUN_0043e9f0(param_1);
    local_28._0_2_ = 0xfce1;
    local_28._2_2_ = 0x43;
    FUN_0042bee0(param_2,0,uVar3);
    break;
  case 0xb:
    local_28._0_2_ = 0xfd5c;
    local_28._2_2_ = 0x43;
    FUN_004405d8(param_1,&local_2c);
    local_28._0_2_ = 0xfd6a;
    local_28._2_2_ = 0x43;
    FUN_0042c53c(param_2,0,local_2c);
    break;
  case 0xc:
    local_2c = 0x43fe84;
    local_28 = &stack0xfffffffc;
    FUN_0043fa74();
    break;
  case 0xf:
    local_2c = 0x43fea4;
    local_28 = &stack0xfffffffc;
    FUN_0043fad0();
    break;
  case 0x10:
    local_28._0_2_ = 0xfe8f;
    local_28._2_2_ = 0x43;
    local_2c = FUN_0043f5f4(param_1);
    local_28._0_2_ = (undefined2)extraout_EDX;
    local_28._2_2_ = (undefined2)((uint)extraout_EDX >> 0x10);
    uStack_30 = 0x43fe9c;
    FUN_0042ce0c(param_2,0);
    break;
  case 0x12:
    local_28._0_2_ = 0xfd7a;
    local_28._2_2_ = 0x43;
    FUN_004405d8(param_1,&uStack_34);
    local_28._0_2_ = 0xfd85;
    local_28._2_2_ = 0x43;
    FUN_0040840c(&uStack_30,uStack_34);
    local_28._0_2_ = 0xfd93;
    local_28._2_2_ = 0x43;
    FUN_0042c8a4(param_2,0,uStack_30);
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0043feec;
  local_20 = (undefined1 *)0x43febf;
  thunk_FUN_004072fc(&local_3c,2,puVar1);
  local_20 = (undefined1 *)0x43fec7;
  FUN_00407dd0(&uStack_34);
  local_20 = (undefined1 *)0x43fecf;
  thunk_FUN_004072d8(&uStack_30);
  local_20 = (undefined1 *)0x43fed7;
  FUN_00407dd0(&local_2c);
  local_20 = (undefined1 *)0x43fee4;
  thunk_FUN_004072fc(&local_24,3);
  return;
}
