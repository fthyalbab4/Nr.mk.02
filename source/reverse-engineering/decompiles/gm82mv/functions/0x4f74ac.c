// rea decompile_all
// name: FUN_004f74ac
// address: 0x4f74ac
// body: available
// range: 0x4f74ac-0x4f753f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f74ac(int param_1,HBITMAP param_2,int param_3)

{
  HDC hdc;
  uint uVar1;

  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_3 + 4);
  uVar1 = (int)*(uint *)(param_3 + 8) >> 0x1f;
  *(uint *)(param_1 + 0x45c) = (*(uint *)(param_3 + 8) ^ uVar1) - uVar1;
  if (*(ushort *)(param_3 + 0x12) < 0x10) {
    *(undefined1 *)(param_1 + 0x460) = *(undefined1 *)(param_3 + 0x12);
  }
  else {
    *(undefined1 *)(param_1 + 0x460) = 8;
  }
  if (*(ushort *)(param_3 + 0x12) < 0x10) {
    *(undefined1 *)(param_1 + 0x461) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0x461) = 2;
  }
  *(undefined1 *)(param_1 + 0x462) = 0;
  *(undefined1 *)(param_1 + 0x464) = 0;
  FUN_004f2f64(param_1);
  hdc = CreateCompatibleDC((HDC)0x0);
  GetDIBits(hdc,param_2,0,*(UINT *)(param_1 + 0x45c),*(LPVOID *)(param_1 + 0x450),
            (LPBITMAPINFO)(param_1 + 0x21),0);
  DeleteDC(hdc);
  return;
}
