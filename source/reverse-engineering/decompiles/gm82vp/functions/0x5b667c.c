// rea decompile_all
// name: FUN_005b667c
// address: 0x5b667c
// body: available
// range: 0x5b667c-0x5b6873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_005b667c(int param_1,int param_2,undefined1 param_3,char param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  if (param_2 == -3) {
    iVar5 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        if (((param_4 == '\0') ||
            (iVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4), iVar2 != param_1)) &&
           (iVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4),
           *(char *)(iVar2 + 0x108) == '\0')) {
          uVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
          cVar1 = FUN_0060e5a4(uVar3,param_3);
          if (cVar1 != '\0') {
            uVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
            return uVar3;
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (param_2 < 100000) {
    iVar5 = FUN_0060aa64(*(undefined4 *)PTR_DAT_0068939c,param_2);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        if (((param_4 == '\0') ||
            (iVar2 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_2,iVar4), iVar2 != param_1))
           && (iVar2 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_2,iVar4),
              *(char *)(iVar2 + 0x108) == '\0')) {
          uVar3 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_2,iVar4,param_5,param_6,param_7
                               ,param_8);
          cVar1 = FUN_0060e5a4(uVar3,param_3);
          if (cVar1 != '\0') {
            uVar3 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,param_2,iVar4);
            return uVar3;
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    iVar5 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        if ((((param_4 == '\0') ||
             (iVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4), iVar2 != param_1)) &&
            (iVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4),
            *(char *)(iVar2 + 0x108) == '\0')) &&
           (iVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4),
           param_2 == *(int *)(iVar2 + 4))) {
          uVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
          cVar1 = FUN_0060e5a4(uVar3,param_3);
          if (cVar1 != '\0') {
            uVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
            return uVar3;
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}
