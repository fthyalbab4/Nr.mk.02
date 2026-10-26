// rea decompile_all
// name: FUN_004a1d9c
// address: 0x4a1d9c
// body: available
// range: 0x4a1d9c-0x4a1de5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a1d9c(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  undefined4 uVar1;

  if ((param_8 & 4) == 0) {
    if ((param_8 & 1) == 0) {
      uVar1 = 5;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 2;
  }
  FUN_004a1bb0(param_1,param_2,param_3,uVar1,param_4,param_5,param_6,param_7,param_8);
  return;
}
