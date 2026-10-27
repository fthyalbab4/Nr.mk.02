// rea decompile_all
// name: FUN_004630e4
// address: 0x4630e4
// body: available
// range: 0x4630e4-0x46319b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004630e4(int param_1)

{
  int iVar1;
  int iVar2;
  HDC hdc;
  int iVar3;
  HPALETTE pHVar4;
  char cVar5;

  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) != '\0') {
    return;
  }
  if (*(int *)(iVar1 + 0x10) != 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x14) == *(int *)(iVar1 + 8)) {
    FUN_004613e8();
  }
  iVar2 = FUN_0045d8fc(*(undefined4 *)(iVar1 + 0x14),0,
                       1 << ((byte)*(undefined2 *)(iVar1 + 0x3e) & 0x1f));
  *(int *)(iVar1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    return;
  }
  GetDC((HWND)0x0);
  hdc = (HDC)FUN_0045d204();
  if (*(char *)(iVar1 + 0x70) == '\0') {
    iVar2 = GetDeviceCaps(hdc,0xc);
    iVar3 = GetDeviceCaps(hdc,0xe);
    if ((int)((uint)*(ushort *)(iVar1 + 0x2a) * (uint)*(ushort *)(iVar1 + 0x28)) <= iVar2 * iVar3) {
      cVar5 = '\0';
      goto LAB_00463175;
    }
  }
  cVar5 = '\x01';
LAB_00463175:
  *(char *)(iVar1 + 0x70) = cVar5;
  if (cVar5 != '\0') {
    pHVar4 = CreateHalftonePalette(hdc);
    *(HPALETTE *)(iVar1 + 0x10) = pHVar4;
  }
  ReleaseDC((HWND)0x0,hdc);
  if (*(int *)(iVar1 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}
