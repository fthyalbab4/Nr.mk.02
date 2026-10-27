// rea decompile_all
// name: FUN_00503220
// address: 0x503220
// body: available
// range: 0x503220-0x503267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00503220(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;

  if (param_2 != (char)param_1[199]) {
    *(char *)(param_1 + 199) = param_2;
    if ((char)param_1[199] == '\x01') {
      iVar1 = (**(code **)(*(int *)param_1[0xc0] + 0x24))();
      iVar2 = FUN_0047ce88(param_1);
      if (iVar2 < iVar1 + 1) {
        FUN_0050371c(param_1);
      }
    }
    (**(code **)(*param_1 + 0x90))();
  }
  return;
}
