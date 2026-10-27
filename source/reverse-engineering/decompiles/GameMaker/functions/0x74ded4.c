// rea decompile_all
// name: FUN_0074ded4
// address: 0x74ded4
// body: available
// range: 0x74ded4-0x74df22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0074ded4(int param_1)

{
  undefined4 uVar1;
  int local_10 [2];

  if (*(int *)(param_1 + 0x5c) == 0) {
    FUN_0074dcb0(param_1,2,local_10);
    *(int *)(param_1 + 0x60) = local_10[0];
    if (local_10[0] != 0) {
      uVar1 = FUN_0074e8a0(param_1,local_10[0]);
      *(undefined4 *)(param_1 + 0x60) = uVar1;
    }
    uVar1 = FUN_0074ca80(&PTR_LAB_00746720,1,param_1,*(undefined4 *)(param_1 + 0x60),0);
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x5c);
}
