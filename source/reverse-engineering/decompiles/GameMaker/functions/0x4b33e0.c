// rea decompile_all
// name: FUN_004b33e0
// address: 0x4b33e0
// body: available
// range: 0x4b33e0-0x4b3489 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b33e0(int param_1)

{
  char cVar1;
  HWND pHVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;

  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    if ((*(int *)(param_1 + 0x298) == 0) && (*(int *)(param_1 + 0x29c) == 0)) {
      LVar5 = 0;
      WVar4 = 1;
      UVar3 = 0x413;
      pHVar2 = (HWND)FUN_004f76a8(param_1);
      SendMessageW(pHVar2,UVar3,WVar4,LVar5);
    }
    else if (*(int *)(param_1 + 0x29c) < 0x7fff) {
      LVar5 = CONCAT22(*(undefined2 *)(param_1 + 0x29c),*(undefined2 *)(param_1 + 0x298));
      WVar4 = 1;
      UVar3 = 0x40a;
      pHVar2 = (HWND)FUN_004f76a8(param_1);
      SendMessageW(pHVar2,UVar3,WVar4,LVar5);
    }
    else {
      LVar5 = *(LPARAM *)(param_1 + 0x298);
      WVar4 = 0;
      UVar3 = 0x40b;
      pHVar2 = (HWND)FUN_004f76a8(param_1);
      SendMessageW(pHVar2,UVar3,WVar4,LVar5);
      LVar5 = *(LPARAM *)(param_1 + 0x29c);
      WVar4 = 1;
      UVar3 = 0x40c;
      pHVar2 = (HWND)FUN_004f76a8(param_1);
      SendMessageW(pHVar2,UVar3,WVar4,LVar5);
    }
  }
  return;
}
