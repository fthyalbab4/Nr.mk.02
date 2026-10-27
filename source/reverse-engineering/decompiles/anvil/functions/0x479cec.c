// rea decompile_all
// name: FUN_00479cec
// address: 0x479cec
// body: available
// range: 0x479cec-0x479d5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00479cec(int param_1)

{
  char cVar1;
  HWND pHVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;

  FUN_004c037c(param_1);
  LVar5 = 0;
  WVar4 = *(WPARAM *)(param_1 + 0x274);
  UVar3 = 0x141;
  pHVar2 = (HWND)FUN_004c45dc(param_1);
  SendMessageW(pHVar2,UVar3,WVar4,LVar5);
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  cVar1 = FUN_0041cec4(5,1);
  if (cVar1 != '\0') {
    FUN_004d08e8();
    cVar1 = FUN_004d09f4();
    if (cVar1 != '\0') {
      LVar5 = 0;
      WVar4 = *(WPARAM *)(param_1 + 0x278);
      UVar3 = 0x1701;
      pHVar2 = (HWND)FUN_004c45dc(param_1);
      SendMessageW(pHVar2,UVar3,WVar4,LVar5);
    }
  }
  return;
}
