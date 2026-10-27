// rea decompile_all
// name: FUN_004d0a68
// address: 0x4d0a68
// body: available
// range: 0x4d0a68-0x4d0a9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004d0a68(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  if (((param_2 & 0x80000000) != 0) && (param_3 != (undefined1 *)0x0)) {
    FUN_004d09b4(param_1,*param_3,param_3,param_2 & 0x7fffffff);
    param_2 = (**(code **)PTR_DAT_00688aec)();
  }
  return param_2;
}
