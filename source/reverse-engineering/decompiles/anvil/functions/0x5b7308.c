// rea decompile_all
// name: FUN_005b7308
// address: 0x5b7308
// body: available
// range: 0x5b7308-0x5b74dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_005b7308(int param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double local_14;
  undefined4 local_8;

  local_8 = 0;
  local_14 = -1.0;
  if (param_1 == -3) {
    iVar5 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
        if (*(char *)(iVar3 + 0x108) == '\0') {
          iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
          dVar1 = *(double *)(iVar3 + 0x50) - param_5;
          iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
          dVar2 = *(double *)(iVar3 + 0x58) - param_4;
          if (local_14 < dVar1 * dVar1 + dVar2 * dVar2) {
            iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
            dVar1 = *(double *)(iVar3 + 0x50) - param_5;
            iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
            dVar2 = *(double *)(iVar3 + 0x58) - param_4;
            local_14 = dVar1 * dVar1 + dVar2 * dVar2;
            local_8 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if ((param_1 < 100000) &&
          (iVar5 = FUN_0060aa64(*(undefined4 *)PTR_DAT_0068939c,param_1), -1 < iVar5 + -1)) {
    iVar4 = 0;
    do {
      iVar3 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_1,iVar4);
      if (*(char *)(iVar3 + 0x108) == '\0') {
        iVar3 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_1,iVar4);
        dVar1 = *(double *)(iVar3 + 0x50) - param_5;
        iVar3 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_1,iVar4);
        dVar2 = *(double *)(iVar3 + 0x58) - param_4;
        if (local_14 < dVar1 * dVar1 + dVar2 * dVar2) {
          iVar3 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_1,iVar4);
          dVar1 = *(double *)(iVar3 + 0x50) - param_5;
          iVar3 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_1,iVar4);
          dVar2 = *(double *)(iVar3 + 0x58) - param_4;
          local_14 = dVar1 * dVar1 + dVar2 * dVar2;
          local_8 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_1,iVar4);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return local_8;
}
