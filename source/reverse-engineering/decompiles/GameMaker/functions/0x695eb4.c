// rea decompile_all
// name: FUN_00695eb4
// address: 0x695eb4
// body: available
// range: 0x695eb4-0x695f2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00695eb4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  *(undefined1 *)(param_1 + 0x3c0) = 1;
  piVar1 = (int *)FUN_00576014(*(undefined4 *)(param_1 + 0x38c));
  uVar4 = 0x695ed0;
  (**(code **)(*piVar1 + 0x44))();
  iVar3 = *(int *)PTR_DAT_00781d24;
  if (-1 < iVar3 + -1) {
    iVar2 = 0;
    do {
      FUN_00576af4(*(undefined4 *)(param_1 + 0x38c),
                   *(undefined4 *)(*(int *)PTR_DAT_00781664 + iVar2 * 4),
                   *(undefined4 *)(*(int *)PTR_DAT_00781ae4 + iVar2 * 4),uVar4,1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_005716cc(*(undefined4 *)(param_1 + 0x38c),0);
  *(undefined1 *)(param_1 + 0x3c1) = 0;
  *(undefined1 *)(param_1 + 0x3c2) = 0;
  *(undefined1 *)(param_1 + 0x3c0) = 0;
  return;
}
