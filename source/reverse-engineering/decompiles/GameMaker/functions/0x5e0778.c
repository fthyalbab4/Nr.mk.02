// rea decompile_all
// name: FUN_005e0778
// address: 0x5e0778
// body: available
// range: 0x5e0778-0x5e078d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e0778(undefined2 param_1,int *param_2,uint param_3)

{
  uint extraout_ECX;
  int extraout_EDX;
  int iVar1;

  iVar1 = *param_2;
  if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= param_3)) {
    param_1 = thunk_FUN_00404478();
    param_3 = extraout_ECX;
    iVar1 = extraout_EDX;
  }
  *(undefined2 *)(iVar1 + param_3) = param_1;
  return;
}
