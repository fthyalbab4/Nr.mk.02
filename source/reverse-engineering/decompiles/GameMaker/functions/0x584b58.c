// rea decompile_all
// name: FUN_00584b58
// address: 0x584b58
// body: available
// range: 0x584b58-0x584be4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00584b58(int *param_1)

{
  int iVar1;

  if (*(int *)((int)param_1 + 0x192) == 0) {
    iVar1 = FUN_005846b0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (*(int *)(*(int *)((int)param_1 + 0x1aa) + 0x58) + 0xd0 == *(int *)((int)param_1 + 0x192)) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x61;
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(*(int *)((int)param_1 + 0x1aa) + 0x58);
    (**(code **)(*param_1 + 4))(param_1,3);
    *(undefined4 *)((int)param_1 + 0x192) = 0;
  }
  else {
    iVar1 = (**(code **)(param_1[5] + 0x14))
                      (param_1,*(undefined4 *)(*(int *)((int)param_1 + 0x1aa) + 0x58));
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(uint *)(*(int *)((int)param_1 + 0x1aa) + 0x58) =
       *(int *)(*(int *)((int)param_1 + 0x1aa) + 0x58) + 1U & 7;
  return 1;
}
