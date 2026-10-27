// rea decompile_all
// name: FUN_006befe4
// address: 0x6befe4
// body: available
// range: 0x6befe4-0x6bf029 inclusive
// range: 0x6bf05a-0x6bf1c2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6bf00b (push 0x6bf1c3 followed by fs-segment stack chaining); handler 0x6bf1c3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006befe4(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwStackY_34;
  wchar_t *pwVar1;
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
  local_24 = &LAB_006bf1c3;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  pwVar1 =
  L"ﺃ་薇\x01＀딤\xf02ak\xf05ak\xf06bk\xf07ck\xf09ak\xf0b8k\xf0d6k\xf0fek\xf11ck\xf137k\xf145k\xf16ak\xf18fk쎋಺毲\xe800蹒ￔ㷩\x01謀뫃\xf234k䇨풎\xe9ffĬ"
  ;
  FUN_00407eb8(0,L"<Unknown Event>");
  switch(param_1) {
  case 0:
    pwVar1 = L"㷩\x01謀뫃\xf234k䇨풎\xe9ffĬ";
    FUN_00407eb8(0,L"Create Event");
    break;
  case 1:
    pwVar1 =
    L"⳩\x01贀ﱕ잋\xe6e8핵诿ﱍ쎋岺毲\xe800錇ￔ໩\x01贀\xf855잋ヨ￠诿\xf855쎋颹毲\xe800鋩ￔ\xf0e9"
    ;
    FUN_00407eb8(0,L"Destroy Event");
    break;
  case 2:
    FUN_0041666c(param_2,&local_8);
    pwVar1 = L"໩\x01贀\xf855잋ヨ￠诿\xf855쎋颹毲\xe800鋩ￔ\xf0e9";
    FUN_0040839c(0,L"Alarm Event for alarm ",local_8);
    break;
  case 3:
    FUN_006bd0d4(param_2,&local_c);
    pwVar1 = L"\xf0e9";
    FUN_0040839c(0,local_c,L"Step Eventt");
    break;
  case 4:
    FUN_0062cabc(param_2,&local_10);
    pwVar1 = L"틩";
    FUN_0040839c(0,L"Collision Event with object ",local_10);
    break;
  case 5:
    pwVar1 = L"Keyboard Event for ";
    FUN_006bd168(param_2,&stack0xffffffec);
    pwStackY_34 = L" Key";
    FUN_00408480(0,3);
    break;
  case 6:
    FUN_006bd830(param_2,&stack0xffffffe8);
    pwVar1 = L"賩";
    FUN_0040839c(0,L"Mouse Event for ",unaff_ESI);
    break;
  case 7:
    FUN_006be4cc(param_2,&stack0xffffffe4);
    pwVar1 = L"燫쎋ꢺ毳\xe800赵ￔ揫챨毳贀\xe455잋ᓨ￠\xffff\xe475㡨毳謀뫃\x03";
    FUN_0040839c(0,L"Other Event: ",unaff_EDI);
    break;
  case 8:
    pwVar1 = L"揫챨毳贀\xe455잋ᓨ￠\xffff\xe475㡨毳謀뫃\x03";
    FUN_00407eb8(0,L"Draw Event");
    break;
  case 9:
    pwVar1 = L"Key Press Event for ";
    FUN_006bd168(param_2,&local_20);
    pwStackY_34 = L" Key";
    FUN_00408480(0,3);
    break;
  case 10:
    pwVar1 = L"Key Release Event for ";
    FUN_006bd168(param_2,&local_24);
    pwStackY_34 = L" Key";
    FUN_00408480(0,3);
    break;
  case 0xb:
    FUN_006bcce4(param_2,&local_28);
    pwVar1 = (wchar_t *)0x6bf1a8;
    FUN_0040839c(0,L"Trigger Event: ",local_28);
  }
  *in_FS_OFFSET = pwStackY_34;
  thunk_FUN_00406e80(&local_28,9,pwVar1,&LAB_006bf1ca);
  return;
}
