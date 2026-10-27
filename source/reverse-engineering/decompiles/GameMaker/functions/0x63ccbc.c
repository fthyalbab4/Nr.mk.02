// rea decompile_all
// name: FUN_0063ccbc
// address: 0x63ccbc
// body: available
// range: 0x63ccbc-0x63cd27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063ccbc(int param_1,char param_2,char param_3,char param_4)

{
  FUN_007022dc(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),*(undefined4 *)(param_1 + 0x3c));
  if (param_3 != '\0') {
    FUN_0063c904(param_1);
  }
  if (param_2 != '\0') {
    FUN_0063c9c8(param_1);
  }
  if (param_4 != '\0') {
    FUN_0063cb7c(param_1);
  }
  FUN_00644e28(*(undefined4 *)PTR_DAT_00781e14);
  FUN_004eed28(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc));
  return;
}
