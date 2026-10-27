// rea decompile_all
// name: FUN_00495464
// address: 0x495464
// body: available
// range: 0x495464-0x49549e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00495464(void)

{
  if (DAT_0068f1a0 != (HHOOK)0x0) {
    UnhookWindowsHookEx(DAT_0068f1a0);
  }
  DAT_0068f1a0 = (HHOOK)0x0;
  DAT_0068f1b0 = 0;
  DAT_0068f1a4 = 0;
  DAT_0068f1ac = 0xffffffff;
  PTR_FUN_0068141c._0_1_ = 0;
  return;
}
