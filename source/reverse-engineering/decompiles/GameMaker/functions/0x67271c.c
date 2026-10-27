// rea decompile_all
// name: FUN_0067271c
// address: 0x67271c
// body: available
// range: 0x67271c-0x6727b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067271c(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;

  cVar5 = (char)param_2;
  if (cVar5 != *(char *)(param_1 + 0x14)) {
    *(char *)(param_1 + 0x14) = cVar5;
    cVar1 = FUN_0067240c(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_00672334(param_1);
      if (cVar1 != '\0') {
        iVar2 = FUN_0067236c(param_1);
        iVar2 = *(int *)(*(int *)(iVar2 + 8) + 8);
        if (-1 < iVar2 + -1) {
          iVar6 = 0;
          do {
            uVar3 = FUN_0067236c(param_1);
            iVar4 = FUN_00672cc0(uVar3,iVar6);
            if (*(int *)(iVar4 + 0x44) != 0) {
              uVar3 = FUN_0067236c(param_1);
              iVar4 = FUN_00672cc0(uVar3,iVar6);
              FUN_00679318(*(undefined4 *)(iVar4 + 0x44),
                           CONCAT31((int3)((uint)param_2 >> 8),(byte)(cVar5 - 3U) < 2) ^ 1);
            }
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x68))();
      (**(code **)(**(int **)(param_1 + 0xc) + 0x90))();
    }
  }
  return;
}
