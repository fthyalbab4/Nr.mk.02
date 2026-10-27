// rea decompile_all
// name: FUN_00573590
// address: 0x573590
// body: available
// range: 0x573590-0x57365f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00573590(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  HWND hWnd;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined2 local_6;

  local_6 = param_2;
  if ((*(char *)(param_1 + 0x2dd) != '\0') &&
     (FUN_00573914(param_1,param_3,param_4), *(char *)(param_1 + 0x2dc) != '\0')) {
    local_14 = param_4;
    local_18 = param_3;
    FUN_004ee09c(param_1,&local_18,local_28);
    FUN_004ee1d0(*(undefined4 *)(param_1 + 0x2d0),local_28,&local_10);
    (**(code **)(**(int **)(param_1 + 0x2d0) + 0x54))(*(int **)(param_1 + 0x2d0),local_38);
    cVar1 = FUN_0040c15c(local_38,&local_10);
    if (cVar1 != '\0') {
      FUN_005738e8(param_1);
      hWnd = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x2d0));
      local_20 = local_10;
      local_1c = local_c;
      SendMessageW(hWnd,0x201,0,local_10 & 0xffff | local_c << 0x10);
      return;
    }
  }
  FUN_004f0804(param_1,local_6,param_3,param_4);
  return;
}
