// rea decompile_all
// name: FUN_00417914
// address: 0x417914
// body: available
// range: 0x417914-0x41793a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00417914(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;

  iVar3 = 0;
  iVar4 = param_3;
  pcVar5 = param_2;
  if (param_3 != 0) {
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_3 = param_3 - iVar4;
    do {
      pcVar5 = param_1;
      pcVar6 = param_2;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar6 = param_2 + 1;
      pcVar5 = param_1 + 1;
      cVar2 = *param_2;
      cVar1 = *param_1;
      param_1 = pcVar5;
      param_2 = pcVar6;
    } while (cVar1 == cVar2);
    iVar3 = (uint)(byte)pcVar5[-1] - (uint)(byte)pcVar6[-1];
  }
  return iVar3;
}
