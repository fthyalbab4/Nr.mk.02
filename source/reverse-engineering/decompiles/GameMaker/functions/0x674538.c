// rea decompile_all
// name: FUN_00674538
// address: 0x674538
// body: available
// range: 0x674538-0x674597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00674538(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  if (param_2 != *(char *)(param_1 + 0x6c)) {
    *(char *)(param_1 + 0x6c) = param_2;
    if (param_2 != '\0') {
      iVar1 = FUN_00673fc4(param_1);
      iVar1 = *(int *)(*(int *)(iVar1 + 8) + 8);
      if (-1 < iVar1 + -1) {
        iVar4 = 0;
        do {
          uVar2 = FUN_00673fc4(param_1);
          iVar3 = FUN_0043cd28(uVar2,iVar4);
          if ((*(char *)(iVar3 + 0x6c) != '\0') && (param_1 != iVar3)) {
            FUN_00674538(iVar3,0);
          }
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x90))();
    }
  }
  return;
}
