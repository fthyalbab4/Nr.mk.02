// rea decompile_all
// name: FUN_0058a0e8
// address: 0x58a0e8
// body: available
// range: 0x58a0e8-0x58a292 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0058a0e8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_10;

  if ((param_4 < *(int *)(param_3 + 8)) && (*(int *)PTR_DAT_00688c4c == -1)) {
    *(int *)PTR_DAT_00689478 = param_4;
    iVar5 = FUN_0060fdc0(param_3,param_4);
    if (*(char *)(iVar5 + 0x12) == '\0') {
      uVar3 = FUN_0060fdc0(param_3,param_4);
      cVar1 = FUN_005899f8(param_1,param_2,uVar3);
    }
    else {
      iVar5 = *(int *)(iVar5 + 0x48);
      if (iVar5 == -1) {
        uVar3 = FUN_0060fdc0(param_3,param_4);
        cVar1 = FUN_005899f8(param_1,param_2,uVar3);
      }
      else if (iVar5 == -2) {
        uVar3 = FUN_0060fdc0(param_3,param_4);
        cVar1 = FUN_005899f8(param_2,param_1,uVar3);
      }
      else {
        cVar1 = '\x01';
        if (((-1 < iVar5) && (iVar4 = FUN_00571ea8(), iVar5 <= iVar4)) &&
           (local_1c = FUN_0060aa64(*(undefined4 *)PTR_DAT_0068939c,iVar5), -1 < local_1c + -1)) {
          local_10 = 0;
          do {
            iVar4 = FUN_0060aa90(*(undefined4 *)PTR_DAT_0068939c,iVar5,local_10);
            if (*(char *)(iVar4 + 0x108) == '\0') {
              uVar3 = FUN_0060fdc0(param_3,param_4);
              cVar2 = FUN_005899f8(iVar4,param_2,uVar3);
              if (cVar2 == '\0') {
                cVar1 = '\0';
                break;
              }
              if (*(int *)PTR_DAT_00688c4c != -1) {
                return 10000000;
              }
            }
            local_10 = local_10 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
      }
    }
    if (cVar1 == '\0') {
      iVar5 = FUN_00589f2c(param_3,param_4 + 1);
    }
    else {
      iVar5 = FUN_0058a414(param_1,param_2,param_3,param_4 + 1);
    }
    if ((iVar5 < *(int *)(param_3 + 8)) &&
       (iVar4 = FUN_0060fdc0(param_3,iVar5), *(int *)(iVar4 + 0xc) == 3)) {
      if (cVar1 == '\0') {
        iVar5 = FUN_0058a414(param_1,param_2,param_3,iVar5 + 1);
      }
      else {
        iVar5 = FUN_00589f2c(param_3,iVar5 + 1);
      }
    }
    if (*(int *)PTR_DAT_00688c4c != -1) {
      iVar5 = 10000000;
    }
  }
  else {
    iVar5 = 10000000;
  }
  return iVar5;
}
