// rea decompile_all
// name: FUN_0057b978
// address: 0x57b978
// body: available
// range: 0x57b978-0x57b9e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0057b978(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;

  iVar2 = *(int *)(param_1 + 0x1ae);
  iVar3 = *(int *)(iVar2 + 0xc);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x1aa) + 0x5c);
  *piVar1 = *piVar1 + (iVar3 >> 3);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  iVar3 = (**(code **)(*(int *)(param_1 + 0x1aa) + 8))();
  if (iVar3 == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)(iVar2 + 0x18);
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x13a); iVar3 = iVar3 + 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  return 1;
}
