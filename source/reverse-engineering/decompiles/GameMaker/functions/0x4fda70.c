// rea decompile_all
// name: FUN_004fda70
// address: 0x4fda70
// body: available
// range: 0x4fda70-0x4fdb47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fda70(undefined4 param_1,char param_2)

{
  int iVar1;

  if ((PTR_DAT_00782974[0xc] != '\0') && (param_2 != '\x03')) {
    if (param_2 == '\0') {
      FUN_004fda54(param_1,0);
    }
    else {
      FUN_004fda54(param_1,1);
      if (DAT_00778c50 != 0) {
        iVar1 = (*DAT_007882ac)();
        if (iVar1 != 0) {
          (*DAT_007882b4)();
          if (param_2 == '\x01') {
            (*DAT_007882bc)();
          }
          else if (param_2 == '\x02') {
            (*DAT_007882bc)();
          }
          else {
            (*DAT_007882bc)();
            (*DAT_007882b4)();
          }
          (*DAT_007882b8)();
          (*DAT_007882b0)();
        }
      }
    }
  }
  return;
}
