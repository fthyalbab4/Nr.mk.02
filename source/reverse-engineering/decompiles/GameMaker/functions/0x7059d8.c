// rea decompile_all
// name: FUN_007059d8
// address: 0x7059d8
// body: available
// range: 0x7059d8-0x705a71 inclusive
// range: 0x705a9a-0x705ac1 inclusive
// range: 0x705acc-0x705b10 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7059fc (push 0x705b11 followed by fs-segment stack chaining); handler 0x705b11 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x705a5a (push 0x705a72 followed by fs-segment stack chaining); handler 0x705a72 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x705aaa (push 0x705ac2 followed by fs-segment stack chaining); handler 0x705ac2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007059d8(undefined4 param_1)

{
  wchar_t *pwVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwStack_38;
  undefined1 *puStack_34;
  wchar_t *pwStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  char local_9;
  undefined4 local_8;

  local_14 = 0;
  puStack_24 = (undefined1 *)0x7059f1;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_28 = &LAB_00705b11;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_9 = '\0';
  pwStack_30 = L"삄❵と灛＀ﱵ桨灛贀\xf045κ";
  puStack_24 = &stack0xfffffffc;
  cVar2 = FUN_00416e40(local_8);
  if (cVar2 == '\0') {
    pwStack_30 = L"Error Loading: File \"";
    puStack_34 = (undefined1 *)local_8;
    pwStack_38 = L"\" does not exist.";
    FUN_00408480(&local_14,3);
    FUN_004d43f8(local_14);
  }
  else {
    pwStack_30 = L"Ʋ꒡勨\xe800";
    FUN_006ca214(L"Loading Game Data ...");
    pwStack_30 = (wchar_t *)0x705a4c;
    local_10 = FUN_00405a4c(&LAB_0052e8fc,1);
    puStack_34 = &LAB_00705a72;
    pwStack_38 = (wchar_t *)*in_FS_OFFSET;
    *in_FS_OFFSET = &pwStack_38;
    pwStack_30 = (wchar_t *)&stack0xfffffffc;
    FUN_0043ff44(local_10,local_8);
    pwVar1 = pwStack_30;
    *in_FS_OFFSET = pwStack_38;
    pwStack_30 =
    L"쀳桕嫂p､搰₉䖋\xe8f4\xf867\xffff䖈㏻嫀奙襤\xeb10\xe90a۹￐შ퀌\xe8ff䟻￼䖋\xe8f4ﾣￏ綀ûཱུⲸ灜\xe800\xe90fￜ盨\xfffe\xe8ff\xeed1"
    ;
    FUN_00705964(0,pwStack_38,pwVar1);
    puStack_34 = &LAB_00705ac2;
    pwStack_38 = (wchar_t *)*in_FS_OFFSET;
    *in_FS_OFFSET = &pwStack_38;
    pwStack_30 = (wchar_t *)&stack0xfffffffc;
    local_9 = FUN_0070531c(local_10);
    pwVar1 = pwStack_30;
    *in_FS_OFFSET = pwStack_38;
    pwStack_30 = L"䖋\xe8f4ﾣￏ綀ûཱུⲸ灜\xe800\xe90fￜ盨\xfffe\xe8ff\xeed1";
    FUN_006ca2cc(0,pwStack_38,pwVar1);
    pwStack_30 = L"綀ûཱུⲸ灜\xe800\xe90fￜ盨\xfffe\xe8ff\xeed1";
    FUN_00405a7c(local_10);
    if (local_9 == '\0') {
      pwStack_30 = L"盨\xfffe\xe8ff\xeed1";
      FUN_004d43f8(L"Error Loading: File seems to be corrupted.");
      pwStack_30 =
      L"퇨î㌀嫀奙襤栐嬘p䖍\xe8f0⎠￐䖍\xe8fc⎘￐\xe9c3फ़￐\xe8eb똏﭅幟譛工ÃҰ\x02\xffff\xffff\x15"
      ;
      FUN_00705964();
    }
    pwStack_30 =
    L"쀳奚摙ႉᡨ灛贀\xf045ꃨ퀣跿ﱅ飨퀣쏿廩퀉\xebff࿨䖶忻孞\xe58b썝뀀Ȅ＀\xffffᗿ"
    ;
    FUN_007149c4();
  }
  pwVar1 = pwStack_30;
  *in_FS_OFFSET = pwStack_38;
  pwStack_30 = L"똏﭅幟譛工ÃҰ\x02\xffff\xffff\x15";
  puStack_34 = (undefined1 *)0x705b08;
  thunk_FUN_00406e5c(&local_14,pwStack_38,pwVar1);
  puStack_34 = (undefined1 *)0x705b10;
  thunk_FUN_00406e5c(&local_8);
  return;
}
