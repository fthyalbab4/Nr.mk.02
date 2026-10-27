// rea decompile_all
// name: FUN_0055ca2c
// address: 0x55ca2c
// body: available
// range: 0x55ca2c-0x55cac4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055ca2c(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int *piVar5;

  piVar1 = *(int **)(*(int *)(param_1 + 8) + 4);
  if (piVar1 != (int *)0x0) {
    uVar3 = (**(code **)**(undefined4 **)(param_1 + 8))();
    if (extraout_EDX == 0) {
      if (0x22 < uVar3) {
LAB_0055ca53:
        (**(code **)**(undefined4 **)(param_1 + 8))();
        iVar4 = FUN_00409800();
        if ((((extraout_EDX_00 == 0) && (iVar4 == 0)) && (*piVar1 == 0x4742444a)) &&
           ((char)piVar1[1] == '\x01')) {
          uVar2 = 1;
          goto LAB_0055ca81;
        }
      }
    }
    else if (0 < extraout_EDX) goto LAB_0055ca53;
  }
  uVar2 = 0;
LAB_0055ca81:
  *(undefined1 *)(param_1 + 0xc) = uVar2;
  if ((*(char *)(param_1 + 0xc) != '\0') && (*(char *)((int)piVar1 + 0x21) != '\0')) {
    uVar3 = -*(int *)((int)piVar1 + 0x1d);
    iVar4 = (**(code **)**(undefined4 **)(param_1 + 8))();
    for (piVar5 = piVar1; piVar5 < (int *)(iVar4 + (int)piVar1); piVar5 = piVar5 + 1) {
      uVar3 = uVar3 + *piVar5;
    }
    *(bool *)(param_1 + 0xc) = (uVar3 >> 8 | uVar3 << 0x18) == *(uint *)((int)piVar1 + 0x1d);
  }
  return;
}
