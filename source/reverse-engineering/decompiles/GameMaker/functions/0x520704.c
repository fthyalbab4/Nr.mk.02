// rea decompile_all
// name: FUN_00520704
// address: 0x520704
// body: available
// range: 0x520704-0x5207a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00520704(byte param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND hWnd;
  BOOL BVar1;
  uint uVar2;

  BVar1 = IsWindowVisible(*(HWND *)(*(int *)(param_4 + -4) + 0x170));
  if (((byte)(1U - (BVar1 == 0)) == DAT_00778e50) && (param_1 != DAT_00778e50)) {
    if ((*(char *)(*(int *)(param_4 + -4) + 0xd3) != '\0') && (DAT_00778e50 == 0)) {
      hWnd = *(HWND *)(*(int *)(param_4 + -4) + 0x170);
      uVar2 = GetWindowLongW(hWnd,-0x14);
      SetWindowLongW(hWnd,-0x14,uVar2 | 0x8000000);
    }
    SetWindowPos(*(HWND *)(*(int *)(param_4 + -4) + 0x170),(HWND)0x0,0,0,0,0,
                 (uint)*(ushort *)(&DAT_00778e54 + (uint)param_1 * 2));
    DAT_00778e50 = param_1;
  }
  return;
}
