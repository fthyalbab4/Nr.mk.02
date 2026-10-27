// rea decompile_all
// name: FUN_006c6438
// address: 0x6c6438
// body: available
// range: 0x6c6438-0x6c657d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006c6438(int param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  uVar2 = 0;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x8178))) {
    iVar3 = FUN_00704d74(*(undefined4 *)(param_1 + 0x45c),
                         *(undefined4 *)(param_1 + 0x470 + param_2 * 4),
                         *(undefined4 *)(param_1 + 0x42f4 + param_2 * 4));
    if (iVar3 != 0) {
      FUN_005a5090();
      iVar3 = *(int *)(param_1 + 0x8178) + -2;
      if (param_2 <= iVar3) {
        iVar5 = (iVar3 - param_2) + 1;
        iVar3 = param_2;
        do {
          *(undefined4 *)(param_1 + 0x470 + iVar3 * 4) =
               *(undefined4 *)(param_1 + 0x474 + iVar3 * 4);
          *(undefined4 *)(param_1 + 0x42f4 + iVar3 * 4) =
               *(undefined4 *)(param_1 + 0x42f8 + iVar3 * 4);
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(int *)(param_1 + 0x8178) = *(int *)(param_1 + 0x8178) + -1;
      piVar1 = *(int **)(*(int *)(param_1 + 0x3d4) + 0x280);
      (**(code **)(*piVar1 + 0x48))(piVar1,param_2);
      iVar3 = (**(code **)(**(int **)(param_1 + 0x3d4) + 0xec))();
      if (iVar3 < 0) {
        iVar3 = *(int *)(param_1 + 0x8178) + -1;
        if (param_2 < iVar3) {
          iVar3 = param_2;
        }
        (**(code **)(**(int **)(param_1 + 0x3d4) + 0xf0))(*(int **)(param_1 + 0x3d4),iVar3);
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0x3d4) + 0xec))();
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0x8180) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x8184) = 0;
        *(undefined4 *)(param_1 + 0x817c) = 0;
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x3d4) + 0xec))();
        *(undefined4 *)(param_1 + 0x8180) = *(undefined4 *)(param_1 + 0x470 + iVar3 * 4);
        iVar3 = (**(code **)(**(int **)(param_1 + 0x3d4) + 0xec))();
        uVar4 = *(undefined4 *)(param_1 + 0x42f4 + iVar3 * 4);
        *(undefined4 *)(param_1 + 0x8184) = uVar4;
        uVar4 = FUN_00704d74(*(undefined4 *)(param_1 + 0x45c),*(undefined4 *)(param_1 + 0x8180),
                             uVar4);
        *(undefined4 *)(param_1 + 0x817c) = uVar4;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}
