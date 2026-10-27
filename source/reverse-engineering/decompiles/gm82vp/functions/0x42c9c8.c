// rea decompile_all
// name: FUN_0042c9c8
// address: 0x42c9c8
// body: available
// range: 0x42c9c8-0x42ca07 inclusive
// range: 0x42ca1c-0x42cada inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042c9c8(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  code *local_10;

  local_10 = (code *)param_2[1];
  if (((uint)local_10 & 0xff000000) == 0xff000000) {
    puVar1 = (undefined1 *)FUN_0042ba48(*(undefined4 *)*param_2);
    switch(*puVar1) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
    }
  }
  else {
    if (((uint)local_10 & 0xff000000) == 0xfe000000) {
      local_10 = *(code **)(*param_1 + (int)(short)local_10);
    }
    if (param_2[4] == -0x80000000) {
      (*local_10)(param_1);
    }
    else {
      (*local_10)(param_1,param_2[4]);
    }
    FUN_0042ba48(*(undefined4 *)*param_2);
  }
  return;
}
