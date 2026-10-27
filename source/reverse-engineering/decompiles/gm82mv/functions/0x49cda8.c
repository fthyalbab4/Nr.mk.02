// rea decompile_all
// name: FUN_0049cda8
// address: 0x49cda8
// body: available
// range: 0x49cda8-0x49ce71 inclusive
// range: 0x49ce79-0x49d162 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x49cdce (push 0x49d163 followed by fs-segment stack chaining); handler 0x49d163 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x49ce47 (push 0x49ce72 followed by fs-segment stack chaining); handler 0x49ce72 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049cda8(int *param_1,undefined *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  undefined4 uStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_3c;
  code *local_34;
  int local_30;
  uint local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined *local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_84 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_88 = &LAB_0049d163;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  local_18 = param_3;
  local_14 = param_2;
  if (((((5 < *(int *)PTR_DAT_00688cd4) && (DAT_00681424 != '\0')) && (param_1[0x18] == 0)) &&
      ((*(short *)((int)param_1 + 0xba) == 0 && (*(short *)((int)param_1 + 0x4a) == 0)))) &&
     (*(short *)((int)param_1 + 0x52) == 0)) {
    if (param_2 == &DAT_0047f1ec) {
      puStack_90 = (undefined1 *)0x49ce26;
      puStack_84 = &stack0xfffffffc;
      local_20 = FUN_0049be6c(&PTR_FUN_0049bd74,&UNK_0047f101,param_1);
    }
    else {
      puStack_90 = (undefined1 *)0x49ce39;
      puStack_84 = &stack0xfffffffc;
      local_20 = FUN_0049be6c(&PTR_LAB_0049be1c,1,param_1);
    }
    puStack_94 = &LAB_0049ce72;
    uStack_98 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_98;
    puStack_90 = &stack0xfffffffc;
    cVar2 = FUN_0049c0ec(local_20,local_18);
    puVar1 = puStack_90;
    local_1c = -(uint)(cVar2 != '\0');
    *in_FS_OFFSET = uStack_98;
    puStack_90 = (undefined1 *)0x49d148;
    puStack_94 = (undefined1 *)0x49ce71;
    FUN_00405fdc(local_20,uStack_98,puVar1);
    return;
  }
  puStack_90 = (undefined1 *)0x49ce84;
  (**(code **)(*(int *)param_1[0x23] + 0x44))();
  puStack_90 = (undefined1 *)0x49ce93;
  FUN_00404f38(&local_78,0x58,0);
  if (((*(int *)PTR_DAT_00688cd4 < 5) || (*(int *)PTR_DAT_0068966c != 2)) &&
     ((*(int *)PTR_DAT_0068966c != 1 ||
      ((*(int *)PTR_DAT_00688cd4 < 4 || (*(int *)PTR_DAT_00689288 < 0x5a)))))) {
    local_78 = 0x4c;
  }
  else {
    local_78 = 0x58;
  }
  local_70 = DAT_0068cc40;
  puStack_90 = (undefined1 *)0x49cee8;
  FUN_0049cd44(param_1[0x1c],&local_8);
  puStack_90 = (undefined1 *)0x49cef0;
  local_6c = FUN_00408220(local_8);
  local_60 = param_1[0x1d];
  param_1[0x1e] = local_60;
  if ((*(byte *)(param_1 + 0x1b) & 0x40) == 0) {
    local_58 = 0x104;
  }
  else {
    local_58 = 0xffef;
  }
  puStack_90 = (undefined1 *)0x49cf20;
  FUN_00408520(&local_c,local_58 + 2);
  puStack_90 = (undefined1 *)0x49cf28;
  local_5c = FUN_00408220(local_c);
  puStack_90 = (undefined1 *)0x49cf40;
  FUN_00404f38(local_5c,(local_58 + 2) * 2,0);
  puStack_90 = (undefined1 *)0x49cf4b;
  uVar3 = FUN_00408220(param_1[0x22]);
  puStack_90 = (undefined1 *)0x49cf58;
  FUN_00417708(local_5c,uVar3,local_58);
  if ((param_1[0x1f] == 0) && ((char)PTR_FUN_00681420 != '\0')) {
    local_4c = &LAB_0049d174;
  }
  else {
    puStack_90 = (undefined1 *)0x49cf79;
    local_4c = (undefined1 *)FUN_00408220(param_1[0x1f]);
  }
  puStack_90 = (undefined1 *)0x49cf87;
  local_48 = FUN_00408220(param_1[0x20]);
  local_44 = 0x20;
  local_24 = 0;
  uVar4 = 0;
  puVar6 = &DAT_00681488;
  do {
    bVar7 = (byte)uVar4 < 0x1f;
    if ((byte)uVar4 < 0x20) {
      bVar7 = (*(byte *)((int)param_1 + ((int)(uVar4 & 0x7f) >> 3) + 0x6c) >> (uVar4 & 7) & 1) != 0;
    }
    if (bVar7) {
      local_44 = local_44 | *puVar6;
    }
    uVar4 = uVar4 + 1;
    puVar6 = puVar6 + 1;
  } while ((char)uVar4 != '\x16');
  if (*PTR_DAT_00688e94 == '\0') {
    local_44 = local_44 & 0xfff7ffff;
  }
  else {
    local_44 = local_44 ^ 0x80000;
    if (((4 < *(int *)PTR_DAT_00688cd4) && (*(int *)PTR_DAT_0068966c == 2)) ||
       ((*(int *)PTR_DAT_0068966c == 1 &&
        ((3 < *(int *)PTR_DAT_00688cd4 && (0x59 < *(int *)PTR_DAT_00689288)))))) {
      uVar4 = 0;
      puVar6 = &DAT_006814e0;
      do {
        bVar7 = (byte)uVar4 < 7;
        if ((byte)uVar4 < 8) {
          bVar7 = (*(byte *)(param_1 + 0x30) >> (uVar4 & 0x1f) & 1) != 0;
        }
        if (bVar7) {
          local_24 = local_24 | *puVar6;
        }
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 1;
      } while ((char)uVar4 != '\x01');
    }
  }
  puStack_90 = (undefined1 *)0x49d03e;
  FUN_004081e8(&local_10,param_1[0x21]);
  if ((local_10 == 0) && ((local_44 & 0x80000) == 0)) {
    puStack_90 = (undefined1 *)0x49d058;
    FUN_0041733c(param_1[0x22],&local_10);
    puStack_90 = (undefined1 *)0x49d06a;
    FUN_00408a54(&local_10,1,1);
  }
  if (local_10 != 0) {
    puStack_90 = (undefined1 *)0x49d078;
    local_3c = FUN_00408220(local_10);
  }
  if (((*(byte *)((int)param_1 + 0x6e) & 1) == 0) && (*PTR_DAT_00688e94 != '\0')) {
    local_34 = FUN_0049c4e8;
  }
  else {
    local_34 = (code *)&LAB_0049b60c;
  }
  iVar5 = param_1[0x18];
  if (iVar5 != 0) {
    local_44 = local_44 | 0x40;
    local_30 = iVar5;
    if (param_1[0x11] != 0) {
      local_70 = param_1[0x11];
    }
  }
  if (*(char *)(*(int *)PTR_DAT_0068917c + 0xd0) == '\0') {
    puStack_90 = (undefined1 *)0x49d0f9;
    local_74 = FUN_0049b520();
  }
  else {
    puStack_90 = (undefined1 *)0x49d0d1;
    iVar5 = FUN_004be9cc(&PTR_LAB_0049b6cc,1,0);
    param_1[0x10] = iVar5;
    *(int **)(iVar5 + 0x270) = param_1;
    *(undefined4 *)(iVar5 + 0x274) = local_18;
    puStack_90 = (undefined1 *)0x49d0ef;
    local_74 = FUN_004c45dc(param_1[0x10]);
  }
  puStack_90 = (undefined1 *)0x49d109;
  local_1c = (**(code **)(*param_1 + 0x3c))(param_1,local_14,&local_78);
  if (local_1c != 0) {
    puStack_90 = (undefined1 *)0x49d11c;
    FUN_0049ca54(param_1,&local_78);
    if ((local_44 & 0x400) == 0) {
      param_1[0x1b] = param_1[0x1b] & 0xffffff7f;
    }
    else {
      param_1[0x1b] = param_1[0x1b] | 0x80;
    }
    if ((local_44 & 1) == 0) {
      param_1[0x1b] = param_1[0x1b] & 0xfffffffe;
    }
    else {
      param_1[0x1b] = param_1[0x1b] | 1;
    }
    param_1[0x1d] = local_60;
  }
  puVar1 = puStack_84;
  *in_FS_OFFSET = uStack_8c;
  puStack_84 = &LAB_0049d16a;
  puStack_88 = (undefined1 *)0x49d162;
  thunk_FUN_004072fc(&local_10,3,puVar1);
  return;
}
