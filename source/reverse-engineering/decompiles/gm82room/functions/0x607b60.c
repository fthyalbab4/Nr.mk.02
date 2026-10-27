// rea decompile_all
// name: FUN_00607b60
// address: 0x607b60
// body: available
// range: 0x607b60-0x607bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00607b60(void)

{
  int iVar1;

  FUN_00628b78();
  FUN_0060756c();
  if ((*(int *)PTR_DAT_00688c4c == -1) && (*PTR_DAT_006891d0 != '\0')) {
    FUN_0061ff5c();
    FUN_0061ff3c();
  }
  iVar1 = *(int *)PTR_DAT_00688c4c;
  if (iVar1 < -199) {
    if (iVar1 == -200) {
      FUN_006070f0();
      FUN_00607034();
      goto LAB_00607bda;
    }
    if (iVar1 == -400) goto LAB_00607bb2;
    if (iVar1 == -300) {
      FUN_0060714c();
      goto LAB_00607bda;
    }
  }
  else {
    if (iVar1 == -100) {
LAB_00607bb2:
      *PTR_PTR_0068927c = 0;
      return;
    }
    if (iVar1 == -1) goto LAB_00607bda;
  }
  FUN_0060701c(*(undefined4 *)PTR_DAT_00688c4c);
LAB_00607bda:
  FUN_00628b78();
  return;
}
