// rea decompile_all
// name: FUN_004bb854
// address: 0x4bb854
// body: available
// range: 0x4bb854-0x4bb910 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb854(int param_1,char param_2)

{
  int iVar1;
  HWND hWnd;
  WPARAM wParam;
  uint uVar2;
  int iVar3;
  int iVar4;

  if (*(char *)(param_1 + 0x2dc) != param_2) {
    if (param_2 != '\0') {
      FUN_004bdbc0(param_1,0);
    }
    *(char *)(param_1 + 0x2dc) = param_2;
    FUN_004bb63c(param_1);
    if (*(char *)(param_1 + 0x2dc) == '\0') {
      iVar1 = FUN_004b94ec(*(undefined4 *)(param_1 + 0x29c));
      if (-1 < iVar1 + -1) {
        iVar4 = 0;
        do {
          hWnd = (HWND)FUN_004f76a8(param_1);
          FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),iVar4);
          wParam = FUN_004b920c();
          uVar2 = SendMessageW(hWnd,0x102c,wParam,0xf000);
          iVar3 = FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),iVar4);
          *(bool *)(iVar3 + 0x26) = uVar2 >> 0xc != 1;
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    else {
      FUN_004bb744(param_1);
    }
  }
  return;
}
