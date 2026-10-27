// rea decompile_all
// name: FUN_005ca428
// address: 0x5ca428
// body: available
// range: 0x5ca428-0x5ca5ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ca448 (push 0x5ca5ef followed by fs-segment stack chaining); handler 0x5ca5ef lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ca428(undefined4 param_1,undefined4 *param_2)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  int *local_3c;
  wchar_t *local_38;
  int *local_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined *puStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int *local_18;
  undefined4 local_c;
  undefined4 local_8;

  local_18 = (int *)&stack0xfffffffc;
  iVar3 = 7;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_1c = (undefined4 *)&LAB_005ca5ef;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  local_24 = 0x5ca455;
  FUN_005ca274(param_1,&local_8);
  local_24 = 0x5ca45f;
  FUN_0040b380(local_8,param_2);
  local_24 = 0x5ca467;
  local_24 = FUN_0040b140(&local_18);
  puStack_28 = &DAT_005ca5fc;
  puStack_2c = (undefined4 *)0x5ca477;
  FUN_005cae4c(param_1,&local_1c);
  puStack_2c = local_1c;
  uStack_30 = 0x5ca47f;
  iVar3 = (**(code **)*local_1c)();
  uVar4 = iVar3 == 0;
  if ((bool)uVar4) {
    uStack_30 = 0x5ca48b;
    uStack_30 = thunk_FUN_00406e5c(&local_20);
    local_34 = local_18;
    local_38 =
    L"뛨\xe40d诿\xe44d䖍뫴ꘘ\\嫨ﾧ跿\xe045\xf6e8\xe3d9僿䖋僬\x8b僿\xe810ඏ￤䶋跠\xf445㒺岦\xe800ꜳ\xffff䖍맴Ꙙ\\為岦\xe800꜡\xffff⫫喍诸\xe8c6ሥ"
    ;
    (**(code **)(*local_18 + 0x14))();
    local_38 = (wchar_t *)0x5ca49a;
    FUN_0040b250();
    local_38 = (wchar_t *)0x5ca4aa;
    FUN_005c4c04(&stack0xfffffff0,L"version",local_20);
    local_38 =
    L"譐\xec45譐＀ၐ迨\xe40d诿\xe04d䖍뫴꘴\\㏨ﾧ跿\xf445墹岦먀꙰\\⇨ﾧ\xebff贪\xf855욋◨\x12樀贁\xf445赐큅墺岦\xe800鱗￥䶍诐\xf855욋ꗨ\x15栀Ꚑ\\痿棴ꚬ\\䖍뫰\x03"
    ;
    local_38 = (wchar_t *)thunk_FUN_00406e5c(&local_24);
    local_3c = local_18;
    (**(code **)(*local_18 + 0x10))();
    local_38 =
    L"䶋跠\xf445㒺岦\xe800ꜳ\xffff䖍맴Ꙙ\\為岦\xe800꜡\xffff⫫喍诸\xe8c6ሥ";
    FUN_0040b250();
    local_38 = L"䖍맴Ꙙ\\為岦\xe800꜡\xffff⫫喍诸\xe8c6ሥ";
    FUN_005c4c04(&stack0xfffffff0,L"standalone",local_24);
    local_38 = L"⫫喍诸\xe8c6ሥ";
    FUN_005c4c04(&stack0xfffffff0,L"encoding",L"UTF-8");
  }
  else {
    uStack_30 = 0x5ca4ef;
    FUN_005cb714(param_1,&local_c);
    uStack_30 = 1;
    local_34 = (int *)&stack0xfffffff0;
    local_38 = L"䶍诐\xf855욋ꗨ\x15栀Ꚑ\\痿棴ꚬ\\䖍뫰\x03";
    FUN_00429ef4(&local_34,L"UTF-8");
    local_38 = L"遨岦＀\xf475걨岦贀\xf045κ";
    FUN_005cbab4(param_1,local_c,&local_34);
  }
  local_38 = L"<?xml ";
  local_3c = unaff_EBX;
  FUN_00408480(&stack0xffffffec,3);
  FUN_004076f0(*param_2,1,5,&local_38);
  FUN_004075ec(local_38,"<?xml");
  if ((bool)uVar4) {
    uVar2 = FUN_004077a0(&DAT_005ca6d4,*param_2);
    FUN_00407754(param_2,1,uVar2);
  }
  else {
    FUN_004082dc(&stack0xffffffec,&LAB_005ca6e4);
  }
  FUN_0040810c(&local_3c,unaff_ESI,0xfde9);
  FUN_0040731c(param_2,local_3c,*param_2);
  pwVar1 = local_38;
  *in_FS_OFFSET = &DAT_005ca6ac;
  local_38 = L"孞\xe58b썝☳簙쉧䠼햰⢉ᒚ⋕Ұ\x02\xffff\xffff\a";
  local_3c = (int *)0x5ca5ac;
  FUN_00406e80(&local_3c,2,pwVar1);
  local_3c = (int *)0x5ca5b4;
  FUN_004249e8(&local_34);
  local_3c = (int *)0x5ca5c1;
  thunk_FUN_00406e80(&local_24,2);
  local_3c = (int *)0x5ca5c9;
  FUN_0040b140(&local_1c);
  local_3c = (int *)0x5ca5d1;
  FUN_0040b140(&local_18);
  local_3c = (int *)0x5ca5de;
  thunk_FUN_00406e80(&stack0xffffffec,2);
  local_3c = (int *)0x5ca5e6;
  FUN_0040b140(&local_c);
  local_3c = (int *)0x5ca5ee;
  thunk_FUN_00406e5c(&local_8);
  return;
}
