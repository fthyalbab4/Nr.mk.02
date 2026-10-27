// rea decompile_all
// name: FUN_004d2660
// address: 0x4d2660
// body: available
// range: 0x4d2660-0x4d26c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d2660(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  FUN_00409be0(param_1 + 0x1c,&DAT_004ccb1c,1,*(undefined4 *)(*(int *)(param_1 + 8) + 8));
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_004d2754(param_1,iVar3);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3 * 8) = *(undefined4 *)(iVar1 + 0x18);
      FUN_004d2754(param_1,iVar3);
      uVar2 = FUN_004d22b0();
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4 + iVar3 * 8) = uVar2;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  return;
}
