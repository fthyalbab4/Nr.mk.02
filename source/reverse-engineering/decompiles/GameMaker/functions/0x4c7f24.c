// rea decompile_all
// name: FUN_004c7f24
// address: 0x4c7f24
// body: available
// range: 0x4c7f24-0x4c7fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004c7f24(int param_1)

{
  char cVar1;
  ushort uVar2;
  HWND hWnd;
  uint uVar3;
  uint uVar4;

  uVar2 = *(ushort *)(param_1 + 0x18);
  uVar4 = (uint)uVar2;
  FUN_004c8454(*(undefined4 *)(param_1 + 4));
  cVar1 = FUN_004f7a54();
  if (cVar1 != '\0') {
    FUN_004c8454(*(undefined4 *)(param_1 + 4));
    hWnd = (HWND)FUN_004f76a8();
    uVar3 = SendMessageW(hWnd,0x105c,*(WPARAM *)(param_1 + 0x14),-1);
    uVar2 = uVar2 & 0xfe19;
    uVar4 = CONCAT22(0xffff,uVar2);
    if ((uVar3 & 2) != 0) {
      uVar4 = CONCAT22(0xffff,uVar2) | 2;
    }
    if ((uVar3 & 1) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((uVar3 & 0x10) != 0) {
      uVar4 = uVar4 | 0x20;
    }
    if ((uVar3 & 0x20) != 0) {
      uVar4 = uVar4 | 0x40;
    }
    if ((uVar3 & 0x40) != 0) {
      uVar4 = uVar4 | 0x80;
    }
    if ((uVar3 & 0x80) != 0) {
      uVar4 = uVar4 | 0x100;
    }
    *(short *)(param_1 + 0x18) = (short)uVar4;
  }
  return uVar4;
}
