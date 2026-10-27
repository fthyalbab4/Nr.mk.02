// rea decompile_all
// name: FUN_0047a4b0
// address: 0x47a4b0
// body: available
// range: 0x47a4b0-0x47a4f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0047a4b0(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;

  if (*(byte *)(*(int *)(param_4 + -4) + 0x2e6) < 2) {
    piVar2 = param_2;
    uVar1 = FUN_004c45dc(*(undefined4 *)(param_4 + -4),param_2,param_3,param_2);
    FUN_0040f0dc(uVar1,0x140,param_1,piVar2);
    uVar1 = CONCAT31((int3)((uint)*param_2 >> 8),*param_1 < *param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
