// rea decompile_all
// name: FUN_00552798
// address: 0x552798
// body: available
// range: 0x552798-0x5527e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00552798(int param_1)

{
  char cVar1;
  SIZE_T SVar2;
  _MEMORY_BASIC_INFORMATION local_20;

  local_20.AllocationBase = (PVOID)0x0;
  SVar2 = VirtualQuery(*(LPCVOID *)(param_1 + 4),&local_20,0x1c);
  if ((SVar2 == 0x1c) && ((local_20.State._2_1_ & 1) == 0)) {
    cVar1 = FUN_00552a30(&PTR_LAB_0054c008,*(undefined4 *)(param_1 + 4),
                         *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x10));
  }
  else {
    cVar1 = '\x01';
  }
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}
