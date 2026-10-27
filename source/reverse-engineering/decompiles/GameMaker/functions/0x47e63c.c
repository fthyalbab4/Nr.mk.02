// rea decompile_all
// name: FUN_0047e63c
// address: 0x47e63c
// body: available
// range: 0x47e63c-0x47e720 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47e65c (push 0x47e721 followed by fs-segment stack chaining); handler 0x47e721 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047e63c(int param_1,WPARAM param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  HWND pHVar2;
  WPARAM WVar3;
  LRESULT LVar4;
  undefined4 uVar5;
  LPARAM *in_FS_OFFSET;
  UINT UVar6;
  WPARAM WVar7;
  LPARAM in_stack_ffffffd8;
  LPARAM lParam;
  LPARAM LStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  LPARAM local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_0047e721;
  LStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (LPARAM)&LStack_24;
  puVar1 = &stack0xfffffffc;
  if ((int)param_2 < 0) goto LAB_0047e70b;
  lParam = 0;
  UVar6 = 0xbb;
  WVar3 = param_2;
  pHVar2 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
  WVar3 = SendMessageW(pHVar2,UVar6,WVar3,lParam);
  if ((int)WVar3 < 0) {
    in_stack_ffffffd8 = 0;
    param_2 = param_2 - 1;
    UVar6 = 0xbb;
    pHVar2 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
    WVar3 = SendMessageW(pHVar2,UVar6,param_2,in_stack_ffffffd8);
    puVar1 = puStack_1c;
    if ((int)WVar3 < 0) goto LAB_0047e70b;
    in_stack_ffffffd8 = 0;
    UVar6 = 0xc1;
    WVar7 = WVar3;
    pHVar2 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
    LVar4 = SendMessageW(pHVar2,UVar6,WVar7,in_stack_ffffffd8);
    puVar1 = puStack_1c;
    if (LVar4 == 0) goto LAB_0047e70b;
    WVar3 = WVar3 + LVar4;
    FUN_0040839c(&local_8,&LAB_0047e73c,param_3);
  }
  else {
    FUN_0040839c(&local_8,param_3,&LAB_0047e73c);
  }
  UVar6 = 0xb1;
  WVar7 = WVar3;
  pHVar2 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
  SendMessageW(pHVar2,UVar6,WVar3,WVar7);
  in_stack_ffffffd8 = local_8;
  uVar5 = FUN_004f76a8(*(undefined4 *)(param_1 + 0x1c));
  FUN_0040ef5c(uVar5,0xc2,0);
  puVar1 = puStack_1c;
LAB_0047e70b:
  puStack_1c = puVar1;
  puVar1 = puStack_20;
  *in_FS_OFFSET = in_stack_ffffffd8;
  puStack_20 = &LAB_0047e728;
  LStack_24 = 0x47e720;
  thunk_FUN_00406e5c(&local_8,in_stack_ffffffd8,puVar1);
  return;
}
