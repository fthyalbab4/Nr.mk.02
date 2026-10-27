// rea decompile_all
// name: FUN_00527290
// address: 0x527290
// body: available
// range: 0x527290-0x5272e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00527290(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  undefined4 uVar1;
  undefined1 local_18 [4];
  float10 local_14;

  FUN_004104d0(&local_14,local_18,param_3,SUB108((float10)param_4,0),
               (short)((unkuint10)(float10)param_4 >> 0x40));
  if (local_14 == (float10)0.0) {
    local_14 = ABS(local_14);
  }
  uVar1 = FUN_005283d8(&local_14,10,0);
  FUN_005283d8(local_18,4,uVar1);
  return;
}
