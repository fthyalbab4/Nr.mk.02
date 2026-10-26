// rea decompile_all
// name: FUN_0051b620
// address: 0x51b620
// body: available
// range: 0x51b620-0x51b6fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051b620(int param_1)

{
  char cVar1;
  HWND pHVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  RECT *lprcUpdate;
  HRGN hrgnUpdate;
  int iVar5;
  UINT flags;

  if (((*(byte *)(param_1 + 0x1c) & 0x10) == 0) && (DAT_00778d10 != (code *)0x0)) {
    cVar1 = FUN_004f7a54(param_1);
    if (cVar1 != '\0') {
      iVar5 = -0x14;
      pHVar2 = (HWND)FUN_004f76a8(param_1);
      uVar3 = GetWindowLongW(pHVar2,iVar5);
      if ((*(char *)(param_1 + 0x340) == '\0') && (*(char *)(param_1 + 0x368) == '\0')) {
        uVar3 = uVar3 & 0xfff7ffff;
        iVar5 = -0x14;
        pHVar2 = (HWND)FUN_004f76a8(param_1);
        SetWindowLongW(pHVar2,iVar5,uVar3);
        flags = 0x485;
        hrgnUpdate = (HRGN)0x0;
        lprcUpdate = (RECT *)0x0;
        pHVar2 = (HWND)FUN_004f76a8(param_1);
        RedrawWindow(pHVar2,lprcUpdate,hrgnUpdate,flags);
      }
      else {
        uVar4 = extraout_ECX;
        if ((uVar3 & 0x80000) == 0) {
          uVar3 = uVar3 | 0x80000;
          iVar5 = -0x14;
          pHVar2 = (HWND)FUN_004f76a8(param_1);
          SetWindowLongW(pHVar2,iVar5,uVar3);
          uVar4 = extraout_ECX_00;
        }
        FUN_0045aa34(*(undefined4 *)(param_1 + 0x36c),(uint)*(byte *)(param_1 + 0x368),uVar4,
                     *(undefined1 *)(param_1 + 0x341),
                     *(uint *)(&DAT_00778da8 + (uint)*(byte *)(param_1 + 0x340) * 4) |
                     *(uint *)(&DAT_00778db0 + (uint)*(byte *)(param_1 + 0x368) * 4));
        FUN_004f76a8(param_1);
        (*DAT_00778d10)();
      }
    }
  }
  return;
}
