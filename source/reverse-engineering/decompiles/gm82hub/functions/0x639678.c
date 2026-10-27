// rea decompile_all
// name: FUN_00639678
// address: 0x639678
// body: available
// range: 0x639678-0x639810 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00639678(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar5;

  *param_4 = 0;
  iVar2 = FUN_004048b8();
  if ((extraout_EDX == -1) && (iVar2 == -1)) {
    if ((param_1 == 0) || (*(char *)(param_1 + 0x108) != '\0')) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    *(double *)(param_4 + 2) = (double)(int)cVar1;
  }
  else {
    iVar2 = FUN_004048b8();
    if ((extraout_EDX_00 == -1) && (iVar2 == -2)) {
      if ((param_2 == 0) || (*(char *)(param_2 + 0x108) != '\0')) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      *(double *)(param_4 + 2) = (double)(int)cVar1;
    }
    else {
      param_4[2] = 0;
      param_4[3] = 0;
      iVar2 = FUN_004048b8();
      if (iVar2 == -3) {
        iVar2 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
        if (-1 < iVar2 + -1) {
          iVar5 = 0;
          do {
            iVar3 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar5);
            if (*(char *)(iVar3 + 0x108) == '\0') {
              param_4[2] = 0;
              param_4[3] = 0x3ff00000;
              return;
            }
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else if (iVar2 < 100000) {
        iVar5 = FUN_0060aa64(*(undefined4 *)PTR_DAT_0068939c,iVar2);
        if (-1 < iVar5 + -1) {
          iVar3 = 0;
          do {
            iVar4 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,iVar2,iVar3);
            if (*(char *)(iVar4 + 0x108) == '\0') {
              param_4[2] = 0;
              param_4[3] = 0x3ff00000;
              return;
            }
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      else {
        iVar5 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
        if (-1 < iVar5 + -1) {
          iVar3 = 0;
          do {
            iVar4 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar3);
            if ((*(char *)(iVar4 + 0x108) == '\0') &&
               (iVar4 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar3),
               *(int *)(iVar4 + 4) == iVar2)) {
              param_4[2] = 0;
              param_4[3] = 0x3ff00000;
              return;
            }
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
    }
  }
  return;
}
