// rea decompile_all
// name: FUN_00510d6c
// address: 0x510d6c
// body: available
// range: 0x510d6c-0x510db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00510d6c(int param_1)

{
  MCIERROR MVar1;
  undefined1 auStack_18 [4];
  undefined1 local_14;
  undefined4 local_10;

  FUN_0050f798(param_1);
  *(undefined4 *)(param_1 + 0x350) = 0x102;
  local_10 = 6;
  MVar1 = mciSendCommandW((uint)*(ushort *)(param_1 + 0x35a),0x814,0x102,(DWORD_PTR)auStack_18);
  *(MCIERROR *)(param_1 + 0x36c) = MVar1;
  return local_14;
}
