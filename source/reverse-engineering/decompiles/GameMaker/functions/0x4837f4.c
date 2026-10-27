// rea decompile_all
// name: FUN_004837f4
// address: 0x4837f4
// body: available
// range: 0x4837f4-0x4838a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004837f4(int param_1,WPARAM param_2,byte param_3)

{
  uint wParam;
  HWND pHVar1;
  LRESULT LVar2;
  UINT UVar3;
  WPARAM wParam_00;
  LPARAM LVar4;
  WPARAM local_14;
  undefined1 local_10;

  local_14 = param_2;
  if (*(char *)(param_1 + 0x270) == '\0') {
    if (param_3 == 0) {
      LVar4 = 0;
      wParam_00 = 0xffffffff;
      UVar3 = 0x186;
      pHVar1 = (HWND)FUN_004f76a8(param_1);
      SendMessageW(pHVar1,UVar3,wParam_00,LVar4);
    }
    else {
      LVar4 = 0;
      UVar3 = 0x186;
      pHVar1 = (HWND)FUN_004f76a8(param_1);
      LVar2 = SendMessageW(pHVar1,UVar3,param_2,LVar4);
      if (LVar2 == -1) {
        local_10 = 0;
        FUN_0041c0bc(&PTR_LAB_0042ed5c,1,PTR_PTR_007824e4,0,&local_14);
        FUN_00406618();
      }
    }
  }
  else {
    wParam = (uint)param_3;
    UVar3 = 0x185;
    pHVar1 = (HWND)FUN_004f76a8(param_1);
    LVar2 = SendMessageW(pHVar1,UVar3,wParam,param_2);
    if (LVar2 == -1) {
      local_10 = 0;
      FUN_0041c0bc(&PTR_LAB_0042ed5c,1,PTR_PTR_007824e4,0,&local_14);
      FUN_00406618();
    }
  }
  return;
}
