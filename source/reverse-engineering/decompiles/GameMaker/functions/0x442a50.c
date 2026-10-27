// rea decompile_all
// name: FUN_00442a50
// address: 0x442a50
// body: available
// range: 0x442a50-0x442adf inclusive
// range: 0x442b2c-0x442da4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442a79 (push 0x442da5 followed by fs-segment stack chaining); handler 0x442da5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442a50(int *param_1,undefined4 param_2)

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
  local_20 = &LAB_00442da5;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  puVar1 = &stack0xfffffffc;
  if (_DAT_00000008 == 0) {
    puVar1 = &stack0xfffffffc;
    if (*(char *)*_ImgDelayDescr_Module_Handle_00000000 == '\a') {
      local_28._0_2_ = 0x2a9c;
      local_28._2_2_ = 0x44;
      uVar4 = FUN_0042d288(param_2,0);
      local_28._0_2_ = 0x2aa7;
      local_28._2_2_ = 0x44;
      cVar2 = FUN_00405c98(uVar4,&PTR_FUN_00437bd8);
      puVar1 = local_1c;
      if (cVar2 != '\0') {
        local_28._0_2_ = 0x2ab6;
        local_28._2_2_ = 0x44;
        iVar5 = FUN_0042d288(param_2,0);
        puVar1 = local_1c;
        if ((*(byte *)(iVar5 + 0x24) & 4) != 0) goto LAB_00442ac6;
      }
    }
    local_1c = puVar1;
    local_28._0_2_ = 0x2ac6;
    local_28._2_2_ = 0x44;
    FUN_004410e4(PTR_PTR_007823e0);
    puVar1 = local_1c;
  }
LAB_00442ac6:
  local_1c = puVar1;
  puVar1 = (undefined1 *)*_ImgDelayDescr_Module_Handle_00000000;
  switch(*puVar1) {
  case 1:
    local_28._0_2_ = 0x2b34;
    local_28._2_2_ = 0x44;
    cVar2 = FUN_0044175c(param_1);
    if (cVar2 == '\a') {
      local_28._0_2_ = 0x2b43;
      local_28._2_2_ = 0x44;
      FUN_004422b0(param_1,&local_1c);
      local_28._0_2_ = 0x2b51;
      local_28._2_2_ = 0x44;
      FUN_004428ac(param_2,0,local_1c);
    }
    else {
      local_28._0_2_ = 0x2b5e;
      local_28._2_2_ = 0x44;
      uVar4 = FUN_00442448(param_1);
      local_28._0_2_ = 0x2b6b;
      local_28._2_2_ = 0x44;
      FUN_0042d2fc(param_2,0,uVar4);
    }
    break;
  case 2:
    local_28._0_2_ = 0x2b78;
    local_28._2_2_ = 0x44;
    uVar3 = FUN_0044181c(param_1);
    local_28._0_2_ = 0x2b86;
    local_28._2_2_ = 0x44;
    FUN_0042d2fc(param_2,0,uVar3);
    break;
  case 3:
    local_28._0_2_ = 0x2bb1;
    local_28._2_2_ = 0x44;
    FUN_004422b0(param_1,&local_20);
    local_28._0_2_ = 0x2bbb;
    local_28._2_2_ = 0x44;
    uVar4 = FUN_0042d054(puVar1,local_20);
    local_28._0_2_ = 0x2bc8;
    local_28._2_2_ = 0x44;
    FUN_0042d2fc(param_2,0,uVar4);
    break;
  case 4:
    local_28._0_2_ = 0x2bd5;
    local_28._2_2_ = 0x44;
    FUN_0044215c(param_1);
    uStack_30 = (undefined4)in_ST0;
    local_2c = (undefined4)((unkuint10)in_ST0 >> 0x20);
    local_28._0_2_ = (undefined2)((unkuint10)in_ST0 >> 0x40);
    uStack_34 = 0x442be7;
    FUN_0042defc(param_2,0);
    break;
  case 5:
  case 10:
    local_28._0_2_ = 0x2bf7;
    local_28._2_2_ = 0x44;
    FUN_004433b0(param_1,&local_24);
    local_28._0_2_ = 0x2c0c;
    local_28._2_2_ = 0x44;
    FUN_0042dcc0(param_2,0,local_24);
    break;
  case 6:
    local_28._0_2_ = 0x2c62;
    local_28._2_2_ = 0x44;
    uVar4 = FUN_00443240(param_1,puVar1);
    local_28._0_2_ = 0x2c6f;
    local_28._2_2_ = 0x44;
    FUN_0042d2fc(param_2,0,uVar4);
    break;
  case 7:
    local_28._0_2_ = 0x2c7c;
    local_28._2_2_ = 0x44;
    cVar2 = FUN_0044175c(param_1);
    if (cVar2 == '\r') {
      local_28._0_2_ = 0x2c8e;
      local_28._2_2_ = 0x44;
      FUN_004435d8(param_1);
      local_28._0_2_ = 0x2c9b;
      local_28._2_2_ = 0x44;
      FUN_0042d2fc(param_2,0,0);
    }
    else if (cVar2 == '\x0e') {
      local_28._0_2_ = 0x2ca8;
      local_28._2_2_ = 0x44;
      FUN_004435d8(param_1);
      local_28._0_2_ = 0x2cb3;
      local_28._2_2_ = 0x44;
      uVar4 = FUN_0042d288(param_2,0);
      local_28._0_2_ = 0x2cbd;
      local_28._2_2_ = 0x44;
      FUN_00441910(param_1,uVar4);
    }
    else {
      local_2c = 0x442cce;
      local_28 = &stack0xfffffffc;
      FUN_004422b0(param_1,&local_38);
      local_2c = 0x442cdc;
      FUN_004428f4(param_2,0,local_38);
    }
    break;
  case 8:
    local_28._0_2_ = 0x2cea;
    local_28._2_2_ = 0x44;
    cVar2 = FUN_0044175c(param_1);
    if (cVar2 == '\r') {
      local_28._0_2_ = 0x2cf6;
      local_28._2_2_ = 0x44;
      FUN_004435d8(param_1);
      local_28._0_2_ = 0x2d06;
      local_28._2_2_ = 0x44;
      FUN_0042e1c8(param_2,0,&DAT_0077408c);
    }
    else {
      local_28 = &stack0xffffffe8;
      local_2c = 0x442d17;
      FUN_004422b0(param_1,&local_3c);
      local_2c = 0x442d28;
      (**(code **)(*param_1 + 0x18))(param_1,param_1[6],local_3c);
      if (unaff_EBX != 0) {
        local_28._0_2_ = 0x2d3c;
        local_28._2_2_ = 0x44;
        FUN_0042e1c8(param_2,0,&stack0xffffffe8);
      }
    }
    break;
  case 9:
    local_28._0_2_ = 0x2b93;
    local_28._2_2_ = 0x44;
    uVar3 = FUN_004418b0(param_1);
    local_28._0_2_ = 0x2ba1;
    local_28._2_2_ = 0x44;
    FUN_0042d2fc(param_2,0,uVar3);
    break;
  case 0xb:
    local_28._0_2_ = 0x2c1c;
    local_28._2_2_ = 0x44;
    FUN_00443498(param_1,&local_2c);
    local_28._0_2_ = 0x2c2a;
    local_28._2_2_ = 0x44;
    FUN_0042d958(param_2,0,local_2c);
    break;
  case 0xc:
    local_2c = 0x442d44;
    local_28 = &stack0xfffffffc;
    FUN_00442934();
    break;
  case 0xf:
    local_2c = 0x442d64;
    local_28 = &stack0xfffffffc;
    FUN_00442990();
    break;
  case 0x10:
    local_28._0_2_ = 0x2d4f;
    local_28._2_2_ = 0x44;
    local_2c = FUN_004424b4(param_1);
    local_28._0_2_ = (undefined2)extraout_EDX;
    local_28._2_2_ = (undefined2)((uint)extraout_EDX >> 0x10);
    uStack_30 = 0x442d5c;
    FUN_0042e228(param_2,0);
    break;
  case 0x12:
    local_28._0_2_ = 0x2c3a;
    local_28._2_2_ = 0x44;
    FUN_00443498(param_1,&uStack_34);
    local_28._0_2_ = 0x2c45;
    local_28._2_2_ = 0x44;
    FUN_00408130(&uStack_30,uStack_34);
    local_28._0_2_ = 0x2c53;
    local_28._2_2_ = 0x44;
    FUN_0042dcc0(param_2,0,uStack_30);
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_00442dac;
  local_20 = (undefined1 *)0x442d7f;
  thunk_FUN_00406e80(&local_3c,2,puVar1);
  local_20 = (undefined1 *)0x442d87;
  FUN_00407a78(&uStack_34);
  local_20 = (undefined1 *)0x442d8f;
  thunk_FUN_00406e5c(&uStack_30);
  local_20 = (undefined1 *)0x442d97;
  FUN_00407a78(&local_2c);
  local_20 = (undefined1 *)0x442da4;
  thunk_FUN_00406e80(&local_24,3);
  return;
}
