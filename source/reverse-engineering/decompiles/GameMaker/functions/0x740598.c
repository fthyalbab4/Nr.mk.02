// rea decompile_all
// name: FUN_00740598
// address: 0x740598
// body: available
// range: 0x740598-0x7405d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00740598(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined4 local_10;

  uVar1 = 0;
  puVar2 = &DAT_00806448;
  do {
    local_10 = (uint)uVar1;
    GetStringTypeExW(0x400,1,(LPCWSTR)&local_10,1,(LPWORD)((int)&local_10 + 2));
    *puVar2 = local_10._2_2_;
    uVar1 = (WCHAR)local_10 + L'\x01';
    puVar2 = puVar2 + 1;
  } while (uVar1 != 0);
  return;
}
