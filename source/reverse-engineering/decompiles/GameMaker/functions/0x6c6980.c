// rea decompile_all
// name: FUN_006c6980
// address: 0x6c6980
// body: available
// range: 0x6c6980-0x6c6a9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c6980(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_14;

  local_14 = 0;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x3d4) + 0xec))();
  iVar6 = *(int *)(param_1 + 0x8178);
  if (-1 < iVar6 + -1) {
    iVar5 = 0;
    do {
      if (*(int *)(param_1 + 0x470 + iVar5 * 4) == 4) {
        cVar2 = FUN_0062ca9c(*(undefined4 *)(param_1 + 0x42f4 + iVar5 * 4));
        if (cVar2 != '\0') goto LAB_006c69c4;
        piVar1 = *(int **)(*(int *)(param_1 + 0x3d4) + 0x280);
        (**(code **)(*piVar1 + 0x48))(piVar1,0);
        if (iVar5 <= iVar3) {
          iVar3 = iVar3 + -1;
        }
      }
      else {
LAB_006c69c4:
        *(undefined4 *)(param_1 + 0x470 + local_14 * 4) =
             *(undefined4 *)(param_1 + 0x470 + iVar5 * 4);
        *(undefined4 *)(param_1 + 0x42f4 + local_14 * 4) =
             *(undefined4 *)(param_1 + 0x42f4 + iVar5 * 4);
        local_14 = local_14 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(int *)(param_1 + 0x8178) = local_14;
  if ((0 < *(int *)(param_1 + 0x8178)) && (iVar3 < 0)) {
    iVar3 = 0;
  }
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x8180) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x8184) = 0;
    *(undefined4 *)(param_1 + 0x817c) = 0;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x3d4) + 0xf0))(*(int **)(param_1 + 0x3d4),iVar3);
    *(undefined4 *)(param_1 + 0x8180) = *(undefined4 *)(param_1 + 0x470 + iVar3 * 4);
    uVar4 = *(undefined4 *)(param_1 + 0x42f4 + iVar3 * 4);
    *(undefined4 *)(param_1 + 0x8184) = uVar4;
    uVar4 = FUN_00704d74(*(undefined4 *)(param_1 + 0x45c),*(undefined4 *)(param_1 + 0x8180),uVar4);
    *(undefined4 *)(param_1 + 0x817c) = uVar4;
  }
  FUN_006c6e20(param_1);
  (**(code **)(**(int **)(param_1 + 0x3d4) + 0x90))();
  return;
}
