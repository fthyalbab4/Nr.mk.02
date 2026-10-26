// rea decompile_all
// name: FUN_0051f4bc
// address: 0x51f4bc
// body: available
// range: 0x51f4bc-0x51f525 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0051f4bc(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  HWND hWnd;
  BOOL BVar3;
  uint local_14;

  local_14 = param_3 & 0xffffff00;
  if (*(short *)(param_1 + 0x15a) != 0) {
    (**(code **)(param_1 + 0x158))(*(undefined4 *)(param_1 + 0x15c),param_2,&local_14);
  }
  if ((char)local_14 == '\0') {
    if (*(int *)(param_1 + 0x44) != 0) {
      hWnd = (HWND)FUN_004f76a8(*(int *)(param_1 + 0x44));
      BVar3 = IsWindowEnabled(hWnd);
      if (BVar3 != 0) {
        cVar1 = FUN_00405d08(*(undefined4 *)(param_1 + 0x44),param_2);
        if (cVar1 != '\0') goto LAB_0051f517;
      }
    }
    uVar2 = 0;
  }
  else {
LAB_0051f517:
    uVar2 = 1;
  }
  return uVar2;
}
