// rea decompile_all
// name: FUN_005ff638
// address: 0x5ff638
// body: available
// range: 0x5ff638-0x5ff883 inclusive
// range: 0x5ff8ee-0x5ff935 inclusive
// range: 0x5ff93d-0x5ff998 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ff65d (push 0x5ff9c4 followed by fs-segment stack chaining); handler 0x5ff9c4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ff78e (push 0x5ff999 followed by fs-segment stack chaining); handler 0x5ff999 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ff856 (push 0x5ff936 followed by fs-segment stack chaining); handler 0x5ff936 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ff864 (push 0x5ff884 followed by fs-segment stack chaining); handler 0x5ff884 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005ff6d5) */

void FUN_005ff638(int *param_1,undefined4 *param_2,char param_3,uint param_4,uint param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  uint *in_FS_OFFSET;
  bool bVar4;
  uint uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  uint uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_18;
  char local_11;
  undefined4 *local_10;
  int *local_c;
  undefined4 local_8;

  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  local_8 = 0;
  puStack_44 = &LAB_005ff9c4;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_48;
  puVar1 = &stack0xfffffffc;
  local_11 = param_3;
  local_10 = param_2;
  local_c = param_1;
  if (param_2 == (undefined4 *)0x0) {
    uStack_4c = 0x5ff67a;
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\Core\\IdIOHandler.pas",
                 0x5f0);
    puVar1 = puStack_40;
  }
  puStack_40 = puVar1;
  if (((param_5 == 0xffffffff) && (param_4 == 0xffffffff)) && (local_11 == '\0')) {
    if ((char)local_c[0x24] == '\0') {
      uStack_4c = 0x5ff6b4;
      local_24 = FUN_005fe6bc(local_c,1);
      local_20 = (int)local_24 >> 0x1f;
    }
    else {
      uStack_4c = 0x5ff6a2;
      local_24 = FUN_005fe730(local_c,1);
      local_20 = extraout_EDX;
    }
  }
  else {
    local_24 = param_4;
    local_20 = param_5;
  }
  if ((local_20 != 0xffffffff) && (-1 < (int)local_20)) {
    uStack_4c = 0x5ff6e1;
    local_2c = FUN_0043f234(local_10);
    uVar2 = -local_2c - 1;
    uVar3 = 0x7fffffff - extraout_EDX_00;
    local_28 = extraout_EDX_00;
    if (SBORROW4(0x7fffffff,extraout_EDX_00)) {
      uStack_4c = 0x5ff6fe;
      uVar2 = FUN_00405944();
      uVar3 = extraout_EDX_01;
    }
    if (uVar3 == local_20) {
      if (uVar2 < local_24) {
LAB_005ff70c:
        uStack_4c = 0x5ff719;
        FUN_0040b75c(PTR_PTR_00782958,&local_30);
        uStack_4c = 0x5ff726;
        FUN_005df624(&PTR_LAB_005fbc14,local_30);
      }
    }
    else if ((int)uVar3 < (int)local_20) goto LAB_005ff70c;
    uStack_50 = local_2c + local_24;
    uStack_4c = local_28 + local_20 + (uint)CARRY4(local_2c,local_24);
    if (SCARRY4(local_28,local_20) != SCARRY4(local_28 + local_20,(uint)CARRY4(local_2c,local_24)))
    {
      uStack_4c = 0x5ff739;
      uStack_50 = FUN_00405944();
      uStack_4c = extraout_EDX_02;
    }
    puStack_54 = (undefined1 *)0x5ff743;
    FUN_005ff5f0(local_10);
  }
  if (((local_20 == 0xffffffff) || (0x7fffffff < local_20)) && (local_11 == '\0')) {
    local_11 = '\x01';
  }
  if (local_11 == '\0') {
    uStack_4c = local_20;
    uStack_50 = local_24;
    puStack_54 = (undefined1 *)0x5ff783;
    (**(code **)(*local_c + 0x38))(local_c,0);
  }
  else {
    uStack_4c = 0;
    uStack_50 = 0;
    puStack_54 = (undefined1 *)0x5ff771;
    (**(code **)(*local_c + 0x38))(local_c,0);
  }
  puStack_58 = &LAB_005ff999;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_5c;
  puStack_64 = *(undefined1 **)(local_c[0x28] + 0x20);
  puStack_54 = &stack0xfffffffc;
  if (0 < (int)puStack_64) {
    puStack_54 = &stack0xfffffffc;
    local_18 = (uint)puStack_64;
    if (local_11 == '\0') {
      uStack_60 = (int)puStack_64 >> 0x1f;
      puStack_68 = (undefined1 *)local_20;
      uStack_6c = local_24;
      puStack_70 = (undefined1 *)0x5ff7bc;
      puStack_54 = &stack0xfffffffc;
      local_18 = FUN_005e188c();
      if ((int)local_18 >> 0x1f != extraout_EDX_03) {
        uStack_60 = 0x5ff7ca;
        local_18 = thunk_FUN_00404478();
      }
      bVar4 = local_24 < local_18;
      local_24 = local_24 - local_18;
      local_20 = (local_20 - ((int)local_18 >> 0x1f)) - (uint)bVar4;
    }
    uStack_60 = 0xffffffff;
    puStack_64 = (undefined1 *)0x5ff7ed;
    FUN_005f8f24(local_c[0x28],local_10,local_18);
  }
  if (local_11 != '\0') {
    local_18 = local_c[0x31];
LAB_005ff833:
    puStack_64 = (undefined1 *)0x0;
    puStack_68 = (undefined1 *)0x5ff848;
    FUN_00409be0(&local_8,&DAT_004108f8,1);
    puStack_68 = &LAB_005ff936;
    uStack_6c = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&uStack_6c;
    puStack_74 = &LAB_005ff884;
    uStack_78 = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&uStack_78;
    puStack_70 = &stack0xfffffffc;
    puStack_64 = &stack0xfffffffc;
    (**(code **)(*local_c + 0xac))(local_c,&local_8,local_18);
    *in_FS_OFFSET = 0;
    puStack_74 = (undefined1 *)0x5ff8fc;
    FUN_005f57f0(&PTR_FUN_005f54dc,1,0);
    *in_FS_OFFSET = (uint)puStack_70;
    puStack_68 = (undefined1 *)0x5ff7ed;
    if (0 < (int)local_18) {
      uStack_6c = local_18;
      puStack_70 = (undefined1 *)0x0;
      puStack_74 = (undefined1 *)0x5ff925;
      FUN_005df9bc(&LAB_005df694,local_10,local_8);
    }
    return;
  }
  puStack_64 = (undefined1 *)local_20;
  puStack_68 = (undefined1 *)local_24;
  puStack_70 = (undefined1 *)local_c[0x31];
  uStack_6c = (int)puStack_70 >> 0x1f;
  puStack_74 = (undefined1 *)0x5ff818;
  uVar3 = FUN_005e188c();
  puStack_64 = (undefined1 *)uVar3;
  if ((int)uVar3 >> 0x1f != extraout_EDX_04) {
    puStack_64 = (undefined1 *)0x5ff826;
    uVar3 = thunk_FUN_00404478();
  }
  local_18 = uVar3;
  if (0 < (int)uVar3) goto LAB_005ff833;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_005ff9a0;
  uStack_5c = 0x5ff954;
  (**(code **)(*local_c + 0x40))(local_c,0);
  uStack_5c = 0x5ff95b;
  uStack_60 = (**(code **)*local_10)();
  puStack_64 = (undefined1 *)0x5ff965;
  uStack_5c = extraout_EDX_05;
  uVar3 = FUN_0043f234(local_10);
  if (extraout_EDX_06 == uStack_5c) {
    if (uStack_60 <= uVar3) goto LAB_005ff98a;
  }
  else if ((int)uStack_5c <= (int)extraout_EDX_06) goto LAB_005ff98a;
  uStack_5c = 0x5ff980;
  uStack_60 = FUN_0043f234(local_10,uStack_60);
  puStack_64 = (undefined1 *)0x5ff98a;
  FUN_0043f2b8(local_10);
LAB_005ff98a:
  uStack_5c = 0x5ff998;
  FUN_00409ce0(&local_8,&DAT_004108f8);
  return;
}
