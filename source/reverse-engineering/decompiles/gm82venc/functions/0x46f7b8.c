// rea decompile_all
// name: FUN_0046f7b8
// address: 0x46f7b8
// body: available
// range: 0x46f7b8-0x46f8d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046f7b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_0068f16c == '\0') {
    DAT_0068f168 = LoadLibraryW(L"msimg32.dll");
    if (DAT_0068f168 != (HMODULE)0x0) {
      DAT_0068f170 = GetProcAddress(DAT_0068f168,"GradientFill");
    }
    DAT_0068f16c = '\x01';
  }
  if (DAT_0068f170 != (FARPROC)0x0) {
    FUN_0045b0f4(param_2);
    FUN_0045b0f4(param_3);
    FUN_0045d4ec(param_1);
    (*DAT_0068f170)();
  }
  return;
}
