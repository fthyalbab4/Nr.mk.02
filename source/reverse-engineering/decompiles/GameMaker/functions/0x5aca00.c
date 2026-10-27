// rea decompile_all
// name: FUN_005aca00
// address: 0x5aca00
// body: available
// range: 0x5aca00-0x5acab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005aca00(int param_1,undefined4 param_2,undefined4 param_3)

{
  MCIERROR MVar1;
  undefined4 local_c;

  local_c = param_3;
  FUN_005ac1e4(param_1);
  *(undefined4 *)(param_1 + 0x350) = 0;
  if (*(char *)(param_1 + 0x357) == '\0') {
    *(undefined4 *)(param_1 + 0x350) = 1;
  }
  else if (*(char *)(param_1 + 0x355) != '\0') {
    *(undefined4 *)(param_1 + 0x350) = 1;
  }
  if ((*(char *)(param_1 + 0x356) != '\0') && (*(char *)(param_1 + 0x354) != '\0')) {
    *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 2;
  }
  local_c = FUN_004f76a8(param_1);
  MVar1 = mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x855,*(DWORD_PTR *)(param_1 + 0x350),
                          (DWORD_PTR)&local_c);
  *(MCIERROR *)(param_1 + 0x36c) = MVar1;
  if (MVar1 == 0) {
    if (*(char *)(param_1 + 0x357) != '\0') {
      *(undefined1 *)(param_1 + 0x357) = 0;
    }
    if (*(char *)(param_1 + 0x356) != '\0') {
      *(undefined1 *)(param_1 + 0x356) = 0;
    }
  }
  else {
    FUN_005ac6a4(param_1);
  }
  return;
}
