// rea decompile_all
// name: FUN_006f4f08
// address: 0x6f4f08
// body: available
// range: 0x6f4f08-0x6f4f8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f4f08(int param_1,undefined4 param_2,ushort param_3,int param_4,int param_5)

{
  int iVar1;

  if ((((*(char *)(param_1 + 0x414) != '\0') && ((param_3 & 8) != 0)) && (*PTR_DAT_0078258c != '\0')
      ) && ((*PTR_DAT_0078234c != '\0' &&
            ((iVar1 = *(int *)(param_1 + 0x3fc), param_5 != *(int *)(iVar1 + 8) ||
             (param_4 != *(int *)(iVar1 + 0xc))))))) {
    *(int *)(iVar1 + 8) = param_5;
    *(int *)(iVar1 + 0xc) = param_4;
    FUN_00530760(*(undefined4 *)(param_1 + 0x3dc),param_5);
    FUN_00530760(*(undefined4 *)(param_1 + 0x3e0),param_4);
    FUN_006f462c(param_1);
    FUN_006f5ac8(*(undefined4 *)(param_1 + 0x40c));
    *(undefined1 *)(param_1 + 0x408) = 1;
  }
  return;
}
