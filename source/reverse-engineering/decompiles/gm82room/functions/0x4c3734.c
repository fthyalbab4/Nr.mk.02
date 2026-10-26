// rea decompile_all
// name: FUN_004c3734
// address: 0x4c3734
// body: available
// range: 0x4c3734-0x4c37b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c3734(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  LPCWSTR pWVar2;
  UINT UVar3;

  if (PTR_DAT_00689688[0xd] != '\0') {
    cVar1 = FUN_004bbe04(param_1,param_2,param_3,param_3);
    if (cVar1 == '\0') {
      if (*(int *)(*(int *)PTR_DAT_0068917c + 0x40) != 0) {
        UVar3 = 1;
        pWVar2 = (LPCWSTR)FUN_00408220(*(undefined4 *)(*(int *)PTR_DAT_0068917c + 0x40));
        LoadKeyboardLayoutW(pWVar2,UVar3);
      }
    }
    else if (*(int *)(*(int *)PTR_DAT_0068917c + 0x38) != 0) {
      UVar3 = 1;
      pWVar2 = (LPCWSTR)FUN_00408220(*(undefined4 *)(*(int *)PTR_DAT_0068917c + 0x38));
      LoadKeyboardLayoutW(pWVar2,UVar3);
    }
  }
  FUN_00406268(param_1);
  return;
}
