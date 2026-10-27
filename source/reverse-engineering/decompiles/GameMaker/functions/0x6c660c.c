// rea decompile_all
// name: FUN_006c660c
// address: 0x6c660c
// body: available
// range: 0x6c660c-0x6c6694 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c660c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = (**(code **)(**(int **)(param_1 + 0x3d4) + 0xec))();
  if ((-1 < iVar2) && (*(int *)(param_1 + 0x817c) != 0)) {
    if ((0 < *(int *)(*(int *)(param_1 + 0x817c) + 8)) &&
       (iVar2 = FUN_004d437c(L"Are you sure you want to remove the event with all its actions?",3,3,
                             0,0xffffffff,0xffffffff,0), iVar2 != 6)) {
      return;
    }
    uVar3 = (**(code **)(**(int **)(param_1 + 0x3d4) + 0xec))();
    cVar1 = FUN_006c6438(param_1,uVar3);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x3d4) + 0x90))();
      FUN_006c6e20(param_1);
      FUN_0062cd2c(*(undefined4 *)(param_1 + 0x46c));
      *(undefined1 *)(param_1 + 0x468) = 1;
    }
  }
  return;
}
