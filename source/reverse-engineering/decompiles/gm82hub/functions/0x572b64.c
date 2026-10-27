// rea decompile_all
// name: FUN_00572b64
// address: 0x572b64
// body: available
// range: 0x572b64-0x572d32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00572b64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_11;

  local_11 = 1;
  if (param_1 == -3) {
    iVar2 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        iVar1 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar3);
        if (*(char *)(iVar1 + 0x108) == '\0') {
          local_11 = FUN_00572900(iVar1,param_2,param_3,param_4);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if (param_1 < 0) {
    local_11 = 0;
  }
  else if (param_1 < 100000) {
    iVar2 = FUN_0060aa64(*(undefined4 *)PTR_DAT_0068939c,param_1);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        iVar1 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_1,iVar3);
        if (*(char *)(iVar1 + 0x108) == '\0') {
          local_11 = FUN_00572900(iVar1,param_2,param_3,param_4);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar2 = 0;
    if ((DAT_00686abc < *(int *)(*(int *)PTR_DAT_0068939c + 0x68)) &&
       (iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,DAT_00686abc),
       *(int *)(iVar3 + 4) == param_1)) {
      iVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,DAT_00686abc);
      iVar3 = DAT_00686abc;
    }
    else if ((DAT_00686ac0 < *(int *)(*(int *)PTR_DAT_0068939c + 0x68)) &&
            (iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,DAT_00686ac0),
            *(int *)(iVar3 + 4) == param_1)) {
      iVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,DAT_00686ac0);
      iVar3 = DAT_00686abc;
    }
    else {
      DAT_00686ac0 = DAT_00686abc;
      iVar1 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68) + -1;
      iVar3 = DAT_00686abc;
      if (-1 < iVar1) {
        do {
          iVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar1);
          iVar3 = iVar1;
          if (*(int *)(iVar2 + 4) == param_1) break;
          iVar2 = 0;
          iVar1 = iVar1 + -1;
          iVar3 = DAT_00686abc;
        } while (iVar1 != -1);
      }
    }
    DAT_00686abc = iVar3;
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x108) == '\0')) {
      local_11 = FUN_00572900(iVar2,param_2,param_3,param_4);
    }
  }
  return local_11;
}
