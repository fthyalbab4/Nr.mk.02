// rea decompile_all
// name: FUN_006c7f00
// address: 0x6c7f00
// body: available
// range: 0x6c7f00-0x6c7fe0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c7f00(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = *(undefined4 *)(param_1 + 0x3f8);
  iVar2 = FUN_004aa010(uVar1);
  FUN_004edce0(uVar1,iVar2 * 0x18 + 0x60);
  FUN_004edd14(*(int *)(param_1 + 0x394),
               (*(int *)(*(int *)(param_1 + 0x390) + 0x4c) -
               *(int *)(*(int *)(param_1 + 0x394) + 0x44)) + -7);
  FUN_004edce0(*(undefined4 *)(param_1 + 0x394),*(int *)(*(int *)(param_1 + 0x454) + 0x48) + -0x1e);
  FUN_004edd14(*(int *)(param_1 + 0x3d4),
               (*(int *)(*(int *)(param_1 + 0x390) + 0x4c) -
               *(int *)(*(int *)(param_1 + 0x3d4) + 0x44)) +
               *(int *)(*(int *)(param_1 + 0x3d0) + 0x4c) * -2 + -0x15);
  FUN_004edcac(*(undefined4 *)(param_1 + 0x3d0),
               *(int *)(*(int *)(param_1 + 0x3d4) + 0x44) +
               *(int *)(*(int *)(param_1 + 0x3d4) + 0x4c) + 7);
  FUN_004edcac(*(undefined4 *)(param_1 + 0x3e0),
               *(int *)(*(int *)(param_1 + 0x3d4) + 0x44) +
               *(int *)(*(int *)(param_1 + 0x3d4) + 0x4c) +
               *(int *)(*(int *)(param_1 + 0x3d0) + 0x4c) + 0xe);
  FUN_004edcac(*(undefined4 *)(param_1 + 0x3e4),
               *(int *)(*(int *)(param_1 + 0x3d4) + 0x44) +
               *(int *)(*(int *)(param_1 + 0x3d4) + 0x4c) +
               *(int *)(*(int *)(param_1 + 0x3d0) + 0x4c) + 0xe);
  return;
}
