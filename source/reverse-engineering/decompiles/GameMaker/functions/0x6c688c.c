// rea decompile_all
// name: FUN_006c688c
// address: 0x6c688c
// body: available
// range: 0x6c688c-0x6c697e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c688c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iStack_18;
  undefined4 uStack_14;

  iVar1 = (**(code **)(**(int **)(param_1 + 0x3d4) + 0xec))();
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x817c) != 0)) {
    uVar2 = FUN_005a5048(&DAT_005a4c6c,1);
    FUN_005a50c8(uVar2,*(undefined4 *)(param_1 + 0x817c));
    FUN_006c2c58(&iStack_18,&uStack_14);
    if (-1 < iStack_18) {
      iVar1 = FUN_006c6334(param_1,iStack_18,uStack_14);
      if (-1 < iVar1) {
        (**(code **)(**(int **)(param_1 + 0x3d4) + 0xf0))(*(int **)(param_1 + 0x3d4),iVar1);
        *(undefined4 *)(param_1 + 0x8180) = *(undefined4 *)(param_1 + 0x470 + iVar1 * 4);
        uVar3 = *(undefined4 *)(param_1 + 0x42f4 + iVar1 * 4);
        *(undefined4 *)(param_1 + 0x8184) = uVar3;
        uVar3 = FUN_00704d74(*(undefined4 *)(param_1 + 0x45c),*(undefined4 *)(param_1 + 0x8180),
                             uVar3);
        *(undefined4 *)(param_1 + 0x817c) = uVar3;
        FUN_005a50c8(uVar3,uVar2);
        FUN_00405a7c(uVar2);
        (**(code **)(**(int **)(param_1 + 0x3d4) + 0x90))();
        FUN_006c6e20(param_1);
        FUN_0062cd2c(*(undefined4 *)(param_1 + 0x46c));
        *(undefined1 *)(param_1 + 0x468) = 1;
      }
    }
  }
  return;
}
