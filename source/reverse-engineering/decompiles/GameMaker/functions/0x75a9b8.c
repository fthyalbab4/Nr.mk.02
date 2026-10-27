// rea decompile_all
// name: FUN_0075a9b8
// address: 0x75a9b8
// body: available
// range: 0x75a9b8-0x75aa22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0075a9b8(void)

{
  if (DAT_00781504 == 0) {
    DAT_00781504 = FUN_00405a4c(&PTR_LAB_0042f444,1);
    FUN_0043ae88(DAT_00781504,&PTR_LAB_00757044);
    FUN_0043ae88(DAT_00781504,&PTR_LAB_00757370);
    FUN_0043ae88(DAT_00781504,&PTR_LAB_00756ec0);
    FUN_0043ae88(DAT_00781504,&PTR_LAB_007574f4);
    FUN_0043ae88(DAT_00781504,&PTR_LAB_007571e4);
  }
  return;
}
