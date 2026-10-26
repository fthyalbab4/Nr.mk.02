// rea decompile_all
// name: FUN_004bdf98
// address: 0x4bdf98
// body: available
// range: 0x4bdf98-0x4bdff7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bdf98(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;

  cVar1 = (**(code **)(*param_1 + 0x60))();
  if ((cVar1 == '\0') || (param_1[0xd] == 0)) {
    iVar2 = FUN_004bde74(param_1,*(int *)(param_2 + 8) + 0x4c);
    if (iVar2 != 0) {
      *(int *)(*(int *)(param_2 + 8) + 0x14) = iVar2;
      uVar3 = FUN_004c45dc(iVar2);
      *(undefined4 *)(*(int *)(param_2 + 8) + 8) = uVar3;
    }
  }
  else {
    FUN_004bdf10();
  }
  return;
}
