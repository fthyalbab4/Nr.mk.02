// rea decompile_all
// name: FUN_00407688
// address: 0x407688
// body: available
// range: 0x407688-0x4076dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00407688(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  iVar3 = *param_1;
  if (iVar3 != 0) {
    if (*(short *)(iVar3 + -10) != 1) {
      FUN_00407030();
      iVar3 = *param_1;
    }
    if (*(int *)(iVar3 + -8) != 1) {
      iVar2 = FUN_00406f48(*(undefined4 *)(iVar3 + -4),*(undefined2 *)(iVar3 + -0xc));
      iVar3 = *param_1;
      *param_1 = iVar2;
      FUN_0040450c(iVar3,iVar2,*(undefined4 *)(iVar3 + -4));
      if (0 < *(int *)(iVar3 + -8)) {
        LOCK();
        piVar1 = (int *)(iVar3 + -8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          FUN_00404338(iVar3 + -0xc);
        }
      }
      iVar3 = *param_1;
    }
  }
  return iVar3;
}
