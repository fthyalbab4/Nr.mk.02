// rea decompile_all
// name: FUN_00629394
// address: 0x629394
// body: available
// range: 0x629394-0x6293b2 inclusive
// range: 0x6293cf-0x6293ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00629394(void)

{
  undefined4 uVar1;

  uVar1 = (**(code **)PTR_DAT_00782780)();
  switch(uVar1) {
  case 0:
    return 0;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    return 2;
  case 3:
    return 3;
  case 5:
    return 5;
  case 6:
    return 6;
  }
  return uVar1;
}
