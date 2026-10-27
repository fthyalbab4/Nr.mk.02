// rea decompile_all
// name: FUN_004b43a8
// address: 0x4b43a8
// body: available
// range: 0x4b43a8-0x4b43d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004b43a8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_74 [25];
  byte local_5b;

  FUN_004b4058(param_1,auStack_74);
  local_5b = local_5b & 3;
  if (local_5b == 0) {
    uVar1 = 0;
  }
  else if (local_5b == 1) {
    uVar1 = 2;
  }
  else if (local_5b == 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
