// rea decompile_all
// name: FUN_00407254
// address: 0x407254
// body: available
// range: 0x407254-0x40731b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407316 to 0x405944 FUN_00405944 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00407254(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int *local_10;

  if (param_2 == (int *)0x0) {
    return param_1;
  }
  piVar2 = (int *)*param_1;
  if (piVar2 == (int *)0x0) {
    if (param_2 != (int *)0x0) {
      if (*(short *)((int)param_2 + -10) != 1) {
        piVar2 = (int *)FUN_0040810c(param_1,param_2,_DAT_007838d0);
        return piVar2;
      }
      if ((uint)param_2[-2] < 0x80000000) {
        LOCK();
        param_2[-2] = param_2[-2] + 1;
        UNLOCK();
      }
      else {
        piVar2 = (int *)FUN_00406f48(param_2[-1],(short)param_2[-3]);
        FUN_0040450c(param_2,piVar2,param_2[-1]);
        param_2 = piVar2;
      }
    }
    LOCK();
    iVar3 = *param_1;
    *param_1 = (int)param_2;
    UNLOCK();
    if ((iVar3 != 0) && (0 < *(int *)(iVar3 + -8))) {
      LOCK();
      piVar2 = (int *)(iVar3 + -8);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        param_1 = (int *)FUN_00404338(iVar3 + -0xc);
      }
    }
    return param_1;
  }
  piVar1 = param_1;
  if (param_2 == piVar2) {
    if (*(short *)((int)piVar2 + -10) != 1) {
      local_10 = (int *)0x4072f8;
      piVar2 = (int *)FUN_00407088(param_1,0);
    }
    iVar3 = piVar2[-1];
    iVar5 = iVar3 << 1;
    if (iVar3 < 0 != iVar5 < 0) goto LAB_00407316;
    local_10 = (int *)0x40730e;
    FUN_004078e4(param_1,iVar5,(short)piVar2[-3]);
    param_2 = (int *)*param_1;
    local_10 = (int *)0x0;
    iVar6 = iVar3;
  }
  else {
    if (*(short *)((int)piVar2 + -10) != 1) {
      uVar4 = 0;
      if (*(short *)((int)param_2 + -10) == 1) {
        uVar4 = (undefined2)param_2[-3];
      }
      local_10 = (int *)0x40728c;
      piVar1 = (int *)FUN_00407088(param_1,uVar4);
      piVar2 = piVar1;
    }
    local_10 = (int *)0x0;
    if (*(short *)((int)param_2 + -10) != 1) {
      local_10 = param_2;
      FUN_00407660(param_2);
      piVar1 = (int *)FUN_00407088(&local_10,(short)piVar2[-3]);
      param_2 = local_10;
    }
    iVar6 = piVar2[-1];
    iVar5 = param_2[-1] + iVar6;
    if (SCARRY4(param_2[-1],iVar6)) {
LAB_00407316:
      piVar2 = (int *)FUN_00405944(piVar1,iVar5);
      return piVar2;
    }
    FUN_004078e4(param_1,iVar5,(short)piVar2[-3]);
    iVar3 = param_2[-1];
  }
  FUN_0040450c(param_2,*param_1 + iVar6,iVar3);
  if (local_10 != (int *)0x0) {
    FUN_00406e5c();
  }
  return local_10;
}
