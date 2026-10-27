// rea decompile_all
// name: FUN_0058d17c
// address: 0x58d17c
// body: available
// range: 0x58d17c-0x58d1cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0058d17c(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;

  uVar2 = 0;
  cVar1 = FUN_0058d584(param_1);
  if (cVar1 != '\0') {
    if (((param_2 < 0) || (*(int *)(DAT_00686b30 + 0x30 + param_1 * 0x58) <= param_2)) ||
       (*(char *)(*(int *)(DAT_00686b30 + 0x2c + param_1 * 0x58) + param_2 * 0x38) == '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
