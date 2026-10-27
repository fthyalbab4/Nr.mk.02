// rea decompile_all
// name: FUN_00545d70
// address: 0x545d70
// body: available
// range: 0x545d70-0x545daa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00545d70(void)

{
  BOOL BVar1;
  _cpinfo local_14;

  local_14.MaxCharSize = 0;
  BVar1 = GetCPInfo(0,&local_14);
  if (BVar1 == 0) {
    FUN_0041be80(&PTR_LAB_00545ad4,1,PTR_LAB_006894fc);
    FUN_00406ab4();
  }
  else {
    DAT_00711848 = local_14.DefaultChar[0];
  }
  return;
}
