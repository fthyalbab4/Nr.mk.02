// rea decompile_all
// name: FUN_00444e78
// address: 0x444e78
// body: available
// range: 0x444e78-0x444eba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00444e78(undefined4 param_1,char param_2,undefined4 param_3)

{
  undefined4 local_c;

  if (param_2 != '\0') {
    local_c._2_2_ = (undefined2)((uint)param_3 >> 0x10);
    local_c = CONCAT22(local_c._2_2_,CONCAT11(param_2,param_2)) | 0xf000;
    FUN_00444438(param_1,(int)&local_c + 1,1);
    if ((local_c & 2) != 0) {
      FUN_00444d9c(param_1,param_3);
    }
  }
  return;
}
