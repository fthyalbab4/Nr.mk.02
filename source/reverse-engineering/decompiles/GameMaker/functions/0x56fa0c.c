// rea decompile_all
// name: FUN_0056fa0c
// address: 0x56fa0c
// body: available
// range: 0x56fa0c-0x56fa80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056fa0c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  HWND hWnd;
  RECT *pRVar2;
  int iVar3;
  RECT *lpRect;
  undefined4 uVar4;
  BOOL bErase;
  undefined1 local_7c [16];
  undefined1 local_6c [16];
  RECT local_5c [4];
  undefined1 local_1c [16];

  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    FUN_0056ef98(param_1,param_2,local_7c,1);
    uVar4 = 1;
    FUN_00571648(param_1,local_1c);
    FUN_0056ef98(param_1,local_1c,local_6c,uVar4);
    FUN_0056b5dc(local_7c,local_6c,local_5c);
    iVar3 = 4;
    pRVar2 = local_5c;
    do {
      bErase = 0;
      lpRect = pRVar2;
      hWnd = (HWND)FUN_004f76a8(param_1);
      InvalidateRect(hWnd,lpRect,bErase);
      pRVar2 = pRVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
