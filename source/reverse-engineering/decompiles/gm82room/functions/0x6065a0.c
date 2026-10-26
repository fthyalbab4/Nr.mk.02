// rea decompile_all
// name: FUN_006065a0
// address: 0x6065a0
// body: available
// range: 0x6065a0-0x606779 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6065ba (push 0x60677a followed by fs-segment stack chaining); handler 0x60677a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006065a0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwStackY_44;
  wchar_t *in_stack_ffffffc4;
  undefined **ppuVar4;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined **ppuStack_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  ppuStack_30 = (undefined **)&stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = (undefined1 *)0x0;
  local_20 = 0;
  local_24 = 0;
  puStack_34 = &LAB_0060677a;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  ppuVar4 = (undefined **)&stack0xfffffffc;
  if (*PTR_DAT_006890a8 != '\0') {
    in_stack_ffffffc4 =
         L"\xf883異㌖\xe8c0Ѿ\xffff﷨\xf89c\xe8ff΀\xffff盩\x01ꄀ鉔h㢀琀\xe81bѐ\xffff\xf883甛㌑\xe8c0є\xffff⯨ﬡ\xe9ffő"
    ;
    iVar2 = FUN_005f6a48();
    ppuVar4 = ppuStack_30;
    if (iVar2 == 0x70) {
      FUN_005f6a58(0);
      FUN_005902dc();
      in_stack_ffffffc4 =
           L"盩\x01ꄀ鉔h㢀琀\xe81bѐ\xffff\xf883甛㌑\xe8c0є\xffff⯨ﬡ\xe9ffő";
      FUN_005f6964();
      goto LAB_0060675f;
    }
  }
  ppuStack_30 = ppuVar4;
  if (*PTR_DAT_00689254 != '\0') {
    in_stack_ffffffc4 = L"\xf883甛㌑\xe8c0є\xffff⯨ﬡ\xe9ffő";
    iVar2 = FUN_005f6a48();
    if (iVar2 == 0x1b) {
      FUN_005f6a58(0);
      in_stack_ffffffc4 =
           L"凩\x01ꄀ鈴h㢀琀\xe822Ы\xffff\xf883畳㌘\xe8c0Я\xffff﫨\xf5b9㓿\xe801맓\xfff5◩\x01ꄀ鏜h㢀琀\xe847Ͽ\xffff\xf883畴㌽\xe8c0Ѓ\xffff顨恧贀\xf855鲡梎謀\xe800ﴃ￠痿棸枰`䖍뫼\x03"
      ;
      FUN_005b8734();
      goto LAB_0060675f;
    }
  }
  if (*PTR_DAT_00689234 != '\0') {
    in_stack_ffffffc4 =
         L"\xf883畳㌘\xe8c0Я\xffff﫨\xf5b9㓿\xe801맓\xfff5◩\x01ꄀ鏜h㢀琀\xe847Ͽ\xffff\xf883畴㌽\xe8c0Ѓ\xffff顨恧贀\xf855鲡梎謀\xe800ﴃ￠痿棸枰`䖍뫼\x03"
    ;
    iVar2 = FUN_005f6a48();
    if (iVar2 == 0x73) {
      FUN_005f6a58(0);
      uVar3 = FUN_00562028();
      in_stack_ffffffc4 =
           L"◩\x01ꄀ鏜h㢀琀\xe847Ͽ\xffff\xf883畴㌽\xe8c0Ѓ\xffff顨恧贀\xf855鲡梎謀\xe800ﴃ￠痿棸枰`䖍뫼\x03"
      ;
      FUN_00562008(uVar3 ^ 1);
      goto LAB_0060675f;
    }
  }
  if (*PTR_DAT_006893dc != '\0') {
    in_stack_ffffffc4 =
         L"\xf883畴㌽\xe8c0Ѓ\xffff顨恧贀\xf855鲡梎謀\xe800ﴃ￠痿棸枰`䖍뫼\x03";
    iVar2 = FUN_005f6a48();
    if (iVar2 == 0x74) {
      FUN_005f6a58(0);
      in_stack_ffffffc4 = L"_save";
      FUN_0041636c(*(undefined4 *)PTR_DAT_00688e9c,&local_c);
      pwStackY_44 = L".sav";
      FUN_0040875c(&local_8,3);
      FUN_005b8aac(local_8);
      goto LAB_0060675f;
    }
  }
  if (*PTR_DAT_006893dc != '\0') {
    in_stack_ffffffc4 =
         L"\xf883畵㌽\xe8c0β\xffff顨恧贀\xf055鲡梎謀\xe800ﲲ￠痿棰枰`䖍뫴\x03";
    iVar2 = FUN_005f6a48();
    if (iVar2 == 0x75) {
      FUN_005f6a58(0);
      in_stack_ffffffc4 = L"_save";
      FUN_0041636c(*(undefined4 *)PTR_DAT_00688e9c,&local_14);
      pwStackY_44 = L".sav";
      FUN_0040875c(&local_10,3);
      FUN_005b874c(local_10);
      goto LAB_0060675f;
    }
  }
  if (*PTR_DAT_006891b0 != '\0') {
    in_stack_ffffffc4 = L"\xf883畸㍭\xe8c0͡\xffff撾";
    iVar2 = FUN_005f6a48();
    if (iVar2 == 0x78) {
      FUN_005f6a58(0);
      iVar2 = 100;
      while( true ) {
        ppuStack_30 = &PTR_DAT_006067c8;
        puStack_34 = (undefined1 *)0x60670e;
        FUN_0041636c(iVar2,&local_1c);
        puStack_34 = local_1c;
        FUN_0040875c(&local_18,3);
        cVar1 = FUN_00416b0c(local_18);
        if (cVar1 == '\0') break;
        iVar2 = iVar2 + 1;
      }
      ppuVar4 = &PTR_DAT_006067c8;
      FUN_0041636c(iVar2,&local_24);
      pwStackY_44 = L".png";
      FUN_0040875c(&local_20,3);
      FUN_005b8da8(local_20);
      in_stack_ffffffc4 = (wchar_t *)ppuVar4;
    }
  }
LAB_0060675f:
  *in_FS_OFFSET = pwStackY_44;
  thunk_FUN_004072fc(&local_24,8,in_stack_ffffffc4,&LAB_00606781);
  return;
}
