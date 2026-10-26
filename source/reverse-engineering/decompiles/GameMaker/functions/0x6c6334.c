// rea decompile_all
// name: FUN_006c6334
// address: 0x6c6334
// body: available
// range: 0x6c6334-0x6c6437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006c6334(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;

  local_14 = -1;
  if (-1 < param_2) {
    local_10 = 0;
    iVar3 = *(int *)(param_1 + 0x8178);
    if (-1 < iVar3 + -1) {
      iVar2 = 0;
      do {
        if ((param_2 == *(int *)(param_1 + 0x470 + iVar2 * 4)) &&
           (param_3 == *(int *)(param_1 + 0x42f4 + iVar2 * 4))) {
          return -1;
        }
        if ((*(int *)(param_1 + 0x470 + iVar2 * 4) < param_2) ||
           ((param_2 == *(int *)(param_1 + 0x470 + iVar2 * 4) &&
            (*(int *)(param_1 + 0x42f4 + iVar2 * 4) < param_3)))) {
          local_10 = local_10 + 1;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(int *)(param_1 + 0x8178) = *(int *)(param_1 + 0x8178) + 1;
    iVar3 = *(int *)(param_1 + 0x8178) + -1;
    if (local_10 - iVar3 == 0 || local_10 < iVar3) {
      iVar2 = (local_10 - iVar3) + -1;
      do {
        *(undefined4 *)(param_1 + 0x470 + iVar3 * 4) = *(undefined4 *)(param_1 + 0x46c + iVar3 * 4);
        *(undefined4 *)(param_1 + 0x42f4 + iVar3 * 4) =
             *(undefined4 *)(param_1 + 0x42f0 + iVar3 * 4);
        iVar3 = iVar3 + -1;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0);
    }
    *(int *)(param_1 + 0x470 + local_10 * 4) = param_2;
    *(int *)(param_1 + 0x42f4 + local_10 * 4) = param_3;
    piVar1 = *(int **)(*(int *)(param_1 + 0x3d4) + 0x280);
    (**(code **)(*piVar1 + 0x38))(piVar1,0);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x3d4) + 0xec))();
    if (local_10 <= iVar3) {
      piVar1 = *(int **)(param_1 + 0x3d4);
      iVar3 = (**(code **)(*piVar1 + 0xec))();
      (**(code **)(*piVar1 + 0xf0))(piVar1,iVar3 + 1);
    }
    local_14 = local_10;
  }
  return local_14;
}
