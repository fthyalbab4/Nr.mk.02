// rea decompile_all
// name: FUN_00518cac
// address: 0x518cac
// body: available
// range: 0x518cac-0x518d22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00518cac(int param_1)

{
  int iVar1;
  HWND pHVar2;
  HWND pHVar3;

  iVar1 = *(int *)(param_1 + 0x290);
  if ((((iVar1 == 0) || (*(int *)(param_1 + 700) != 0)) &&
      (iVar1 = param_1, *(int *)(param_1 + 0x34) != 0)) &&
     ((*(int *)(param_1 + 700) == 0 && (iVar1 = FUN_004f7bdc(param_1,0,1,0,1), iVar1 == 0)))) {
    iVar1 = param_1;
  }
  pHVar2 = (HWND)FUN_004f76a8(iVar1);
  SetFocus(pHVar2);
  pHVar2 = (HWND)FUN_004f76a8(iVar1);
  pHVar3 = GetFocus();
  if (pHVar2 == pHVar3) {
    FUN_004efb90(iVar1,0xb029,0,0);
  }
  return;
}
