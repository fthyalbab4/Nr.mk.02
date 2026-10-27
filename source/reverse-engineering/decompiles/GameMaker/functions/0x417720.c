// rea decompile_all
// name: FUN_00417720
// address: 0x417720
// body: available
// range: 0x417720-0x417750 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_00417720(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;

  bVar4 = param_3 == 0;
  iVar1 = param_3;
  pcVar3 = param_2;
  if (!bVar4) {
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar3 == '\0';
      pcVar3 = pcVar3 + 1;
    } while (!bVar4);
    if (bVar4) {
      iVar1 = iVar1 + 1;
    }
  }
  pcVar3 = param_1;
  for (uVar2 = (uint)(param_3 - iVar1) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar2 = param_3 - iVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar3 = *param_2;
    param_2 = param_2 + 1;
    pcVar3 = pcVar3 + 1;
  }
  *pcVar3 = '\0';
  return param_1;
}
