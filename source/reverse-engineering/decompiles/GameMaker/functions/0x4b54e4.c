// rea decompile_all
// name: FUN_004b54e4
// address: 0x4b54e4
// body: available
// range: 0x4b54e4-0x4b553c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b54e4(int param_1,char param_2)

{
  undefined4 uVar1;
  HWND pHVar2;
  uint uVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;

  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  if (param_2 == '\0') {
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0x43b;
    pHVar2 = (HWND)FUN_004f76a8(uVar1);
    uVar3 = SendMessageW(pHVar2,UVar4,WVar5,LVar6);
    uVar3 = uVar3 & 0xfffffffe;
  }
  else {
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0x43b;
    pHVar2 = (HWND)FUN_004f76a8(uVar1);
    uVar3 = SendMessageW(pHVar2,UVar4,WVar5,LVar6);
    uVar3 = uVar3 | 1;
  }
  WVar5 = 0;
  UVar4 = 0x445;
  pHVar2 = (HWND)FUN_004f76a8(uVar1);
  SendMessageW(pHVar2,UVar4,WVar5,uVar3);
  return;
}
