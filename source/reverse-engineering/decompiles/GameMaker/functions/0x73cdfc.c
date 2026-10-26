// rea decompile_all
// name: FUN_0073cdfc
// address: 0x73cdfc
// body: available
// range: 0x73cdfc-0x73ce27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


PVOID FUN_0073cdfc(LPCVOID param_1)

{
  _MEMORY_BASIC_INFORMATION local_1c;

  local_1c.AllocationBase = (PVOID)0x0;
  VirtualQuery(param_1,&local_1c,0x1c);
  if (local_1c.State != 0x1000) {
    local_1c.AllocationBase = (PVOID)0x0;
  }
  return local_1c.AllocationBase;
}
