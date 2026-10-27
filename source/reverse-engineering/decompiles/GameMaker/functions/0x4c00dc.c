// rea decompile_all
// name: FUN_004c00dc
// address: 0x4c00dc
// body: available
// range: 0x4c00dc-0x4c0142 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c00dc(int *param_1,uint param_2)

{
  undefined1 uVar1;

  *(bool *)((int)param_1 + 0x1b2) = (param_2 & 3) != 0;
  (**(code **)(*param_1 + 0x74))(param_1,(param_2 & 4) != 0);
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    FUN_004ee5c0(param_1,(param_2 & 8) == 0);
  }
  if ((*(char *)((int)param_1 + 0x1b2) == '\0') && ((param_2 & 0x10) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x6e) = uVar1;
  *(bool *)((int)param_1 + 0x1c5) = (param_2 & 0x20) != 0;
  *(bool *)((int)param_1 + 0x1b9) = (param_2 & 0x80) != 0;
  return;
}
