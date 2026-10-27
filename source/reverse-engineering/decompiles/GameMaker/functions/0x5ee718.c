// rea decompile_all
// name: FUN_005ee718
// address: 0x5ee718
// body: available
// range: 0x5ee718-0x5ee7d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ee718(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined1 local_20 [16];
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];

  if (param_4 == '\0') {
    cVar1 = FUN_005f49e4(param_1,param_3);
    if (cVar1 != '\0') {
      FUN_005ee298(DAT_0077db14,param_3,local_c,0);
      FUN_005ee298(DAT_0077db14,param_6,local_8,0);
      (**(code **)(*DAT_0077db14 + 0xb4))(DAT_0077db14,param_2,0,8,local_c,param_5);
    }
  }
  else if (param_4 == '\x01') {
    cVar1 = FUN_005f4a84(param_1,param_3);
    if (cVar1 != '\0') {
      FUN_005ee298(DAT_0077db14,param_3,local_20,1);
      local_10 = 0;
      (**(code **)(*DAT_0077db14 + 0xb4))(DAT_0077db14,param_2,0x29,0x14,local_20,param_5);
    }
  }
  else {
    FUN_005f3db8(param_1);
  }
  return;
}
