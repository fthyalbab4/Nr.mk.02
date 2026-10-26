// rea decompile_all
// name: FUN_00480768
// address: 0x480768
// body: available
// range: 0x480768-0x4807fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48077e (push 0x4807ff followed by fs-segment stack chaining); handler 0x4807ff lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480768(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  HWND pHVar2;
  uint lParam;
  undefined4 *in_FS_OFFSET;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM lParam_00;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004807ff;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_004ee6a0(*(undefined4 *)(param_4 + -4),&local_8);
  FUN_00408778(&local_8,param_1 + 1,param_2 - param_1);
  lParam_00 = 0;
  WVar4 = 0xffffffff;
  UVar3 = 0x14e;
  pHVar2 = (HWND)FUN_004f76a8(*(undefined4 *)(param_4 + -4));
  SendMessageW(pHVar2,UVar3,WVar4,lParam_00);
  FUN_004ee6d8(*(undefined4 *)(param_4 + -4),local_8);
  lParam = param_1 & 0xffff | param_1 << 0x10;
  WVar4 = 0;
  UVar3 = 0x142;
  pHVar2 = (HWND)FUN_004f76a8(*(undefined4 *)(param_4 + -4));
  SendMessageW(pHVar2,UVar3,WVar4,lParam);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00480806;
  puStack_18 = (undefined1 *)0x4807fe;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
