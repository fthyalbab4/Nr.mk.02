// rea decompile_all
// name: FUN_0055c3ec
// address: 0x55c3ec
// body: available
// range: 0x55c3ec-0x55c4b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055c3ec(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;

  FUN_0055c10c(param_1,0xda);
  FUN_0055c12c(param_1,*(int *)(param_1 + 0xf0) * 2 + 6);
  FUN_0055c0dc(param_1,*(undefined4 *)(param_1 + 0xf0));
  piVar5 = (int *)(param_1 + 0xf4);
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0xf0); iVar4 = iVar4 + 1) {
    puVar1 = (undefined4 *)*piVar5;
    FUN_0055c0dc(param_1,*puVar1);
    iVar2 = puVar1[5];
    iVar3 = puVar1[6];
    if (*(int *)(param_1 + 0xe0) != 0) {
      if (*(int *)(param_1 + 0x138) == 0) {
        iVar3 = 0;
        if ((*(int *)(param_1 + 0x140) != 0) && (*(int *)(param_1 + 0xb0) == 0)) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 0;
      }
    }
    FUN_0055c0dc(param_1,iVar3 + iVar2 * 0x10);
    piVar5 = piVar5 + 1;
  }
  FUN_0055c0dc(param_1,*(undefined4 *)(param_1 + 0x138));
  FUN_0055c0dc(param_1,*(undefined4 *)(param_1 + 0x13c));
  FUN_0055c0dc(param_1,*(int *)(param_1 + 0x140) * 0x10 + *(int *)(param_1 + 0x144));
  return;
}
