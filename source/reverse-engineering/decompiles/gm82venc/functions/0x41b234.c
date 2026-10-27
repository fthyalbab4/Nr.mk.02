// rea decompile_all
// name: FUN_0041b234
// address: 0x41b234
// body: available
// range: 0x41b234-0x41b281 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041b234(DWORD param_1,undefined4 param_2)

{
  DWORD DVar1;
  WCHAR local_204 [256];

  DVar1 = FormatMessageW(0x3200,(LPCVOID)0x0,param_1,0,local_204,0x100,(va_list *)0x0);
  for (; (0 < (int)DVar1 &&
         (((ushort)local_204[DVar1 - 1] < 0x21 || (local_204[DVar1 - 1] == L'.'))));
      DVar1 = DVar1 - 1) {
  }
  FUN_004082d0(param_2,local_204,DVar1);
  return;
}
