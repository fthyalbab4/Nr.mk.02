// rea decompile_all
// name: FUN_005e7dc0
// address: 0x5e7dc0
// body: available
// range: 0x5e7dc0-0x5e7e41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e7dc0(undefined4 param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;

  iVar6 = *param_3;
  pcVar4 = (char *)*param_2;
  iVar2 = param_5;
  while ((param_5 = iVar2, pcVar5 = pcVar4, 0 < param_4 && (0 < param_5))) {
    iVar1 = (int)*pcVar5;
    pcVar4 = pcVar5 + 1;
    iVar2 = param_5 + -1;
    if (iVar1 < 0) {
      if (iVar1 != -0x80) {
        iVar2 = 1 - iVar1;
        if (param_4 < 1 - iVar1) {
          iVar2 = param_4;
        }
        FUN_00404f38(iVar6,iVar2,*pcVar4);
        iVar6 = iVar6 + iVar2;
        param_4 = param_4 - iVar2;
        pcVar4 = pcVar5 + 2;
        iVar2 = param_5 + -2;
      }
    }
    else {
      iVar3 = iVar1 + 1;
      if (param_4 < iVar1 + 1) {
        iVar3 = param_4;
      }
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
      FUN_00404514(pcVar4,iVar6,iVar3);
      iVar6 = iVar6 + iVar3;
      param_4 = param_4 - iVar3;
      pcVar4 = pcVar4 + iVar3;
      iVar2 = iVar2 - iVar3;
    }
  }
  return;
}
