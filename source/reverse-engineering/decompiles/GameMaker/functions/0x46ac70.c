// rea decompile_all
// name: FUN_0046ac70
// address: 0x46ac70
// body: available
// range: 0x46ac70-0x46acb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0046ac70(uint *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;

  uVar1 = *param_1;
  uVar3 = 0;
  while ((uVar3 < param_3 && (uVar1 < 4))) {
    if (uVar1 < 2) {
      cVar2 = '\0';
    }
    else {
      cVar2 = -1;
    }
    if (*param_2 == cVar2) {
      uVar1 = uVar1 + 1;
    }
    else if (*param_2 == '\0') {
      uVar1 = 4 - uVar1;
    }
    else {
      uVar1 = 0;
    }
    uVar3 = uVar3 + 1;
    param_2 = param_2 + 1;
  }
  *param_1 = uVar1;
  return uVar3;
}
