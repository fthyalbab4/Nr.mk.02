// rea decompile_all
// name: FUN_0050ff20
// address: 0x50ff20
// body: available
// range: 0x50ff20-0x50ffb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050ff20(int param_1,undefined4 param_2,undefined4 param_3)

{
  MCIERROR MVar1;
  undefined4 local_8;

  local_8 = param_3;
  FUN_0050f798(param_1);
  *(undefined4 *)(param_1 + 0x350) = 0;
  if (*(char *)(param_1 + 0x356) == '\0') {
    *(undefined4 *)(param_1 + 0x350) = 2;
  }
  else {
    if (*(char *)(param_1 + 0x354) != '\0') {
      *(undefined4 *)(param_1 + 0x350) = 2;
    }
    *(undefined1 *)(param_1 + 0x356) = 0;
  }
  if (*(char *)(param_1 + 0x357) != '\0') {
    if (*(char *)(param_1 + 0x355) != '\0') {
      *(uint *)(param_1 + 0x350) = *(uint *)(param_1 + 0x350) | 1;
    }
    *(undefined1 *)(param_1 + 0x357) = 0;
  }
  local_8 = FUN_004c45dc(param_1);
  MVar1 = mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x809,*(DWORD_PTR *)(param_1 + 0x350),
                          (DWORD_PTR)&local_8);
  *(MCIERROR *)(param_1 + 0x36c) = MVar1;
  return;
}
