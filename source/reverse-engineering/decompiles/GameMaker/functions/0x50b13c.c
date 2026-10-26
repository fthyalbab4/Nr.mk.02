// rea decompile_all
// name: FUN_0050b13c
// address: 0x50b13c
// body: available
// range: 0x50b13c-0x50b196 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050b13c(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  if (param_2 != param_1[0x20]) {
    iVar2 = *(int *)(param_1[0x14] + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_00405cbc(*(undefined4 *)(*(int *)(param_1[0x14] + 4) + iVar3 * 4),
                                     &LAB_0050a318);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x6c))(piVar1,param_2);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    param_1[0x20] = param_2;
    (**(code **)(*param_1 + 0x34))();
  }
  return;
}
