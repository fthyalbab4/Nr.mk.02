// rea decompile_all
// name: FUN_00584160
// address: 0x584160
// body: available
// range: 0x584160-0x5841a5 inclusive
// range: 0x5841d6-0x58433e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x584187 (push 0x58433f followed by fs-segment stack chaining); handler 0x58433f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00584160(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwStackY_34;
  wchar_t *pwVar1;
  undefined **ppuVar2;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_20 = &stack0xfffffffc;
  local_8 = 4;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_0058433f;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  pwVar1 =
  L"ﺃ་薇\x01＀딤䆦X䇖X䇧X䇸X䈖X䈴X䉒X䉺X䊘X䊳X䋁X䋦X䌋X쎋袺塃\xe800㾲￨㷩\x01謀뫃䎰Xꇨ\xe83f\xe9ffĬ"
  ;
  FUN_00408194(0,L"<Unknown Event>");
  switch(param_1) {
  case 0:
    pwVar1 = L"㷩\x01謀뫃䎰Xꇨ\xe83f\xe9ffĬ";
    FUN_00408194(0,&PTR_DAT_00584388);
    break;
  case 1:
    pwVar1 = (wchar_t *)0x5841f3;
    FUN_00408194(0,L"Destroy Event");
    break;
  case 2:
    FUN_0041636c(param_2,&local_8);
    pwVar1 = L"໩\x01贀\xf855잋注￠诿\xf855쎋ᒹ塄\xe800䑉￨\xf0e9";
    FUN_00408678(0,L"Alarm Event for alarm ",local_8);
    break;
  case 3:
    FUN_0058228c(param_2,&local_c);
    pwVar1 = L"\xf0e9";
    FUN_00408678(0,local_c,L" Step Event");
    break;
  case 4:
    FUN_00571ed0(param_2,&local_10);
    pwVar1 = L"틩";
    FUN_00408678(0,&PTR_DAT_00584438,local_10);
    break;
  case 5:
    ppuVar2 = &PTR_DAT_00584480;
    FUN_00582320(param_2,&stack0xffffffec);
    pwStackY_34 = L" Key";
    FUN_0040875c(0,3);
    pwVar1 = (wchar_t *)ppuVar2;
    break;
  case 6:
    FUN_005829e8(param_2,&stack0xffffffe8);
    pwVar1 = L"賩";
    FUN_00408678(0,L"Mouse Event for ",unaff_ESI);
    break;
  case 7:
    FUN_00583684(param_2,&stack0xffffffe4);
    pwVar1 = L"燫쎋Ⓔ塅\xe800㻕￨揫䡨塅贀\xe455잋僨￠\xffff\xe475둨塄謀뫃\x03";
    FUN_00408678(0,L"Other Event: ",unaff_EDI);
    break;
  case 8:
    pwVar1 = L"揫䡨塅贀\xe455잋僨￠\xffff\xe475둨塄謀뫃\x03";
    FUN_00408194(0,&PTR_DAT_00584524);
    break;
  case 9:
    pwVar1 = L"Key Press Event for ";
    FUN_00582320(param_2,&local_20);
    pwStackY_34 = L" Key";
    FUN_0040875c(0,3);
    break;
  case 10:
    pwVar1 = L"Key Release Event for ";
    FUN_00582320(param_2,&local_24);
    pwStackY_34 = L" Key";
    FUN_0040875c(0,3);
    break;
  case 0xb:
    FUN_00582180(param_2,&local_28);
    pwVar1 = (wchar_t *)0x584324;
    FUN_00408678(0,L"Trigger Event: ",local_28);
  }
  *in_FS_OFFSET = pwStackY_34;
  thunk_FUN_004072fc(&local_28,9,pwVar1,&LAB_00584346);
  return;
}
