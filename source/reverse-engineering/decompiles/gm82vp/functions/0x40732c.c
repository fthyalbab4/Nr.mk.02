// rea decompile_all
// name: FUN_0040732c
// address: 0x40732c
// body: available
// range: 0x40732c-0x407384 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40733d to 0x4083e8 FUN_004083e8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040732c(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;

  if (param_2 != 0) {
    if (*(short *)(param_2 + -10) != 1) {
      FUN_004083e8(param_1,param_2,_DAT_0068a8d0);
      return;
    }
    if (*(uint *)(param_2 + -8) < 0x80000000) {
      LOCK();
      *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
      UNLOCK();
    }
    else {
      iVar2 = FUN_00407388(*(undefined4 *)(param_2 + -4),*(undefined2 *)(param_2 + -0xc));
      FUN_00404514(param_2,iVar2,*(undefined4 *)(param_2 + -4));
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
      FUN_00404340(iVar2 + -0xc);
    }
  }
  return;
}
