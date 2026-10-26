// rea decompile_all
// name: FUN_00537030
// address: 0x537030
// body: available
// range: 0x537030-0x537063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00537030(void)

{
  int in_stack_00000004;
  undefined4 local_c;
  undefined1 local_8;

  local_c = *(undefined4 *)(in_stack_00000004 + -0x18);
  local_8 = 6;
  FUN_0041bf50(&LAB_00536060,1,PTR_LAB_006892d0,0,&local_c);
  FUN_00406ab4();
  return;
}
