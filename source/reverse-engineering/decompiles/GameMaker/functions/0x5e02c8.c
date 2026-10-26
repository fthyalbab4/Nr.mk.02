// rea decompile_all
// name: FUN_005e02c8
// address: 0x5e02c8
// body: available
// range: 0x5e02c8-0x5e0312 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005e02c8(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  if (param_1 == '\0') {
    iVar1 = FUN_00421f88(0x6faf);
  }
  else {
    iVar1 = DAT_0077d804;
    if (DAT_0077d804 == 0) {
      uVar2 = FUN_00421f88(0x6faf);
      iVar3 = FUN_005e0340(&DAT_0077d804,uVar2,0);
      iVar1 = DAT_0077d804;
      if (iVar3 != 0) {
        FUN_00405a7c(uVar2);
        iVar1 = DAT_0077d804;
      }
    }
  }
  return iVar1;
}
