// rea decompile_all
// name: FUN_0051b914
// address: 0x51b914
// body: available
// range: 0x51b914-0x51ba0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051b914(int *param_1)

{
  int iVar1;
  char cVar2;
  HWND pHVar3;
  RECT *pRVar4;
  BOOL BVar5;
  MARGINS *pMarInset;
  MARGINS local_14;

  pMarInset = &local_14;
  cVar2 = FUN_0044cdbc();
  if ((cVar2 == '\0') || (cVar2 = FUN_004f7a54(param_1), cVar2 == '\0')) {
    param_1[0x15] = param_1[0x15] & 0xffff7fff;
    if ((*(byte *)(param_1 + 7) & 0x10) != 0) {
      BVar5 = -1;
      pRVar4 = (RECT *)0x0;
      pHVar3 = (HWND)FUN_004f76a8(param_1);
      InvalidateRect(pHVar3,pRVar4,BVar5);
    }
    return;
  }
  iVar1 = param_1[0xdd];
  if (*(char *)(iVar1 + 8) == '\0') {
    param_1[0x15] = param_1[0x15] & 0xffff7fff;
    FUN_00404f08(&local_14,0x10,0);
  }
  else {
    if (*(char *)(iVar1 + 0x28) == '\0') {
      local_14.cxLeftWidth = *(int *)(iVar1 + 0xc);
      local_14.cxRightWidth = *(int *)(iVar1 + 0x14);
      local_14.cyTopHeight = *(int *)(iVar1 + 0x10);
      local_14.cyBottomHeight = *(int *)(iVar1 + 0x18);
    }
    else {
      local_14.cxLeftWidth = -1;
      local_14.cxRightWidth = -1;
      local_14.cyTopHeight = -1;
      local_14.cyBottomHeight = -1;
    }
    if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
      param_1[0x15] = param_1[0x15] | 0x8000;
    }
  }
  if ((*(byte *)(param_1 + 7) & 0x10) != 0) {
    BVar5 = -1;
    pRVar4 = (RECT *)0x0;
    pHVar3 = (HWND)FUN_004f76a8(param_1);
    InvalidateRect(pHVar3,pRVar4,BVar5);
    return;
  }
  pHVar3 = (HWND)FUN_004f76a8(param_1);
  DwmExtendFrameIntoClientArea(pHVar3,pMarInset);
  (**(code **)(*param_1 + 0x90))();
  return;
}
