// rea decompile_all
// name: FUN_00520664
// address: 0x520664
// body: available
// range: 0x520664-0x5206e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00520664(undefined4 param_1,uint param_2,byte param_3,char *param_4,char *param_5,
                 char *param_6,byte param_7)

{
  char cVar1;
  char cVar2;
  char cVar3;

  *param_6 = (char)((ulonglong)((param_2 & 0xff) + 3) / 0x33);
  *param_5 = (char)((ulonglong)(param_3 + 3) / 0x33);
  *param_4 = (char)((ulonglong)(param_7 + 3) / 0x33);
  cVar1 = *param_4;
  cVar2 = *param_5;
  cVar3 = *param_6;
  *param_6 = *param_6 * '3';
  *param_5 = *param_5 * '3';
  *param_4 = *param_4 * '3';
  return cVar1 + cVar2 * '\x06' + cVar3 * '$';
}
