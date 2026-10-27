// rea decompile_all
// name: FUN_004191c8
// address: 0x4191c8
// body: available
// range: 0x4191c8-0x419223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004191c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 *puVar1;
  undefined4 local_10 [2];
  undefined2 local_8;
  undefined2 local_6;

  puVar1 = &local_8;
  FUN_004190d4(local_10,param_2,param_3,param_5,param_6);
  FUN_00415318(local_10[0],CONCAT22(extraout_var,60000),&local_6,puVar1);
  FUN_00415318(local_6,CONCAT22(extraout_var_00,0x3c),param_1,param_2);
  FUN_00415318(local_8,CONCAT22(extraout_var_01,1000),param_3,param_4);
  return;
}
