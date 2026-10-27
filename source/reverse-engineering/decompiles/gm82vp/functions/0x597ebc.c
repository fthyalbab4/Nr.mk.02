// rea decompile_all
// name: FUN_00597ebc
// address: 0x597ebc
// body: available
// range: 0x597ebc-0x597f40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00597ebc(int param_1)

{
  char cVar1;
  int iVar2;
  HWND hWnd;
  BOOL BVar3;

  cVar1 = '\0';
  iVar2 = FUN_004df914(param_1,1);
  if (iVar2 != 0) {
    if ((param_1 == *(int *)(iVar2 + 0x290)) &&
       (((iVar2 == *(int *)(*(int *)PTR_DAT_00689620 + 0x68) ||
         (cVar1 = FUN_004061f8(iVar2,DAT_0067ca2c), cVar1 != '\0')) ||
        (cVar1 = FUN_004061f8(iVar2,&PTR_LAB_004dc0c4), cVar1 != '\0')))) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    return cVar1;
  }
  hWnd = GetFocus();
  while( true ) {
    BVar3 = IsWindow(hWnd);
    if (BVar3 == 0) {
      return cVar1;
    }
    if (cVar1 != '\0') break;
    if (hWnd == *(HWND *)(param_1 + 600)) {
      cVar1 = '\x01';
    }
    else {
      hWnd = GetParent(hWnd);
    }
  }
  return cVar1;
}
