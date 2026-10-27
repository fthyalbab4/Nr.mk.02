// rea decompile_all
// name: FUN_006c78e0
// address: 0x6c78e0
// body: available
// range: 0x6c78e0-0x6c7988 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c78e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  if ((*(int *)(DAT_0077f40c + 8) != 0) && (*(int *)(param_1 + 0x817c) != 0)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x394) + 0xec))();
    if (iVar1 < 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x817c) + 8);
    }
    iVar4 = *(int *)(DAT_0077f40c + 8) + -1;
    if (-1 < iVar4) {
      do {
        uVar2 = FUN_005a5250(*(undefined4 *)(param_1 + 0x817c),iVar1,0,0);
        uVar3 = FUN_005a502c(DAT_0077f40c,iVar4);
        FUN_007106d8(uVar2,uVar3);
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
    FUN_006c6e20(param_1);
    (**(code **)(**(int **)(param_1 + 0x394) + 0xf0))(*(int **)(param_1 + 0x394),iVar1);
    FUN_0062cd2c(*(undefined4 *)(param_1 + 0x46c));
    *(undefined1 *)(param_1 + 0x468) = 1;
  }
  return;
}
