// rea decompile_all
// name: FUN_004082dc
// address: 0x4082dc
// body: available
// range: 0x4082dc-0x40839a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408395 to 0x405944 FUN_00405944 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004082dc(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int *local_10;

  if (param_2 == (int *)0x0) {
    return param_1;
  }
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    if (param_2 != (int *)0x0) {
      if (*(short *)((int)param_2 + -10) != 2) {
        piVar2 = (int *)FUN_004080e4();
        return piVar2;
      }
      if ((uint)param_2[-2] < 0x80000000) {
        LOCK();
        param_2[-2] = param_2[-2] + 1;
        UNLOCK();
      }
      else {
        piVar2 = (int *)FUN_00408a24(param_2[-1]);
        FUN_0040450c(param_2,piVar2,param_2[-1] << 1);
        param_2 = piVar2;
      }
    }
    LOCK();
    iVar1 = *param_1;
    *param_1 = (int)param_2;
    UNLOCK();
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + -8))) {
      LOCK();
      piVar2 = (int *)(iVar1 + -8);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        param_1 = (int *)FUN_00404338(iVar1 + -0xc);
      }
    }
    return param_1;
  }
  if (param_2 == piVar2) {
    if (*(short *)((int)piVar2 + -10) != 2) {
      local_10 = (int *)0x408375;
      piVar2 = (int *)FUN_00407058(param_1,0);
    }
    uVar3 = piVar2[-1];
    if ((uVar3 & 0x60000000) != 0) goto LAB_00408395;
    local_10 = (int *)0x40838d;
    FUN_00408244(param_1);
    param_2 = (int *)*param_1;
    local_10 = (int *)0x0;
    uVar4 = uVar3;
  }
  else {
    if (*(short *)((int)piVar2 + -10) != 2) {
      local_10 = (int *)0x408305;
      piVar2 = (int *)FUN_00407058();
    }
    local_10 = (int *)0x0;
    if (*(short *)((int)param_2 + -10) != 2) {
      local_10 = param_2;
      thunk_FUN_00407660(param_2);
      FUN_00407058(&local_10);
      param_2 = local_10;
    }
    uVar4 = piVar2[-1];
    if ((param_2[-1] + uVar4 & 0xc0000000) != 0) {
LAB_00408395:
      piVar2 = (int *)FUN_00405944();
      return piVar2;
    }
    FUN_00408244(param_1);
    uVar3 = param_2[-1];
  }
  FUN_0040450c(param_2,*param_1 + uVar4 * 2,uVar3 << 1);
  if (local_10 != (int *)0x0) {
    FUN_00406e5c();
  }
  return local_10;
}
