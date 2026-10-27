// rea decompile_all
// name: FUN_00409a48
// address: 0x409a48
// body: available
// range: 0x409a48-0x409bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00409a48(undefined4 *param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;

  piVar2 = (int *)*param_1;
  iVar4 = *param_4;
  local_10 = param_3;
  local_c = param_1;
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      FUN_00404478(4);
    }
    FUN_00409a40(local_c,param_2);
  }
  else {
    local_18 = 0;
    if (piVar2 != (int *)0x0) {
      local_18 = piVar2[-1];
      piVar2 = piVar2 + -2;
    }
    param_2 = param_2 + (uint)*(byte *)(param_2 + 1);
    local_20 = *(int *)(param_2 + 2);
    piVar1 = *(int **)(param_2 + 6);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    local_24 = iVar4 * local_20;
    if (local_24 / iVar4 != local_20) {
      FUN_00404478(CONCAT31((int3)((uint)(local_24 / iVar4) >> 8),4),local_24 % iVar4);
    }
    local_24 = local_24 + 8;
    if (local_24 < 0) {
      FUN_00404478(4);
    }
    if ((piVar2 == (int *)0x0) || (*piVar2 == 1)) {
      local_28 = piVar2;
      if ((iVar4 < local_18) && (iVar3 != 0)) {
        thunk_FUN_00408e44((int)piVar2 + iVar4 * local_20 + 8,iVar3,local_18 - iVar4);
      }
      FUN_00404350(&local_28,local_24);
      piVar2 = local_28;
    }
    else {
      *piVar2 = *piVar2 + -1;
      piVar2 = (int *)FUN_0040431c(local_24);
      local_1c = local_18;
      if (iVar4 < local_18) {
        local_1c = iVar4;
      }
      if (iVar3 == 0) {
        FUN_0040450c(*local_c,piVar2 + 2,local_1c * local_20);
      }
      else {
        FUN_00404f08(piVar2 + 2,local_1c * local_20,0);
        FUN_00409a28(piVar2 + 2,*local_c,iVar3,local_1c);
      }
    }
    *piVar2 = 1;
    piVar2[1] = iVar4;
    piVar2 = piVar2 + 2;
    FUN_00404f08((int *)(local_20 * local_18 + (int)piVar2),(iVar4 - local_18) * local_20,0);
    if (1 < local_10) {
      local_10 = local_10 + -1;
      if (-1 < iVar4 + -1) {
        local_14 = 0;
        do {
          FUN_00409a48(piVar2 + local_14,iVar3,local_10,param_4 + 1);
          local_14 = local_14 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    *local_c = piVar2;
  }
  return;
}
