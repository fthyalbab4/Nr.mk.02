// rea decompile_all
// name: FUN_004c8294
// address: 0x4c8294
// body: available
// range: 0x4c8294-0x4c83a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c8294(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;

  if (*(char *)(*(int *)(param_1 + 0x14) + 0x10) == '\x01') {
    iVar2 = FUN_004c786c(param_1);
    if (*(int *)(*(int *)(param_4 + -8) + 4) <= iVar2) {
      iVar2 = FUN_004c786c(param_1);
      if (iVar2 - *(int *)(*(int *)(param_4 + -0xc) + 0xc) <= *(int *)(*(int *)(param_4 + -8) + 4))
      {
        **(undefined4 **)(param_4 + -0x10) = 0x12;
        *(int *)(param_4 + -0x14) = param_1;
        goto LAB_004c8357;
      }
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x10) == '\x02') {
    iVar2 = FUN_004c786c(param_1);
    if (**(int **)(param_4 + -8) <= iVar2) {
      iVar2 = FUN_004c786c(param_1);
      if (iVar2 - *(int *)(*(int *)(param_4 + -0xc) + 0xc) <= **(int **)(param_4 + -8)) {
        **(undefined4 **)(param_4 + -0x10) = 0x12;
        *(int *)(param_4 + -0x14) = param_1;
        goto LAB_004c8357;
      }
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    cVar1 = (**(code **)(**(int **)(param_4 + -0xc) + 0x40))
                      (*(int **)(param_4 + -0xc),param_1,*(undefined4 *)(param_4 + -8),
                       *(undefined4 *)(param_4 + -0x10));
    if (cVar1 != '\0') {
      *(int *)(param_4 + -0x14) = param_1;
    }
  }
LAB_004c8357:
  if (*(int *)(param_4 + -0x14) == 0) {
    iVar2 = FUN_004c7944(param_1);
    if (iVar2 != 0) {
      FUN_004c7944(param_1);
      FUN_004c8294();
    }
  }
  if (*(int *)(param_4 + -0x14) == 0) {
    iVar2 = FUN_004c796c(param_1);
    if (iVar2 != 0) {
      FUN_004c796c(param_1);
      FUN_004c8294();
    }
  }
  return;
}
