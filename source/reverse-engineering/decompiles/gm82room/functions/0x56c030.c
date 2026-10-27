// rea decompile_all
// name: FUN_0056c030
// address: 0x56c030
// body: available
// range: 0x56c030-0x56c092 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056c030(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;

  if (*(int *)PTR_DAT_00689570 != 0) {
    cVar1 = FUN_0056b4d0(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_0056b4d0(param_4);
      if (cVar1 != '\0') {
        FUN_0056be38(param_1,param_2,param_3,*(undefined4 *)(DAT_0084527c + 8 + param_4 * 0x14),
                     *(undefined4 *)(DAT_0084527c + 4 + param_4 * 0x14),0,0,param_4);
      }
    }
  }
  return;
}
