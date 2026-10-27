// rea decompile_all
// name: FUN_0074f028
// address: 0x74f028
// body: available
// range: 0x74f028-0x74f093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074f028(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  FUN_00407eb8(param_3,0);
  FUN_00749bd8(param_3,PTR_PTR_007815a8,param_2,1);
  FUN_00749bd8(param_3,PTR_PTR_00782050,param_2,2);
  FUN_00749bd8(param_3,PTR_PTR_00781f50,param_2,4);
  FUN_00749bd8(param_3,PTR_PTR_00781c88,param_2,8);
  FUN_00749bd8(param_3,PTR_PTR_0078272c,param_2,0x10);
  return;
}
