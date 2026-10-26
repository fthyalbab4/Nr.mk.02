// rea decompile_all
// name: FUN_006f8e10
// address: 0x6f8e10
// body: available
// range: 0x6f8e10-0x6f8f0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f8e10(int param_1,undefined4 param_2,undefined4 *param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 uStack_8;

  local_c = *param_3;
  uStack_8 = param_3[1];
  piVar1 = *(int **)(param_1 + 0x3d0);
  uVar2 = FUN_00483b48(piVar1,&local_c,1);
  (**(code **)(*piVar1 + 0xf0))(piVar1,uVar2);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x3d0) + 0xec))();
  if (-1 < iVar3) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x3d0) + 0xec))();
    uVar2 = FUN_005ade9c(*(undefined4 *)(param_1 + 0x420),uVar2);
    *(undefined4 *)(param_1 + 0x434) = uVar2;
  }
  FUN_006f8f10(param_1);
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0x90))();
  iVar3 = (**(code **)(**(int **)(param_1 + 0x3d0) + 0xec))();
  FUN_004dbd34(*(undefined4 *)(param_1 + 1000),-1 < iVar3);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x3d0) + 0xec))();
  FUN_004dbd34(*(undefined4 *)(param_1 + 0x3ec),-1 < iVar3);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x3d0) + 0xec))();
  FUN_004dbd34(*(undefined4 *)(param_1 + 0x3f4),-1 < iVar3);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x3d0) + 0xec))();
  FUN_004dbd34(*(undefined4 *)(param_1 + 0x3f8),-1 < iVar3);
  *param_4 = 0;
  return;
}
