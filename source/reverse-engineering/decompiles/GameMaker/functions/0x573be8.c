// rea decompile_all
// name: FUN_00573be8
// address: 0x573be8
// body: available
// range: 0x573be8-0x573c6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00573be8(int *param_1,UINT *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  HWND hWnd;
  UINT Msg;
  UINT wParam;
  UINT UVar2;
  undefined4 local_10;

  UVar2 = *param_2;
  local_10 = param_3;
  if ((((UVar2 == 0x100) || (UVar2 == 0x102)) || (UVar2 == 0x104)) &&
     ((char)param_1[0xb5] == '\x02')) {
    local_10 = CONCAT22((short)((uint)param_3 >> 0x10),(short)param_2[1]);
    uVar1 = FUN_0051361c(param_2[2]);
    (**(code **)(*param_1 + 300))(param_1,&local_10,uVar1);
    *(undefined2 *)(param_2 + 1) = (undefined2)local_10;
    if (((short)param_2[1] != 0) && ((char)param_1[0xb7] != '\0')) {
      UVar2 = param_2[2];
      wParam = param_2[1];
      Msg = *param_2;
      hWnd = (HWND)FUN_004f76a8(param_1[0xb4]);
      SendMessageW(hWnd,Msg,wParam,UVar2);
      return;
    }
  }
  FUN_0056bf80(param_1,param_2);
  return;
}
