// rea decompile_all
// name: FUN_0050b0dc
// address: 0x50b0dc
// body: available
// range: 0x50b0dc-0x50b13a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050b0dc(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 in_ZF;

  FUN_00408640(param_2,param_1[0x1f]);
  if (!(bool)in_ZF) {
    iVar2 = *(int *)(param_1[0x14] + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_00405cbc(*(undefined4 *)(*(int *)(param_1[0x14] + 4) + iVar3 * 4),
                                     &LAB_0050a318);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x68))(piVar1,param_2);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00407eb8(param_1 + 0x1f,param_2);
    (**(code **)(*param_1 + 0x34))();
  }
  return;
}
