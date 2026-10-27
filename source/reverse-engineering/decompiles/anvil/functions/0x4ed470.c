// rea decompile_all
// name: FUN_004ed470
// address: 0x4ed470
// body: available
// range: 0x4ed470-0x4ed4d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004ed470(int param_1,int *param_2)

{
  HWND pHVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  pHVar1 = GetCapture();
  if (pHVar1 == (HWND)0x0) {
    pHVar1 = (HWND)*param_2;
    iVar2 = *(int *)(param_1 + 0x44);
    if ((iVar2 == 0) || (pHVar1 != *(HWND *)(iVar2 + 0x37c))) {
      iVar2 = FUN_004b7b58(pHVar1);
      while ((iVar2 == 0 && (pHVar1 = GetParent(pHVar1), pHVar1 != (HWND)0x0))) {
        iVar2 = FUN_004b7b58(pHVar1);
      }
    }
    if (iVar2 != 0) {
      uVar3 = FUN_00406268(iVar2,param_2);
    }
  }
  return uVar3;
}
