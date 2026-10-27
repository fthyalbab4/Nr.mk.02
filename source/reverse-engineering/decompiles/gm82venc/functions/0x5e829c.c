// rea decompile_all
// name: FUN_005e829c
// address: 0x5e829c
// body: available
// range: 0x5e829c-0x5e830b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e829c(undefined4 param_1,undefined4 *param_2,int *param_3,undefined4 param_4,int param_5
                 )

{
  char cVar1;
  int iVar2;
  short sVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;

  iVar6 = *param_3;
  pcVar5 = (char *)*param_2;
  while (0 < param_5) {
    cVar1 = *pcVar5;
    pcVar4 = pcVar5 + 1;
    if (cVar1 < '\0') {
      sVar3 = (short)cVar1;
      FUN_00404514(pcVar4,iVar6,-(int)sVar3);
      iVar2 = -(int)sVar3;
      pcVar5 = pcVar4 + -(int)sVar3;
      param_5 = param_5 + -1 + (int)sVar3;
    }
    else {
      FUN_00404f38(iVar6,(short)cVar1 + 1,*pcVar4);
      iVar2 = (short)cVar1 + 1;
      pcVar5 = pcVar5 + 2;
      param_5 = param_5 + -2;
    }
    iVar6 = iVar6 + iVar2;
  }
  return;
}
