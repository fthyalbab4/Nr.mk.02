// rea decompile_all
// name: FUN_004e889c
// address: 0x4e889c
// body: available
// range: 0x4e889c-0x4e88ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e889c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  HCURSOR pHVar4;

  puVar3 = *(undefined4 **)(param_1 + 0xa8);
  while (puVar3 != (undefined4 *)0x0) {
    iVar1 = puVar3[1];
    if ((((-0x12 < iVar1) && (iVar1 < -0xb)) || (iVar1 == -0x15)) || (0 < iVar1)) {
      DestroyCursor((HCURSOR)puVar3[2]);
    }
    puVar2 = (undefined4 *)*puVar3;
    FUN_00404340(puVar3,0xc);
    puVar3 = puVar2;
  }
  pHVar4 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  if (pHVar4 != *(HCURSOR *)(param_1 + 0xac)) {
    DestroyCursor(*(HCURSOR *)(param_1 + 0xac));
  }
  return;
}
