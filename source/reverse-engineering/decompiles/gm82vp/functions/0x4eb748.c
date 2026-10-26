// rea decompile_all
// name: FUN_004eb748
// address: 0x4eb748
// body: available
// range: 0x4eb748-0x4eb7a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb748(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;

  if (*(char *)(param_1 + 0xac) == '\0') {
    if (*(HWND *)(param_1 + 0x170) != (HWND)0x0) {
      SendMessageW(*(HWND *)(param_1 + 0x170),0xb020,0,(LPARAM)&param_4);
    }
  }
  else {
    FUN_00438ea4(*(undefined4 *)(param_1 + 0xb0));
    puVar1 = (undefined4 *)FUN_00404324(8);
    *puVar1 = param_4;
    puVar1[1] = param_5;
    FUN_00438d04(*(undefined4 *)(param_1 + 0xb0),puVar1);
  }
  return;
}
