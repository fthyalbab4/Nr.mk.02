// rea decompile_all
// name: FUN_00540de4
// address: 0x540de4
// body: available
// range: 0x540de4-0x540e51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00540de4(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;

  FUN_00540b44(param_1);
  if (param_3 != 0) {
    FUN_00540cb4(param_1,param_3);
    if (-1 < param_3 + -1) {
      iVar3 = 0;
      iVar4 = param_3;
      do {
        puVar1 = (undefined1 *)(param_1[1] + iVar3 * 3);
        puVar2 = (undefined1 *)(param_2 + iVar3 * 4);
        *puVar1 = puVar2[2];
        puVar1[1] = puVar2[1];
        puVar1[2] = *puVar2;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_1[2] = param_3;
    (**(code **)(*param_1 + 0x1c))();
  }
  return;
}
