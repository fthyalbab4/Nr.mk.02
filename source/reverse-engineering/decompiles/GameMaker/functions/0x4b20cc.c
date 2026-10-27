// rea decompile_all
// name: FUN_004b20cc
// address: 0x4b20cc
// body: available
// range: 0x4b20cc-0x4b212f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b20cc(int param_1,int param_2)

{
  int iVar1;

  if ((*(byte *)(param_1 + 0x2e1) & 1) == 0) {
    FUN_004b24b4(param_1,param_2);
  }
  else {
    iVar1 = FUN_004b053c(param_1);
    if ((param_2 != iVar1) && ((param_2 == 0 || (*(char *)(param_2 + 0x24) == '\0')))) {
      FUN_004b0584(param_1,param_2);
    }
    iVar1 = FUN_0043b0b0(*(undefined4 *)(param_1 + 0x2e4),param_2);
    if (iVar1 == -1) {
      FUN_004b2464(param_1,param_2,0);
      return;
    }
    FUN_004b243c(param_1,iVar1);
  }
  return;
}
