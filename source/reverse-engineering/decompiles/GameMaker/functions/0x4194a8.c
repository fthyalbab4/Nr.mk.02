// rea decompile_all
// name: FUN_004194a8
// address: 0x4194a8
// body: available
// range: 0x4194a8-0x4194fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004194a8(undefined4 param_1,float *param_2)

{
  undefined4 uVar1;
  float10 local_14;

  uVar1 = FUN_00407f44(param_1);
  uVar1 = FUN_004192e4(uVar1,&local_14,0);
  if (((char)uVar1 != '\0') && ((local_14 < _DAT_00419500 || (_DAT_0041950c < local_14)))) {
    uVar1 = 0;
  }
  if ((char)uVar1 != '\0') {
    *param_2 = (float)local_14;
  }
  return uVar1;
}
