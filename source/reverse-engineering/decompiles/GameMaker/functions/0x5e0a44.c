// rea decompile_all
// name: FUN_005e0a44
// address: 0x5e0a44
// body: available
// range: 0x5e0a44-0x5e0a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005e0a5b) */

int FUN_005e0a44(uint param_1,uint param_2)

{
  int iVar1;
  int extraout_EDX;
  int extraout_EDX_00;

  if (param_2 < param_1) {
    iVar1 = param_2 + (-param_1 - 1);
    if (CARRY4(param_2,-param_1 - 1)) {
      FUN_00405944();
      iVar1 = extraout_EDX_00;
    }
    return iVar1;
  }
  iVar1 = param_2 - param_1;
  if (param_2 < param_1) {
    FUN_00405944();
    iVar1 = extraout_EDX;
  }
  return iVar1;
}
