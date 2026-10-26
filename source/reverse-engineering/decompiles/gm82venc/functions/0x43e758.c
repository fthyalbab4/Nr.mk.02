// rea decompile_all
// name: FUN_0043e758
// address: 0x43e758
// body: available
// range: 0x43e758-0x43e78d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043e758(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  FUN_0043e614(param_1);
  FUN_0043df08();
  iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      piVar1 = (int *)FUN_00438ec4(*(undefined4 *)(param_1 + 0x34),iVar3);
      (**(code **)(*piVar1 + 0xc))();
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
