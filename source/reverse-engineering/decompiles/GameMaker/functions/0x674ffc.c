// rea decompile_all
// name: FUN_00674ffc
// address: 0x674ffc
// body: available
// range: 0x674ffc-0x675041 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00674ffc(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;

  FUN_00449268(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    cVar1 = FUN_00405c98(param_2,&PTR_LAB_0066dfc0);
    if (cVar1 != '\0') {
      iVar2 = FUN_0043b0b0(*(undefined4 *)(param_1 + 0x34),param_2);
      if (iVar2 != -1) {
        FUN_0043aee0(*(undefined4 *)(param_1 + 0x34),iVar2);
      }
    }
  }
  return;
}
