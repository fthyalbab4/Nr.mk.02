// rea decompile_all
// name: FUN_0058c6d0
// address: 0x58c6d0
// body: available
// range: 0x58c6d0-0x58c76d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058c6d0(int param_1,int param_2,int param_3,byte param_4,int param_5,undefined2 *param_6)

{
  undefined2 *unaff_EDI;
  byte local_5;

  for (; -1 < param_3; param_3 = param_3 + -1) {
    unaff_EDI = *(undefined2 **)(param_2 + param_3 * 4);
  }
  local_5 = 0x80;
  if ((*(byte *)(param_1 + 0x140) & 4) == 0) {
    if (param_4 == 0xff) {
      FUN_0040450c(unaff_EDI,param_6,param_5 * 2);
    }
    else {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        if ((local_5 & param_4) != 0) {
          *param_6 = *unaff_EDI;
          unaff_EDI = unaff_EDI + 1;
        }
        local_5 = local_5 >> 1 | local_5 << 7;
        param_6 = param_6 + 1;
      }
    }
  }
  else {
    for (; param_5 != 0; param_5 = param_5 + -1) {
      if ((local_5 & param_4) != 0) {
        *param_6 = CONCAT11((char)*unaff_EDI,(char)((ushort)*unaff_EDI >> 8));
        unaff_EDI = unaff_EDI + 1;
      }
      local_5 = local_5 >> 1 | local_5 << 7;
      param_6 = param_6 + 1;
    }
  }
  return;
}
