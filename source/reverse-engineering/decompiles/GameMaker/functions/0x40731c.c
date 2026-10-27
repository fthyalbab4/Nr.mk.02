// rea decompile_all
// name: FUN_0040731c
// address: 0x40731c
// body: available
// range: 0x40731c-0x407407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407341 to 0x407254 FUN_00407254 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4073f7 to 0x406eb0 FUN_00406eb0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4073fe to 0x407254 FUN_00407254 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x407403 to 0x405944 FUN_00405944 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040731c(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int local_18;
  int local_14;
  int *piStack_10;

  if (param_2 == 0) {
    FUN_00406eb0(param_1,param_3);
    return;
  }
  if (param_3 == 0) {
    if (param_2 != 0) {
      if (*(short *)(param_2 + -10) != 1) {
        FUN_0040810c(param_1,param_2,_DAT_007838d0);
        return;
      }
      if (*(uint *)(param_2 + -8) < 0x80000000) {
        LOCK();
        *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
        UNLOCK();
      }
      else {
        iVar2 = FUN_00406f48(*(undefined4 *)(param_2 + -4),*(undefined2 *)(param_2 + -0xc));
        FUN_0040450c(param_2,iVar2,*(undefined4 *)(param_2 + -4));
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
  if (param_2 == *param_1) {
    FUN_00407254(param_1,param_3);
    return;
  }
  if (param_3 != *param_1) {
    FUN_00406eb0();
    FUN_00407254(param_1,param_3);
    return;
  }
  local_14 = 0;
  local_18 = 0;
  piStack_10 = param_1;
  if (*(short *)(param_3 + -10) != 1) {
    local_18 = param_3;
    FUN_00407660(param_3);
    uVar3 = 0;
    if (*(short *)(param_2 + -10) == 1) {
      uVar3 = *(undefined2 *)(param_2 + -0xc);
    }
    FUN_00407030(&local_18,uVar3);
    param_3 = local_18;
  }
  if (*(short *)(param_2 + -10) != 1) {
    local_14 = param_2;
    FUN_00407660(param_2);
    FUN_00407088(&local_14,*(undefined2 *)(param_3 + -0xc));
    param_2 = local_14;
  }
  iVar2 = *(int *)(param_2 + -4) + *(int *)(param_3 + -4);
  if (!SCARRY4(*(int *)(param_2 + -4),*(int *)(param_3 + -4))) {
    iVar2 = FUN_00406f48(iVar2,*(undefined2 *)(param_3 + -0xc));
    FUN_0040450c(param_2,iVar2,*(undefined4 *)(param_2 + -4));
    FUN_0040450c(param_3,iVar2 + *(int *)(param_2 + -4),*(undefined4 *)(param_3 + -4));
    if (local_18 != 0 || local_14 != 0) {
      FUN_00406e80(&local_18,2);
    }
    piVar1 = piStack_10;
    if (iVar2 != 0) {
      *(int *)(iVar2 + -8) = *(int *)(iVar2 + -8) + -1;
    }
    piStack_10 = (int *)0x4073f1;
    FUN_00406eb0(piVar1,iVar2);
    return;
  }
  FUN_00405944(iVar2);
  return;
}
