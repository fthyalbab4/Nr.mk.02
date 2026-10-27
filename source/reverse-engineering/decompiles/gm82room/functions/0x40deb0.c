// rea decompile_all
// name: FUN_0040deb0
// address: 0x40deb0
// body: available
// range: 0x40deb0-0x40df12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40dec8 (push 0x40df13 followed by fs-segment stack chaining); handler 0x40df13 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040deb0(void)

{
  LPCSTR lpProcName;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  HMODULE in_stack_00000004;
  LPCSTR in_stack_00000008;
  undefined4 local_8;

  local_8 = 0;
  *in_FS_OFFSET = &stack0xffffffe4;
  if ((uint)in_stack_00000008 >> 0x10 == 0) {
    GetProcAddress(in_stack_00000004,in_stack_00000008);
  }
  else {
    FUN_004075c4(&local_8,in_stack_00000008,0);
    lpProcName = (LPCSTR)FUN_00407ae0(local_8);
    GetProcAddress(in_stack_00000004,lpProcName);
  }
  *in_FS_OFFSET = &LAB_0040df13;
  FUN_004072d8(&local_8,&LAB_0040df13,unaff_ESI);
  return;
}
