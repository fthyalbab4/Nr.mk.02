// rea decompile_all
// name: FUN_00560de0
// address: 0x560de0
// body: available
// range: 0x560de0-0x560e19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00560de0(void)

{
  undefined1 uVar1;
  HMODULE pHVar2;
  code *pcVar3;
  HMODULE pHVar4;

  pHVar2 = GetModuleHandleW(L"kernel32.dll");
  pcVar3 = (code *)FUN_0040deb0();
  if (pcVar3 == (code *)0x0) {
    pHVar4 = (HMODULE)FUN_0040deb0();
    uVar1 = pHVar4 < pHVar2;
  }
  else {
    uVar1 = (*pcVar3)();
  }
  return uVar1;
}
