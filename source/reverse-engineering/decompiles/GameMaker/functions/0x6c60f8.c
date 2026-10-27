// rea decompile_all
// name: FUN_006c60f8
// address: 0x6c60f8
// body: available
// range: 0x6c60f8-0x6c61f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c60f8(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  *(undefined4 *)(param_1 + 0x8178) = 0;
  *(undefined4 *)(param_1 + 0x8180) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8184) = 0;
  *(undefined4 *)(param_1 + 0x817c) = 0;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x3d4) + 0x280) + 0x44))();
  if (*(int *)(param_1 + 0x45c) != 0) {
    iVar5 = 0;
    do {
      if (iVar5 == 4) {
        iVar3 = FUN_0062ca94();
        iVar3 = iVar3 + -1;
      }
      else {
        iVar3 = 1000;
      }
      if (-1 < iVar3) {
        iVar3 = iVar3 + 1;
        iVar6 = 0;
        do {
          cVar2 = FUN_00704d3c(*(undefined4 *)(param_1 + 0x45c),iVar5,iVar6);
          if (cVar2 != '\0') {
            *(int *)(param_1 + 0x8178) = *(int *)(param_1 + 0x8178) + 1;
            *(int *)(param_1 + 0x46c + *(int *)(param_1 + 0x8178) * 4) = iVar5;
            *(int *)(param_1 + 0x42f0 + *(int *)(param_1 + 0x8178) * 4) = iVar6;
            piVar1 = *(int **)(*(int *)(param_1 + 0x3d4) + 0x280);
            (**(code **)(*piVar1 + 0x38))(piVar1,0);
          }
          iVar6 = iVar6 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xc);
    if (0 < *(int *)(param_1 + 0x8178)) {
      (**(code **)(**(int **)(param_1 + 0x3d4) + 0xf0))(*(int **)(param_1 + 0x3d4),0);
      *(undefined4 *)(param_1 + 0x8180) = *(undefined4 *)(param_1 + 0x470);
      *(undefined4 *)(param_1 + 0x8184) = *(undefined4 *)(param_1 + 0x42f4);
      uVar4 = FUN_00704d74(*(undefined4 *)(param_1 + 0x45c),*(undefined4 *)(param_1 + 0x8180),
                           *(undefined4 *)(param_1 + 0x42f4));
      *(undefined4 *)(param_1 + 0x817c) = uVar4;
    }
  }
  return;
}
