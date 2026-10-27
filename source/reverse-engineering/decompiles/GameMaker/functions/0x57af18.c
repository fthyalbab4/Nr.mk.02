// rea decompile_all
// name: FUN_0057af18
// address: 0x57af18
// body: available
// range: 0x57af18-0x57af9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0057af18(int *param_1)

{
  int iVar1;

  if (((param_1[4] == 0xcd) || (param_1[4] == 0xce)) && (param_1[0xf] != 0)) {
    (**(code **)(*(int *)((int)param_1 + 0x196) + 4))();
    param_1[4] = 0xd0;
  }
  else if (param_1[4] != 0xd0) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x12;
    *(int *)(iVar1 + 0x18) = param_1[4];
    (**(code **)*param_1)();
  }
  while ((param_1[0x23] <= param_1[0x25] && (*(int *)(*(int *)((int)param_1 + 0x1a6) + 0x14) == 0)))
  {
    iVar1 = (*(code *)**(undefined4 **)((int)param_1 + 0x1a6))();
    if (iVar1 == 0) {
      return 0;
    }
  }
  param_1[4] = 0xcf;
  return 1;
}
