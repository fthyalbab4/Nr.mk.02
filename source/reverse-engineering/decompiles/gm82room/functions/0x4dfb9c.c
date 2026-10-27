// rea decompile_all
// name: FUN_004dfb9c
// address: 0x4dfb9c
// body: available
// range: 0x4dfb9c-0x4dfc46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dfb9c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;

  if ((char)(*(int **)(param_1 + 4))[0x9d] != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xec))();
    if (cVar1 == '\0') {
      FUN_004e02dc(param_1,0);
    }
    else {
      iVar2 = FUN_004c00dc(*(undefined4 *)(param_1 + 4));
      if (-1 < iVar2 + -1) {
        iVar3 = 0;
        do {
          if (*(char *)(param_1 + 0x18) == '\0') {
            FUN_004c00a0(*(undefined4 *)(param_1 + 4),iVar3);
            FUN_004dfac0();
          }
          else {
            FUN_004c00a0(*(undefined4 *)(param_1 + 4),iVar3);
            FUN_004dfb30();
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_004e02dc(param_1,*(undefined2 *)(param_1 + 0x1a));
    }
  }
  return;
}
