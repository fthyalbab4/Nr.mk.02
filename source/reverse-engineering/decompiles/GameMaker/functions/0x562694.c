// rea decompile_all
// name: FUN_00562694
// address: 0x562694
// body: available
// range: 0x562694-0x562761 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00562694(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  FUN_0050752c(*(undefined4 *)(param_1 + 0x38),param_2,param_3,param_3);
  iVar7 = *(int *)(param_1 + 0x2c);
  if (-1 < iVar7 + -1) {
    iVar6 = 0;
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x30) + iVar6 * 4) + 0xc);
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x30) + iVar6 * 4) + 0x1a) != '\0') {
        cVar2 = FUN_0071b5fc();
        if (cVar2 == '\0') {
          uVar3 = FUN_0045f64c(*(undefined4 *)(*(int *)(*(int *)PTR_DAT_00781eb8 + 0x394) + 0x1b0));
          piVar4 = (int *)FUN_00462a64(piVar1);
          (**(code **)(*piVar4 + 0x3c))(piVar4,0,0,uVar3);
        }
      }
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + iVar6 * 4) + 0x28);
      if (((iVar5 != 8) && (iVar5 != 10)) && (iVar5 != 9)) {
        iVar5 = (**(code **)(*piVar1 + 0x24))();
        iVar5 = iVar5 + -1;
        piVar4 = (int *)FUN_00462a64(piVar1);
        uVar3 = (**(code **)(*piVar4 + 0x18))(piVar4,0,iVar5);
        uVar3 = FUN_00506e50(*(undefined4 *)(param_1 + 0x38),piVar1,uVar3);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + iVar6 * 4) + 0x14) = uVar3;
      }
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + iVar6 * 4) + 0x10) =
           *(undefined4 *)(param_1 + 0x38);
      FUN_00562174();
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}
