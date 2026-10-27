// rea decompile_all
// name: FUN_005519f0
// address: 0x5519f0
// body: available
// range: 0x5519f0-0x551a5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005519f0(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = param_1[0x69];
  if (param_1[5] != 0xcf) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x14;
    *(int *)(iVar2 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  if (((param_1[0x15] != 0) && (param_1[0x1a] != 0)) && (param_1[0x22] != 0)) {
    param_1[0x73] = *(int *)(iVar1 + 0x18);
    (**(code **)(param_1[0x73] + 0xc))();
    *(undefined4 *)(iVar1 + 8) = 0;
    return;
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x2e;
  (**(code **)*param_1)();
  return;
}
