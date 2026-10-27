// rea decompile_all
// name: FUN_0052e808
// address: 0x52e808
// body: available
// range: 0x52e808-0x52e873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e808(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  iVar1 = FUN_00524d94(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c));
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      iVar2 = FUN_0052c584(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c),iVar4);
      if (*(int *)(iVar2 + 0x20) != 0) {
        iVar2 = FUN_0052c584(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c),iVar4);
        FUN_00524320(*(undefined4 *)(iVar2 + 0x20));
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar3 = FUN_00530654(*(undefined4 *)(param_1 + 4));
  FUN_0052456c(uVar3,param_1 + 0x10,*(undefined4 *)(param_1 + 0x310));
  iVar1 = FUN_00530654(*(undefined4 *)(param_1 + 4));
  *(undefined1 *)(iVar1 + 0x10) = 1;
  return;
}
