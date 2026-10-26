// rea decompile_all
// name: FUN_004bb63c
// address: 0x4bb63c
// body: available
// range: 0x4bb63c-0x4bb739 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb63c(int param_1)

{
  int iVar1;
  char cVar2;
  HWND hWnd;
  uint lParam;
  int iVar3;

  cVar2 = FUN_004f7a54(param_1);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x28c);
    iVar3 = 0;
    if (iVar1 != 0) {
      FUN_004bdbc0(param_1,0);
      iVar3 = iVar1;
    }
    lParam = 0x402;
    if (*(char *)(param_1 + 0x2dc) != '\0') {
      lParam = 0x406;
    }
    if (*(char *)(param_1 + 0x2df) != '\0') {
      lParam = lParam | 1;
    }
    if (*(char *)(param_1 + 0x2e0) != '\0') {
      lParam = lParam | 8;
    }
    if (*(char *)(param_1 + 0x2e2) != '\0') {
      lParam = lParam | 0x20;
    }
    if (*(char *)(param_1 + 0x2dd) != '\0') {
      lParam = lParam | 0x100;
    }
    if (*(char *)(param_1 + 0x2de) != '\0') {
      lParam = lParam | 0x10;
    }
    if (*(char *)(param_1 + 0x304) != '\0') {
      lParam = lParam | 0x2000;
    }
    if ((*(byte *)(param_1 + 0x2e1) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x2e1) & 6) != 0) {
        lParam = lParam | 0x80;
      }
    }
    else {
      lParam = lParam | 0x40;
    }
    if ((*(byte *)(param_1 + 0x2e1) & 4) != 0) {
      lParam = lParam | 0x800;
    }
    if ((*(byte *)(param_1 + 0x2e1) & 2) != 0) {
      lParam = lParam | 0x1000;
    }
    hWnd = (HWND)FUN_004f76a8(param_1);
    SendMessageW(hWnd,0x1036,0,lParam);
    if (iVar3 != 0) {
      FUN_004bdbc0(param_1,iVar3);
    }
  }
  return;
}
