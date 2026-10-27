// rea decompile_all
// name: FUN_0058e628
// address: 0x58e628
// body: available
// range: 0x58e628-0x58e6e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058e628(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;

  cVar2 = FUN_0058d584(param_1,param_2,param_3,param_3);
  if (cVar2 != '\0') {
    FUN_0058d818(param_1);
    FUN_0058d978(param_1);
    if (0 < *(int *)(DAT_00686b30 + 0x28 + param_1 * 0x58)) {
      FUN_0058ddfc(param_1);
    }
    if (0 < *(int *)(DAT_00686b30 + 0x30 + param_1 * 0x58)) {
      FUN_0058dfb0(param_1);
    }
    if (0 < *(int *)(DAT_00686b30 + 0x20 + param_1 * 0x58)) {
      FUN_0058e2bc(param_1);
    }
    FUN_0058e514(param_1);
    iVar1 = DAT_00686b30 + param_1 * 0x58;
    iVar4 = *(int *)(iVar1 + 0x10);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        if ((*(char *)(*(int *)(iVar1 + 0xc) + iVar3 * 0x38) != '\0') &&
           (*(int *)(*(int *)(iVar1 + 0xc) + 4 + iVar3 * 0x38) != 0)) {
          FUN_0058c6f0(param_1,iVar3,*(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x30 + iVar3 * 0x38),
                       *(undefined4 *)(*(int *)(iVar1 + 0xc) + 4 + iVar3 * 0x38));
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}
