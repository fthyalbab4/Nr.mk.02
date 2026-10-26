// rea decompile_all
// name: FUN_004534f0
// address: 0x4534f0
// body: available
// range: 0x4534f0-0x453553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004534f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  char local_18 [4];
  int local_14;
  char local_d;
  undefined4 local_c;

  local_c = param_3;
  cVar1 = FUN_00452f24(param_1,param_2,local_18);
  if (cVar1 == '\0') {
    local_14 = 0;
  }
  else {
    local_d = local_18[0];
    if (((local_18[0] == '\x04') || (local_18[0] == '\0')) && (local_14 <= param_4)) {
      FUN_004535c8(param_1,param_2,local_c,&local_d,local_14);
    }
    else {
      FUN_00452238(param_2);
    }
  }
  return local_14;
}
