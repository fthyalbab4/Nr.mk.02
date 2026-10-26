// rea decompile_all
// name: FUN_00407eb8
// address: 0x407eb8
// body: available
// range: 0x407eb8-0x407f08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407ec3 to 0x4080e4 FUN_004080e4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00407eb8(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;

  if (param_2 != 0) {
    if (*(short *)(param_2 + -10) != 2) {
      FUN_004080e4();
      return;
    }
    if (*(uint *)(param_2 + -8) < 0x80000000) {
      LOCK();
      *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
      UNLOCK();
    }
    else {
      iVar2 = FUN_00408a24(*(undefined4 *)(param_2 + -4));
      FUN_0040450c(param_2,iVar2,*(int *)(param_2 + -4) << 1);
      param_2 = iVar2;
    }
  }
  LOCK();
  iVar2 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  if ((iVar2 != 0) && (0 < *(int *)(iVar2 + -8))) {
    LOCK();
    piVar1 = (int *)(iVar2 + -8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_00404338(iVar2 + -0xc);
    }
  }
  return;
}
