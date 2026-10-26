// rea decompile_all
// name: FUN_0041ab50
// address: 0x41ab50
// body: available
// range: 0x41ab50-0x41aba9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041ab50(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;

  if (DAT_00785d50 == 0x12) {
    if (param_1 < 100) {
      uVar1 = FUN_00419a00();
      uVar2 = (int)*(uint *)(param_4 + -4) >> 0x1f;
      param_1 = param_1 + ((int)((uVar1 & 0xffff) + ((*(uint *)(param_4 + -4) ^ uVar2) - uVar2)) /
                          100) * 100;
    }
    if (0 < *(int *)(param_4 + -4)) {
      *(int *)(param_4 + -4) = -*(int *)(param_4 + -4);
    }
  }
  else {
    *(int *)(param_4 + -4) = *(int *)(param_4 + -4) + -1;
  }
  return *(int *)(param_4 + -4) + param_1;
}
