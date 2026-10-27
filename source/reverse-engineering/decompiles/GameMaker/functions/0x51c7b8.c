// rea decompile_all
// name: FUN_0051c7b8
// address: 0x51c7b8
// body: available
// range: 0x51c7b8-0x51c80f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051c7b8(int param_1)

{
  HCURSOR pHVar1;
  int iVar2;
  undefined4 *puVar3;
  HINSTANCE hInstance;

  pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  *(HCURSOR *)(param_1 + 0xac) = pHVar1;
  iVar2 = -0x16;
  puVar3 = &DAT_00778dbc;
  do {
    if ((iVar2 < -0x11) || (hInstance = DAT_00785c40, -0xc < iVar2)) {
      hInstance = (HINSTANCE)0x0;
    }
    pHVar1 = LoadCursorW(hInstance,(LPCWSTR)*puVar3);
    FUN_0051c940(param_1,iVar2,pHVar1);
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  return;
}
