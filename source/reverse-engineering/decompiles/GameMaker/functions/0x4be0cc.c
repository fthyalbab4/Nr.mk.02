// rea decompile_all
// name: FUN_004be0cc
// address: 0x4be0cc
// body: available
// range: 0x4be0cc-0x4be137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004be0cc(int param_1,undefined4 *param_2,uint param_3)

{
  HWND hWnd;
  LRESULT LVar1;
  undefined4 uVar2;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_18 = *param_2;
  local_14 = param_2[1];
  local_24[0] = 0x40;
  local_10 = *(undefined4 *)(&DAT_00778588 + (param_3 & 0xff) * 4);
  hWnd = (HWND)FUN_004f76a8(param_1);
  LVar1 = SendMessageW(hWnd,0x1053,0xffffffff,(LPARAM)local_24);
  if (LVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),LVar1);
  }
  return uVar2;
}
