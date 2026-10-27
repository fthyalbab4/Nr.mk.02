// rea decompile_all
// name: FUN_005ac7b4
// address: 0x5ac7b4
// body: available
// range: 0x5ac7b4-0x5ac88a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ac7b4(int param_1)

{
  MCIERROR MVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  FUN_005ac1e4(param_1);
  *(undefined4 *)(param_1 + 0x350) = 0;
  if (*(char *)(param_1 + 0x357) == '\0') {
    *(undefined4 *)(param_1 + 0x350) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x355) != '\0') {
      *(undefined4 *)(param_1 + 0x350) = 1;
    }
    *(undefined1 *)(param_1 + 0x357) = 0;
  }
  if (*(char *)(param_1 + 0x356) != '\0') {
    if (*(char *)(param_1 + 0x354) != '\0') {
      *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 2;
    }
    *(undefined1 *)(param_1 + 0x356) = 0;
  }
  if (*(char *)(param_1 + 0x358) != '\0') {
    *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 4;
    local_c = *(undefined4 *)(param_1 + 0x364);
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  if (*(char *)(param_1 + 0x359) != '\0') {
    *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 8;
    local_8 = *(undefined4 *)(param_1 + 0x360);
    *(undefined1 *)(param_1 + 0x359) = 0;
  }
  local_10 = FUN_004f76a8(param_1);
  MVar1 = mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x80f,*(DWORD_PTR *)(param_1 + 0x350),
                          (DWORD_PTR)&local_10);
  *(MCIERROR *)(param_1 + 0x36c) = MVar1;
  return;
}
