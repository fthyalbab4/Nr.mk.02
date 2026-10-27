// rea decompile_all
// name: FUN_005624ac
// address: 0x5624ac
// body: available
// range: 0x5624ac-0x56254c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005624ac(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (0 < param_1) {
    DAT_00686400 = param_1;
  }
  if (0 < param_2) {
    DAT_00686404 = param_2;
  }
  if (0.0 < _DAT_00686408) {
    iVar1 = FUN_004048b8();
    iVar2 = FUN_004048b8();
    if (param_3 == '\0') {
      if ((DAT_006863f8 < iVar1) || (DAT_006863fc < iVar2)) {
        iVar3 = DAT_006863f8;
        if (DAT_006863f8 < iVar1) {
          iVar3 = iVar1;
        }
        if (iVar2 <= DAT_006863fc) {
          iVar2 = DAT_006863fc;
        }
        FUN_00562354(iVar3,iVar2);
      }
    }
    else {
      FUN_00562354(iVar1,iVar2);
    }
  }
  (**(code **)(*DAT_006863dc + 0x90))();
  return;
}
