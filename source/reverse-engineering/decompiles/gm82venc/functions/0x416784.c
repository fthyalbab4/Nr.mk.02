// rea decompile_all
// name: FUN_00416784
// address: 0x416784
// body: available
// range: 0x416784-0x416802 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00416784(undefined4 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  float10 local_14;
  undefined4 local_8;

  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  uVar1 = FUN_00418fbc(param_1,&local_14);
  if ((char)uVar1 == '\0') {
    FUN_00416694();
    uVar1 = FUN_00409c3c(DAT_0068cd94);
    uVar1 = FUN_00416734(DAT_0068cd94,uVar1);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_00409c3c(DAT_0068cd98,uVar1,puVar2,&stack0xfffffffc);
      uVar1 = FUN_00416734(DAT_0068cd98,uVar1);
      if ((char)uVar1 != '\0') {
        *param_2 = 0;
      }
    }
    else {
      *param_2 = 1;
    }
  }
  else {
    *param_2 = local_14 != (float10)0.0;
  }
  return uVar1;
}
