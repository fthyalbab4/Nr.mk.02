// rea decompile_all
// name: FUN_0057b630
// address: 0x57b630
// body: available
// range: 0x57b630-0x57b69a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057b630(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = *(int *)((int)param_1 + 0x196);
  if (param_1[4] != 0xcf) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x12;
    *(int *)(iVar2 + 0x18) = param_1[4];
    (**(code **)*param_1)();
  }
  if (((param_1[0x14] != 0) && (param_1[0x19] != 0)) && (param_1[0x21] != 0)) {
    *(undefined4 *)((int)param_1 + 0x1be) = *(undefined4 *)(iVar1 + 0x18);
    (**(code **)(*(int *)((int)param_1 + 0x1be) + 0xc))();
    *(undefined4 *)(iVar1 + 8) = 0;
    return;
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x2d;
  (**(code **)*param_1)();
  return;
}
