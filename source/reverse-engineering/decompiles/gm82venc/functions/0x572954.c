// rea decompile_all
// name: FUN_00572954
// address: 0x572954
// body: available
// range: 0x572954-0x572b62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00572954(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_11;

  local_11 = 0;
  if (param_1 == -3) {
    iVar3 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        iVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
        if (*(char *)(iVar2 + 0x108) == '\0') {
          uVar1 = FUN_005728c8(iVar2,param_2,param_3,param_4);
          return uVar1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if (param_1 < 0) {
    local_11 = 0;
  }
  else if (param_1 < 100000) {
    iVar3 = FUN_0060aa64(*(undefined4 *)PTR_DAT_0068939c,param_1);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        iVar2 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_1,iVar4);
        if (*(char *)(iVar2 + 0x108) == '\0') {
          uVar1 = FUN_005728c8(iVar2,param_2,param_3,param_4);
          return uVar1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar3 = 0;
    if (((DAT_00686abc < *(int *)(*(int *)PTR_DAT_0068939c + 0x68)) &&
        (iVar4 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,DAT_00686abc),
        *(int *)(iVar4 + 4) == param_1)) &&
       (iVar4 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,DAT_00686abc),
       *(char *)(iVar4 + 0x108) == '\0')) {
      iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,DAT_00686abc);
      iVar4 = DAT_00686abc;
    }
    else if (((DAT_00686ac0 < *(int *)(*(int *)PTR_DAT_0068939c + 0x68)) &&
             (iVar4 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,DAT_00686ac0),
             *(int *)(iVar4 + 4) == param_1)) &&
            (iVar4 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,DAT_00686ac0),
            *(char *)(iVar4 + 0x108) == '\0')) {
      iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,DAT_00686ac0);
      iVar4 = DAT_00686abc;
    }
    else {
      DAT_00686ac0 = DAT_00686abc;
      iVar2 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68) + -1;
      iVar4 = DAT_00686abc;
      if (-1 < iVar2) {
        do {
          iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar2);
          iVar4 = iVar2;
          if (*(int *)(iVar3 + 4) == param_1) break;
          iVar3 = 0;
          iVar2 = iVar2 + -1;
          iVar4 = DAT_00686abc;
        } while (iVar2 != -1);
      }
    }
    DAT_00686abc = iVar4;
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0x108) == '\0')) {
      local_11 = FUN_005728c8(iVar3,param_2,param_3,param_4);
    }
  }
  return local_11;
}
