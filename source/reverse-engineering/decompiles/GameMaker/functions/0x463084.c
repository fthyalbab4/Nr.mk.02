// rea decompile_all
// name: FUN_00463084
// address: 0x463084
// body: available
// range: 0x463084-0x4630e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00463084(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  if ((*(char *)(param_1 + 0x32) == '\0') || (*(char *)(param_1 + 0x31) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_004613e8();
      DeleteObject(*(HGDIOBJ *)(iVar1 + 0xc));
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    FUN_00462ef0(param_1);
    FUN_00462f00(param_1);
    iVar1 = *(int *)(param_1 + 0x28);
    uVar2 = FUN_00462e2c(param_1);
    uVar2 = FUN_00461f38(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),uVar2);
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    *(undefined1 *)(param_1 + 0x32) = 1;
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  return;
}
