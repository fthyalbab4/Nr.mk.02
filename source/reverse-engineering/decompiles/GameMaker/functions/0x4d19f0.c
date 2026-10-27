// rea decompile_all
// name: FUN_004d19f0
// address: 0x4d19f0
// body: available
// range: 0x4d19f0-0x4d1a49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004d19f0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;

  FUN_00407eb8(param_1 + 0x48,0);
  iVar3 = param_1 + 0x68;
  piVar2 = *(int **)(param_1 + 0x40);
  uVar1 = (**(code **)(*piVar2 + 0x38))();
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = FUN_00405d08(param_1,*(undefined4 *)(param_1 + 0x68),param_1 + 0x48,piVar2,iVar3);
    if ((uVar1 & 0x80000000) == 0) {
      FUN_00405d08(param_1);
    }
  }
  FUN_0040b140(param_1 + 0x68);
  return uVar1;
}
