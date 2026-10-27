// rea decompile_all
// name: FUN_004e7214
// address: 0x4e7214
// body: available
// range: 0x4e7214-0x4e727d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e7214(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  if (((*(byte *)(param_1 + 7) & 0x10) == 0) && (*(char *)((int)param_1 + 0x1ea) != '\0')) {
    (**(code **)(*param_1 + 0x8c))();
    if (param_1[0xad] != 0) {
      iVar1 = FUN_004a8eb8(*(undefined4 *)(param_1[0xad] + 0x38));
      if (-1 < iVar1 + -1) {
        iVar3 = 0;
        do {
          piVar2 = (int *)FUN_004a8ec8(*(undefined4 *)(param_1[0xad] + 0x38),iVar3);
          if (*(char *)((int)piVar2 + 0x3e) != '\0') {
            (**(code **)(*piVar2 + 0x44))();
          }
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    FUN_004e7190(param_1);
  }
  return;
}
