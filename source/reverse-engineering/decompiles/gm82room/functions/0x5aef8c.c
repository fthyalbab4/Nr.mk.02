// rea decompile_all
// name: FUN_005aef8c
// address: 0x5aef8c
// body: available
// range: 0x5aef8c-0x5aef9a inclusive
// range: 0x5aefb3-0x5aefff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005aef8c(int *param_1)

{
  switch(param_1[10]) {
  case 0:
    FUN_005af000(param_1,0);
    return;
  case 1:
    FUN_005af000(param_1,1);
    return;
  case 2:
    FUN_005af000(param_1,3);
    return;
  case 3:
    FUN_005af000(param_1,3);
    return;
  case 4:
    FUN_005af000(param_1,4);
    return;
  case 5:
    FUN_005af000(param_1,5);
    return;
  default:
    *(undefined4 *)(*param_1 + 0x14) = 9;
    (**(code **)*param_1)();
    return;
  }
}
