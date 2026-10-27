// rea decompile_all
// name: FUN_00674b10
// address: 0x674b10
// body: available
// range: 0x674b10-0x674c70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00674b10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;

  uVar5 = (uint)*(byte *)(param_1 + 100);
  if (*(char *)(param_1 + 0x40) != '\0') {
    iVar1 = FUN_00673fc4(param_1,param_2,param_3,param_3);
    if (*(char *)(iVar1 + 0x2a) == '\0') {
      uVar5 = 0;
    }
    else {
      FUN_00673fc4(param_1);
      piVar2 = (int *)FUN_00671654();
      if (*(char *)(param_1 + 0x54) == '\0') {
        uVar5 = (**(code **)(*piVar2 + 0x40))(piVar2,param_1);
        uVar5 = uVar5 ^ 1;
        if (((char)uVar5 != '\0') &&
           (iVar1 = FUN_0067236c(param_1), 0 < *(int *)(*(int *)(iVar1 + 8) + 8))) {
          uVar5 = FUN_00672434(param_1);
          uVar5 = uVar5 ^ 1;
        }
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      else {
        iVar1 = FUN_0043c914(param_1);
        iVar1 = iVar1 + -1;
        if (-1 < iVar1) {
          do {
            iVar3 = FUN_0043c914(param_1);
            if (0 < iVar3) {
              iVar3 = FUN_0043c914(param_1);
              uVar4 = FUN_00673fc4(param_1);
              iVar3 = FUN_00672cc0(uVar4,iVar3 + -1);
              if (*(char *)(iVar3 + 0x54) != '\0') break;
              iVar3 = FUN_0043c914(param_1);
              uVar4 = FUN_00673fc4(param_1);
              uVar4 = FUN_00672cc0(uVar4,iVar3 + -1);
              uVar5 = (**(code **)(*piVar2 + 0x40))(piVar2,uVar4);
              uVar5 = uVar5 ^ 1;
              if ((char)uVar5 != '\0') break;
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != -1);
        }
        if (((char)uVar5 != '\0') &&
           (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + 8), -1 < iVar1 + -1)) {
          do {
            iVar3 = FUN_0043c914(param_1);
            if (iVar3 < *(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + 8) + -1) {
              iVar3 = FUN_0043c914(param_1);
              uVar4 = FUN_00673fc4(param_1);
              iVar3 = FUN_00672cc0(uVar4,iVar3 + 1);
              if (*(char *)(iVar3 + 0x54) != '\0') break;
              iVar3 = FUN_0043c914(param_1);
              uVar4 = FUN_00673fc4(param_1);
              uVar4 = FUN_00672cc0(uVar4,iVar3 + 1);
              uVar5 = (**(code **)(*piVar2 + 0x40))(piVar2,uVar4);
              uVar5 = uVar5 ^ 1;
              if ((char)uVar5 != '\0') break;
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      *(char *)(param_1 + 100) = (char)uVar5;
    }
  }
  return uVar5;
}
