// rea decompile_all
// name: FUN_00408678
// address: 0x408678
// body: available
// range: 0x408678-0x408759 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40869d to 0x4085b8 FUN_004085b8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408749 to 0x408194 FUN_00408194 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408750 to 0x4085b8 FUN_004085b8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408755 to 0x405ea4 FUN_00405ea4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00408678(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int local_18;
  int local_14;
  int *piStack_10;

  if (param_2 == 0) {
    FUN_00408194(param_1,param_3);
    return;
  }
  if (param_3 == 0) {
    if (param_2 != 0) {
      if (*(short *)(param_2 + -10) != 2) {
        FUN_004083c0();
        return;
      }
      if (*(uint *)(param_2 + -8) < 0x80000000) {
        LOCK();
        *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
        UNLOCK();
      }
      else {
        iVar2 = FUN_00408d00(*(undefined4 *)(param_2 + -4));
        FUN_00404514(param_2,iVar2,*(int *)(param_2 + -4) << 1);
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
  if (param_2 == *param_1) {
    FUN_004085b8(param_1,param_3);
    return;
  }
  if (param_3 != *param_1) {
    FUN_00408194();
    FUN_004085b8(param_1,param_3);
    return;
  }
  local_14 = 0;
  local_18 = 0;
  piStack_10 = param_1;
  if (*(short *)(param_3 + -10) != 2) {
    local_18 = param_3;
    thunk_FUN_00407ad0(param_3);
    FUN_00407498(&local_18);
    param_3 = local_18;
  }
  if (*(short *)(param_2 + -10) != 2) {
    local_14 = param_2;
    thunk_FUN_00407ad0(param_2);
    FUN_00407498(&local_14);
    param_2 = local_14;
  }
  if ((*(int *)(param_2 + -4) + *(int *)(param_3 + -4) & 0xc0000000U) == 0) {
    iVar2 = FUN_00408d00();
    FUN_00404514(param_2,iVar2,*(int *)(param_2 + -4) << 1);
    FUN_00404514(param_3,*(int *)(param_2 + -4) * 2 + iVar2,*(int *)(param_3 + -4) << 1);
    if (local_18 != 0 || local_14 != 0) {
      FUN_004072fc(&local_18,2);
    }
    piVar1 = piStack_10;
    if (iVar2 != 0) {
      *(int *)(iVar2 + -8) = *(int *)(iVar2 + -8) + -1;
    }
    piStack_10 = (int *)0x408743;
    FUN_00408194(piVar1,iVar2);
    return;
  }
  FUN_00405ea4();
  return;
}
