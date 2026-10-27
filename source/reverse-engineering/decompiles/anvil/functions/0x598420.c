// rea decompile_all
// name: FUN_00598420
// address: 0x598420
// body: available
// range: 0x598420-0x598479 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00598420(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [96];

  local_80[0] = (char)param_1[0xc6];
  if (local_80[0] == '\0') {
    FUN_005992f4(param_1,local_70);
    (**(code **)(*param_1 + 0xf0))
              (param_1,param_2,param_3,local_70,local_74,local_78,local_7c,local_80);
  }
  return local_80[0] != '\0';
}
