// rea decompile_all
// name: FUN_005aee34
// address: 0x5aee34
// body: available
// range: 0x5aee34-0x5aee88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005aee34(int param_1)

{
  FUN_005aedac(param_1,param_1 + 0x54,&DAT_006872c8,&DAT_006872d9);
  FUN_005aedac(param_1,param_1 + 100,&DAT_00687302,&DAT_00687313);
  FUN_005aedac(param_1,param_1 + 0x58,&DAT_006872e5,&DAT_006872f6);
  FUN_005aedac(param_1,param_1 + 0x68,&DAT_006873b5,&DAT_006873c6);
  return;
}
