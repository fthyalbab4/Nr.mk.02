// rea decompile_all
// name: FUN_00625890
// address: 0x625890
// body: available
// range: 0x625890-0x625b06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00625890(char param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;

  if (*(int *)PTR_DAT_0068903c != 0) {
    piVar1 = *(int **)(*(int *)(DAT_0085b42c + 0x394) + 0x1b0);
    (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)PTR_DAT_0068903c);
  }
  if (*PTR_PTR_00688d30 != '\0') {
    FUN_004e77c4(DAT_0085b42c,1);
    piVar1 = (int *)FUN_0048435c(*(undefined4 *)(DAT_0085b42c + 0x394));
    uVar2 = (**(code **)(*piVar1 + 0x18))
                      (piVar1,0,*(int *)(*(int *)(DAT_0085b42c + 0x394) + 0x4c) + -1);
    FUN_004e77b0(DAT_0085b42c,uVar2);
  }
  if (*(int *)PTR_DAT_00688c90 < 0xff) {
    FUN_004e7788(DAT_0085b42c,1);
    FUN_004e779c(DAT_0085b42c,*PTR_DAT_00688c90);
  }
  if (*(int *)PTR_DAT_0068903c != 0) {
    FUN_00405fdc(*(undefined4 *)PTR_DAT_0068903c);
  }
  if (*PTR_DAT_00688a20 != '\0') {
    if (*(int *)PTR_DAT_00688970 != 0) {
      piVar1 = *(int **)(*(int *)(DAT_0085b42c + 0x388) + 0x1b0);
      (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)PTR_DAT_00688970);
    }
    if (*(int *)PTR_DAT_00688ba8 != 0) {
      piVar1 = *(int **)(*(int *)(DAT_0085b42c + 0x38c) + 0x1b0);
      (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)PTR_DAT_00688ba8);
    }
  }
  if (*(int *)PTR_DAT_00688970 != 0) {
    FUN_00405fdc(*(undefined4 *)PTR_DAT_00688970);
  }
  if (*(int *)PTR_DAT_00688ba8 != 0) {
    FUN_00405fdc(*(undefined4 *)PTR_DAT_00688ba8);
  }
  FUN_004bb578(*(undefined4 *)(DAT_0085b42c + 0x388),*PTR_DAT_00688a20);
  FUN_004bb578(*(undefined4 *)(DAT_0085b42c + 0x38c),*PTR_DAT_00688a20);
  FUN_00484484(*(undefined4 *)(DAT_0085b42c + 0x38c),*PTR_DAT_00689130);
  if ((param_1 == '\0') || (*PTR_DAT_00688a20 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_004bb578(*(undefined4 *)(DAT_0085b42c + 0x390),uVar2);
  FUN_004e1ed8(DAT_0085b42c,*(undefined4 *)(*(int *)(DAT_0085b42c + 0x394) + 0x48));
  FUN_004e1f0c(DAT_0085b42c,*(undefined4 *)(*(int *)(DAT_0085b42c + 0x394) + 0x4c));
  iVar3 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
  uVar4 = iVar3 - *(int *)(DAT_0085b42c + 0x48);
  iVar3 = (int)uVar4 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
  }
  FUN_004e7918(DAT_0085b42c,iVar3);
  iVar3 = FUN_004e86a0(*(undefined4 *)PTR_DAT_00689620);
  uVar4 = iVar3 - *(int *)(DAT_0085b42c + 0x4c);
  iVar3 = (int)uVar4 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar4 & 1) != 0);
  }
  FUN_004e7954(DAT_0085b42c,iVar3);
  iVar3 = FUN_004baf84(DAT_0085b42c);
  FUN_004bac64(*(undefined4 *)(DAT_0085b42c + 0x388),iVar3 + -0x20);
  iVar3 = FUN_004baf44(DAT_0085b42c);
  FUN_004bac98(*(undefined4 *)(DAT_0085b42c + 0x388),
               iVar3 + *(int *)(*(int *)(DAT_0085b42c + 0x388) + 0x40) * -2);
  iVar3 = FUN_004baf84(DAT_0085b42c);
  FUN_004bac64(*(undefined4 *)(DAT_0085b42c + 0x38c),iVar3 + -0x20);
  iVar3 = FUN_004baf84(DAT_0085b42c);
  FUN_004bac64(*(undefined4 *)(DAT_0085b42c + 0x390),iVar3 + -0x20);
  FUN_006257f4(0,L"Loading");
  FUN_004e6d64(DAT_0085b42c);
  return;
}
